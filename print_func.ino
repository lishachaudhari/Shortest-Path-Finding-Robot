void print_sensor_read(){
    if (print_flag == true) {
    Serial.print(d[0]);
    Serial.print(d[1]);
    Serial.print(d[2]);
    Serial.print(d[3]);
    Serial.print(d[4]);
    Serial.print(d[5]);
    Serial.print(d[6]);
    Serial.print(d[7]);
    Serial.println('\t');
  }
}
