// Left IR Sensor
const int leftSensor = 2; 
// Right IR Sensor
const int rightSensor = 3; 

// L298N Motor Driver Pins
const int IN1 = 8;  // Left Motor Forward
const int IN2 = 9;  // Left Motor Backward
const int IN3 = 10; // Right Motor Backward
const int IN4 = 11; // Right Motor Forward

void setup() {
  pinMode(leftSensor, INPUT);
  pinMode(rightSensor, INPUT);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  // Sensors reading (Assuming: 1 = Black Line, 0 = White surface)
  // Agar aapke sensors ulti reading de rahe hain, toh niche 1 aur 0 ko aapas me badal dena.
  int leftState = digitalRead(leftSensor);
  int rightState = digitalRead(rightSensor);

  if (leftState == 0 && rightState == 0) {
    // Dono white par hain -> Seedha chalo (Slow step)
    moveForward();
  } 
  else if (leftState == 1 && rightState == 0) {
    // Left sensor black line par aaya -> Left mudo
    turnLeft();
  } 
  else if (leftState == 0 && rightState == 1) {
    // Right sensor black line par aaya -> Right mudo
    turnRight();
  } 
  else if (leftState == 1 && rightState == 1) {
    // Dono black par hain (T-point ya stop market) -> Stop
    stopMotors();
  }
}

// ---- Motor Control Functions with Delays for Low Speed ----

void moveForward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  
  // Speed kam rakhne ke liye thoda sa chala kar stop karenge (Pulsing)
  delay(25); 
  stopMotors();
  delay(80); // Jitna ye delay badhaoge, speed utni hi kam hogi
}

void turnLeft() {
  // Left murne ke liye Left motor stop/back, Right motor forward
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  
  delay(25);
  stopMotors();
  delay(50);
}

void turnRight() {
  // Right murne ke liye Right motor stop/back, Left motor forward
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  
  delay(25);
  stopMotors();
  delay(50);
}

void stopMotors() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}