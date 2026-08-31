// C++ code
//

int ledVerde = 13;
int ledAmarelo = 7;
int ledVermelho = 4;
int sensor = A5;
void setup()
{
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(sensor, INPUT);

}

void loop()
{
   int valorSensor = analogRead(sensor);

  float tensao = valorSensor * (5.0 / 1023.0);
  float temperatura = (tensao - 0.5) * 100;
  
  if (temperatura < 40)
  {
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, LOW);
  }

  
  else if (temperatura >= 40 && temperatura < 90)
  {
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledVermelho, LOW);
  }

 
  else
  {
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, HIGH);
  }

  delay(1000);
}
