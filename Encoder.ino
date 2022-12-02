//void encoderXA()
//{
//  if (digitalRead(encoderpinXA) == HIGH) {
//    if (digitalRead(encoderpinXB) == HIGH) {
//      encoderpos1++;
//    }
//  }
//}
//
//void encoderXB()
//{
//  if (digitalRead(encoderpinXB) == HIGH) {
//    if (digitalRead(encoderpinXA) == HIGH) {
//      encoderpos1--;
//    }
//  }
//}

//void encoderXA() {
//  current_xa = digitalRead(encoderpinXA);
//  if (current_xa != previous_xa) {
//    if (digitalRead(encoderpinXA) == HIGH) {
//      //Serial.println("Inside1");
//      if (digitalRead(encoderpinXB) == HIGH) {
//        encoderpos1--;
//      }
//      else {
//        encoderpos1++;
//      }
//    }
//    previous_xa = current_xa;
//  }
//  else {
//    current_xb = digitalRead(encoderpinXB);
//    if (current_xb != previous_xb) {
//      if (digitalRead(encoderpinXB) == LOW) {
//        encoderpos1--;
//      }
//      else {
//        encoderpos1++;
//      }
//    }
//    previous_xb = current_xb;
//  }
//  Serial.println(encoderpos1);
//}
//
//void encoderXB() {
//  current_xb = digitalRead(encoderpinXB);
//  if (current_xb != previous_xb) {
//    if (digitalRead(encoderpinXB) == HIGH) {
//      if (digitalRead(encoderpinXA) == HIGH) {
//        //Serial.println("Inside1");
//        encoderpos1++;
//      }
//      else {
//        encoderpos1--;
//      }
//    }
//    previous_xb = current_xb;
//  }
//  else {
//    current_xa = digitalRead(encoderpinXA);
//    if (current_xa != previous_xa) {
//      if (digitalRead(encoderpinXA) == LOW) {
//        encoderpos1++;
//      }
//      else {
//        encoderpos1--;
//      }
//    }
//    previous_xa = current_xa;
//  }
//    Serial.println(encoderpos1);
//}
