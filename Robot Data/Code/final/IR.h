void ir_read() {
//  sensor_LL = digitalRead (SENS_1);
  sensor_L = digitalRead (SENS_2);
  sensor_M = digitalRead (SENS_3);
  sensor_R = digitalRead (SENS_4);
//  sensor_RR = digitalRead (SENS_5);
}

void ir_BDC() {
  reading = 0;
  
//  if (sensor_RR) reading += 1;
  if (sensor_R) reading += 1;
  if (sensor_M) reading += 2;
  if (sensor_L) reading += 4;
//  if (sensor_LL) reading += 16;
}

void ir_printReadings(int kind) {
  if (kind == 1) {
//    Serial.print(sensor_RR);
//    Serial.print(" ");
    Serial.print(sensor_R);
    Serial.print(" ");
    Serial.print(sensor_M);
    Serial.print(" ");
    Serial.print(sensor_L);
    Serial.println(" ");
//    Serial.println(sensor_LL);
  }
  else{
    Serial.println(reading);
  }

  delay (200);
}
