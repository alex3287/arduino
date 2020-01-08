int digits[10][8] = {
    {1,1,1,1,1,1,0,0}, // 0
    {0,1,1,0,0,0,0,0}, // 1
    {1,1,0,1,1,0,1,0}, // 2
    {1,1,1,1,0,0,1,0}, // 3
    {0,1,1,0,0,1,1,0}, // 4
    {1,0,1,1,0,1,1,0}, // 5
    {1,0,1,1,1,1,1,1}, // 6
    {1,1,1,0,0,0,0,0}, // 7
    {1,1,1,1,1,1,1,0}, // 8
    {1,1,1,1,0,1,1,1}  // 9
    };

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
  
  for(int digit = 0; digit < 10; digit++) {
    for (int pin = 0; pin < 8; pin++){
      if (digits[digit][pin] == 1)
        digitalWrite(pin+2, HIGH);
      else 
        digitalWrite(pin+2, LOW);
    }
    delay(2000);
  }
}
