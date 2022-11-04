void motor_init() {
  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (IN3, OUTPUT);
  pinMode (IN4, OUTPUT);
}

void ir_init() {
//  pinMode (SENS_1, INPUT);
  pinMode (SENS_2, INPUT);
  pinMode (SENS_3, INPUT);
  pinMode (SENS_4, INPUT);
//  pinMode (SENS_5, INPUT);
}

void serial_init() {
  Serial.begin(9600);
}
