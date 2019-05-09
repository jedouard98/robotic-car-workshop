/*  Arduino DC Motor Control - PWM | H-Bridge | L298N
         Example 02 - Arduino Robot Car Control
   Credit to Dejan Nedelkovski, www.HowToMechatronics.com
*/
const int enAPin = 6; // Left motor PWM speed control
const int in1Pin = 7; // Left motor Direction 1
const int in2Pin = 5; // Left motor Direction 2
const int in3Pin = 4; // Right motor Direction 1
const int in4Pin = 2; // Right motor Direction 2
const int enBPin = 3; // Right motor PWM speed control

void setup() {
  pinMode(enAPin, OUTPUT);
  pinMode(enBPin, OUTPUT);
  pinMode(in1Pin, OUTPUT);
  pinMode(in2Pin, OUTPUT);
  pinMode(in3Pin, OUTPUT);
  pinMode(in4Pin, OUTPUT);
}

void moveForward() {
    // Set Motor A forward
    digitalWrite(in1Pin, LOW);
    digitalWrite(in2Pin, HIGH);
    // Set Motor B forward
    digitalWrite(in3Pin, LOW);
    digitalWrite(in4Pin, HIGH);

    // Speeds for motors Must be between 0 and 255
    int motorSpeedA = 200;
    int motorSpeedB = 200;
    analogWrite(enAPin, motorSpeedA); // Send PWM signal to motor A
    analogWrite(enBPin, motorSpeedB); // Send PWM signal to motor B
}

void moveBackwards() {
     // Set Motor A backward
    digitalWrite(in1Pin, HIGH);
    digitalWrite(in2Pin, LOW);
    // Set Motor B backward
    digitalWrite(in3Pin, HIGH);
    digitalWrite(in4Pin, LOW);

    // Speeds for motors Must be between 0 and 255
    int motorSpeedA = 200;
    int motorSpeedB = 200;
    analogWrite(enAPin, motorSpeedA); // Send PWM signal to motor A
    analogWrite(enBPin, motorSpeedB); // Send PWM signal to motor B
}

void stopMoving() {
    int motorSpeedA = 0;
    int motorSpeedB = 0;
    analogWrite(enAPin, motorSpeedA); // Send PWM signal to motor A
    analogWrite(enBPin, motorSpeedB);  // Send PWM signal to motor B
}

void moveLeft() {
     // Implement this!
}

void moveRight() {
     // Implement this!
}

void loop() {
  moveForward();
  delay(2000);
  moveBackwards();
  delay(2000);
}
