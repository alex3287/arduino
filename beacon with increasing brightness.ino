int ledPin = 9;
int pause=5;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  for (int i=0; i<256; i++)
  {
    analogWrite(ledPin,i);
    delay(pause);
  }
  delay(1000);
  for (int i=255; i>-1; i--)
  {
    analogWrite(ledPin,i);
    delay(pause);
  }
  delay(1000);
}
