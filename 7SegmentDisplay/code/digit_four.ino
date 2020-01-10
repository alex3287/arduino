int four[8] = {0,1,1,0,0,1,1,0};

void setup() {
  for(int pin = 2; pin < 10; pin++){
      pinMode(pin, OUTPUT);
  }
  for(int pin = 2; pin < 10; pin++){
      digitalWrite(pin, HIGH);
      delay(300);
      digitalWrite(pin, LOW);
  }
}
void loop() {
  for (int i = 0; i < 8; i++){
    if (four[i] == 1)  
        digitalWrite(i+2, HIGH);
    else 
        digitalWrite(i+2, LOW);
  }
}
