#define SENS_1 A1
#define SENS_2 A2
#define SENS_3 A3
#define SENS_4 A4
#define SENS_5 A5

int sensor_M, sensor_R, sensor_RR, sensor_L, sensor_LL;

void setup() {
  // put your setup code here, to run once:
  pinMode (SENS_1, INPUT);
  pinMode (SENS_2, INPUT);
  pinMode (SENS_3, INPUT);
  pinMode (SENS_4, INPUT);
  pinMode (SENS_5, INPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensor_LL = digitalRead (SENS_1);
  sensor_L = digitalRead (SENS_2);
  sensor_M = digitalRead (SENS_3);
  sensor_R = digitalRead (SENS_4);
  sensor_RR = digitalRead (SENS_5);

  Serial.println(sensor_LL);
  Serial.println(sensor_M);
  Serial.println(sensor_RR);
  
  delay (500);
}
