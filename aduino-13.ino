// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(10, INPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  //en esta etapa el led pin 13 se enciende durante 10 seg
  digitalWrite(LED_BUILTIN, LOW);
  delay(4000); // Wait for 4000 millisecond(s)
  //ahora el led pin 13 se apaga y retrasa 4 seg el otro led
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  //ahora la lampara pin 11 y el led pin 12
  //se encienden simultaneamente
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  delay(4000); // Wait for 4000 millisecond(s)
  //la lampara y el led se apagan simulaneamente 
  //terminando el bucle
  
  if (digitalRead(10) == LOW) {
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(LED_BUILTIN, LOW);
    //ahora si prememos o pulsador o noso circuito se apaga totalmente
  }
}
