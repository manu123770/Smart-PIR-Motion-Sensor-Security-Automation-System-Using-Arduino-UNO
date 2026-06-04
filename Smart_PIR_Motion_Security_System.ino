int pirPin = 7;
int ledPin = 13;
void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(pirPin, INPUT);
  Serial.begin(9600);
}
void loop() 
{
  int motion = digitalRead(pirPin);
  if (motion==HIGH)
  {
    Serial.println("Motion is detected");
    digitalWrite(ledPin, HIGH);
  }
  else
  {
    Serial.println("Motion is not detected");
    digitalWrite(ledPin,LOW);
  }
  delay(1000);
}
