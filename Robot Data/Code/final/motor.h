void motor(int R_wheel, int L_wheel) {
  analogWrite(ENA, R_wheel);
  if (R_wheel < 0) {
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
  }
  else if (R_wheel > 0) {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
  } else {
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, HIGH);
  }

  analogWrite(ENB, L_wheel);
  if (L_wheel < 0) {
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
  }
  else if (L_wheel > 0) {
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
  } else {
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, HIGH);
  }
}
