#include<EEPROM.h>

#define right_pwm_pin 6
#define right_dir_pin 29
#define left_pwm_pin 9
#define left_dir_pin 27

#define encoderpinXA 2
#define encoderpinXB 3
#define ahead_delay 90 //( 12.13V,420,100pwm;12.05,170,100pwm )
# define dry_run_pin 49

bool d[8];  // bool
int sens_val = 0, junction = 0;
int num = 0, deno = 0, count;
float error = 0, last_error = 0;
byte base_spd = 220;
byte forward = 1, back = 0;
long int current_xa, current_xb, previous_xa, previous_xb, encoderpos1;
int i = 0;
float kp = 0.5 ;
float kd = 4; //4
bool left_preference = false;
int turn[100];
bool dry_run;
bool print_flag = true;

//bool dry_run = false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(right_pwm_pin, OUTPUT);
  pinMode(right_dir_pin, OUTPUT);
  pinMode(left_pwm_pin, OUTPUT);
  pinMode(left_dir_pin, OUTPUT);
  pinMode(dry_run_pin, INPUT);

  //  pinMode(encoderpinXA, INPUT);
  //  pinMode(encoderpinXB, INPUT);
  //
  //  attachInterrupt(digitalPinToInterrupt(encoderpinXA), encoderXA, RISING);
  //  attachInterrupt(digitalPinToInterrupt(encoderpinXB), encoderXB, RISING);

  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  pinMode(A5, INPUT);
  pinMode(A6, INPUT);
  pinMode(A10, INPUT);
  dry_run = digitalRead(dry_run_pin);
  if (!dry_run) {
    for (byte i = 0; i < 100; i++) {
      Serial.print(i);
      Serial.print("\t");
      Serial.println(EEPROM.read(i));
      turn[i] = EEPROM.read(i);
    }
    for (int k = 0; k < 30; k++)
    {
      Serial.println(turn[i]);
    }
  }
  else{
    Serial.println("Dry Run");
  }

}

void loop()
{
  pid_controller();
}
