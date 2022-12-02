void inch(int wait) {
  right_motor(base_spd, forward);
  left_motor(base_spd, forward);
  delay(wait);
  stop_bot();
}
