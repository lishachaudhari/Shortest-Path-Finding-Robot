void right_motor(int pwm_right, byte dir_right)
{
  analogWrite(right_pwm_pin, pwm_right);
  digitalWrite(right_dir_pin, dir_right);
}

void left_motor(int pwm_left, byte dir_left)
{
  analogWrite(left_pwm_pin,  pwm_left);
  digitalWrite(left_dir_pin, dir_left);
}
