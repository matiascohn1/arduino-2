// C++ code
//
int temperatura;


void setup()
{
  pinMode(3,INPUT);
  Serial.begin(9600);
}

void loop()
{
  temperatura = -40 + 0.488155 * (analogRead(A0) - 20);
  Serial.print("la temperatura es: ");
  Serial.print(temperatura);
  
    
  delay(10); // Delay a little bit to improve simulation performance
}
