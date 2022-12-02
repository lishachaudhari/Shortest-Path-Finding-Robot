byte junction_type()
{
  //  Serial.print("In junction type");
//  read_sensor();
  delay(30);    // To read junction properly
//  Serial.print("After junction");
  read_sensor();
  print_sensor_read();
  bool check_right = (d[7] + d[6] + d[5] + d[4]) >= 3;
  bool check_left = (d[0] + d[1] + d[2] + d[3]) >= 3;
  inch (ahead_delay);
  read_sensor();
  byte sum = 0;
  for(byte i=0; i<8; i++){
    sum += d[i]; 
  }
  if (sum > 4){
    return 16;
  }
//  bool straight_to_check = (d[2] + d[3] + d[4] + d[5]) >= 2;
  bool straight_to_check = (d[2] + d[3] + d[4] + d[5]) >= 2;
  //  int value;

//  Serial.println(1 * check_right + 2 * straight_to_check + 4 * check_left);
  return 1 * check_right + 2 * straight_to_check + 4 * check_left;

}
