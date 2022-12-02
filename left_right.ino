void left_right(byte sum)
{
  //  byte sum = (d[7] + d[6] + d[5] + d[4] + d[3] + d[2] + d[1] + d[0]) ;
  if (sum > 4)
  {
//    Serial.println("Junction Detected");
    int value = junction_type();
   // Serial.print("Junction type ");
    //Serial.println(value);
    preference(value);
  }
  else if (sum < 1)
  {
    i -= 1;
    U_turn();
  }
  //  if ((d[0] + d[1] + d[2] + d[3]) > 3)
  //  {
  //    Serial.println("left turn detected");
  //    //  inch();
  //    // left();
  //    stop_bot();
  //    delay(-1);
  //  }
}
