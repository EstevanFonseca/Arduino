#include <Servo.h>

int dist = 0;
int servo = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

Servo servo_9;

void setup()
{
  servo_9.attach(9, 500, 2500);

  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  dist = 0.01723 * readUltrasonicDistance(7, 8);
  servo = 0;
  servo_9.write(90);
  if (dist >= 50) {
    digitalWrite(4, HIGH);
    digitalWrite(3, LOW);
    servo_9.write(180); //90
  } else {
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);
    servo_9.write(90);//0
  }
  Serial.println(dist);
  delay(10); // Delay a little bit to improve simulation performance
}
