void pid_controller()
{
  if(cal_error()){
    float pid = 0  *error*abs(error) + kp * error + kd * (error - last_error);
  
    float left_spd = base_spd + pid;
    float right_spd = base_spd - pid;
  
    right_motor(constrain(abs(right_spd), 0, 240), 1);
    left_motor(constrain(abs(left_spd), 0, 240), 1);
  
    last_error = error;
  }
  else{
    last_error = 0;
//    delay(1000);
  }
}
