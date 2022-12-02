void preference(int value) {
  if (dry_run) {
    //  if (value == 0)
    //  {
    //    // dead end;
    //    i -= 1;
    //    right();
    //  }
    i += 1;
    if (value & 16) {
      stop_bot();
      turn[i] = 16;
      for (byte i = 0; i < 100; i++) {
        EEPROM.write(i, turn[i]);
      }
      Serial.print( " dealy(-1)");
      delay(-1);
    }
    else if ( left_preference )
    {
      if (value & 4 )
      {
        //go left
        left();
        turn[i] += 1;

        // store turn
      }
      else if (value & 2)
      {
        straight();
        //straight
        turn[i] += 2;
      }
      else if (value & 1)
      {
        //go right
        right();
        turn[i] += 3;
      }

    }
    else
    {
      if (value & 1)
      {
        // go right
        right();
        Serial.println("Right");
        turn[i] += 3;
        // store turn
      }
      else if ( value & 2 )
      {
        // straight
        straight();
        Serial.println("straight");
        turn[i] += 2;
      }
      else
      {
        // store left
        left();
        Serial.println("left");
        turn[i] += 1;
      }
    }
    stop_bot();
    turn[i] %= 4;
    if (turn[i] == 0) { // turn[7] = 3; turn[8] = 3 ; turn[7] = 3; turn [8] = 1; turn[7] = 3; turn[8] = 3;
      i -= 1;
    }
  }
  else {
    i += 1;
    byte turn_no = turn[i];
    if ( turn_no == 3) {
      right();
    }
    else if (turn_no == 2) {
      straight();
    }
    else if (turn_no == 1){
      left();
    }
    else{
      stop_bot();
      delay(-1);
      Serial.print( " dealy(-1)");
    }
  }
}
