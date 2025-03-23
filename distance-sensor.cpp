// C++ code
//
int distancia = 0;

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

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  distancia = 0.01723 * readUltrasonicDistance(8, 8);
  if (distancia <= 50) {
    digitalWrite(13, HIGH);
    digitalWrite(10, LOW);
  } else {
    digitalWrite(13, LOW);
    digitalWrite(10, HIGH);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
