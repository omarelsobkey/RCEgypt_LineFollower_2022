#define ENA 5
#define IN1 6
#define IN2 7
#define IN3 8
#define IN4 9
#define ENB 10

// RW_SPEED - LW_SPEED = 48
int RW_speed = 153, LW_speed = 105;

void setup() {
  // put your setup code here, to run once:
  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (IN3, OUTPUT);
  pinMode (IN4, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  // front
  motor(RW_speed,LW_speed);
  delay (500);
  
  // back
  motor(-RW_speed,-LW_speed);
  delay (500);
  
  // right
  motor(0,LW_speed);
  delay (500);
  
  // left
  motor(RW_speed,0);
  delay (500);
}

void motor(int R_wheel, int L_wheel) {
  analogWrite(ENA, R_wheel);
  if (R_wheel > 0) {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
  }
  else if (R_wheel < 0) {
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
  } else {
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, HIGH);
  }

  analogWrite(ENB, L_wheel);
  if (L_wheel > 0) {
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
  }
  else if (L_wheel < 0) {
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
  } else {
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, HIGH);
  }
}
