const byte RED = 13;
const byte BLUE = 12;
const byte GREEN = 11;

void setup()
{
  pinMode(RED, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

/*
void loop()
{
  analogWrite(RED, 10);
  analogWrite(BLUE, 60);
  analogWrite(GREEN, 90);
  delay(500);
}
*/

void loop()
{
  analogWrite(RED, random(256));
  analogWrite(BLUE, random(256));
  analogWrite(GREEN, random(256));
  delay(700);
}
