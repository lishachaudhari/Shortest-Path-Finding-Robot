void right() {
  stop_bot();
  delay(50);//100
  read_sensor();

  right_motor(250, back);
  left_motor(250, forward);

  while (!d[7])
    read_sensor();

  right_motor(190, back);
  left_motor(190, forward);

  while (!d[6])
    read_sensor();

  right_motor(130, back);
  left_motor(130, forward);

  while (!d[5])
    read_sensor();


  right_motor(120, back);
  left_motor(120, forward);

  while (!d[4])
    read_sensor();

  right_motor(80, back);
  left_motor(80, forward);

  while (!d[3])
    read_sensor();

  stop_bot();
  delay(100);//300

  //  right_motor(0, back);
  //  left_motor(0, forward);
  //  //  turn with full speed until 0th sensor goes high
  //  turn with full speed until 0th sensor goes low
  //  get error
  //  error*0.7 + error*abs(error)*(0.7)*0.7
}

void left() {
  stop_bot();
  delay(50);
  while (!d[0])
    read_sensor();

  right_motor(190, forward);
  left_motor(190, back);

  while (!d[1])
    read_sensor();

  right_motor(130, forward);
  left_motor(130, back);

  while (!d[2])
    read_sensor();


  right_motor(120, forward);
  left_motor(120, back);

  while (!d[3]) 
    read_sensor();

  right_motor(60, forward);
  left_motor(60, back);

  while (!d[4])
    read_sensor();

  stop_bot();
  delay(100);//300
}

void straight() {
  right_motor(base_spd, forward);
  left_motor(base_spd, forward);
}

void backward(){
  right_motor(base_spd, back);
  left_motor(base_spd, back);
}

void stop_bot() {
  right_motor(0, forward);
  left_motor(0, forward);
}
void U_turn() {
  right();
}
