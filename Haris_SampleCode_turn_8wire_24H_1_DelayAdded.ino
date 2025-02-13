// This code is by Hari Wiguna for Tony Fleming 2-13-2025
// This simple code turns the 8-wire NIDEC 24H motor to ONE DIRECTION only

void setup() {
  // Pins D9 and D10 - 31.4 kHz
  TCCR1A = 0b00000001;  // 8bit
  TCCR1B = 0b00000001;  // x1 phase correct

  pinMode(10, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:

analogWrite(10, 220); // 10 is the pin, 64 is the speed: ranges 0 to 255.  I believe 0 is max speed!

  delay(2000);

  analogWrite(10, 255);

  delay(1000);
}
