#define LED 7
#define Chave 2

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(Chave, INPUT);

}

void loop()
{
  if(digitalRead(Chave)==0){
  	digitalWrite(LED, HIGH);
  } else{
  	digitalWrite(LED, LOW);
  }
  
}