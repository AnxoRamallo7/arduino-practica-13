// C++ code
//
void setup()
{
  pinMode(10, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  if (digitalRead(10) == LOW) {
    //en esta etapa añdimos a condicion que vai a seguir o noso circuito para funcionar
    //si esta mesma non se cumple o circuito non traballa,a codicion e ter o pin 10(pulsador)en baixa
    
    digitalWrite(LED_BUILTIN, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    delay(10000); // Wait for 10000 millisecond(s)
    //en esta etapa os leds dos pins 12,11 estan apagados xa que o pin 13 esta funcionando
    //e estes dous traballan de forma pralela a el
    
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(LED_BUILTIN, LOW);
    delay(4000); // Wait for 4000 millisecond(s)
    //ahora como o led do pin 13 vai estar apagado permitimos que funcionen os pins 12 e 11
    
  }
}
