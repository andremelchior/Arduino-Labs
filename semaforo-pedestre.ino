// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  digitalWrite(10, HIGH);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(12, LOW);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(2000); // Wait for 1000 millisecond(s)
  
  digitalWrite(7, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(6, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  if(digitalRead(2) == 0){
  	  	digitalWrite(10, LOW); //VERDE
      	digitalWrite(12, HIGH); //AMARELO
  		delay(3000); // Wait for 1000 millisecond(s)
        digitalWrite(12, LOW); //AMARELO
        digitalWrite(13, HIGH); //VERMELHO
    
        digitalWrite(7, LOW); //VERMELHO PEDESTRE
        digitalWrite(6, HIGH); //VERDE PEDESTRE
  		delay(7000); // Wait for 1000 millisecond(s)
    
        digitalWrite(6, LOW); //VERDE PEDESTRE
    	digitalWrite(7, HIGH); //VERMELHO PEDESTRE
    
		digitalWrite(13, LOW); //VERMELHO
    	digitalWrite(10, LOW); //VERDE
  }
}