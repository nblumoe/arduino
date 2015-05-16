int pulsePin = 8;
int storePin = 9;
int dataPin  = 10;
byte value = B10011101;

void setup() {
  pinMode(pulsePin, OUTPUT);
  pinMode(storePin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}

void loop() {
  digitalWrite(storePin, LOW);
  shiftOut(dataPin, pulsePin, LSBFIRST, value);
  digitalWrite(storePin, HIGH);
  delay(20);
}