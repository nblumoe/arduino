int pulsePin = 8;
int storePin = 9;
int dataPin  = 10;
const byte BitMap[10] = {
  B10000001,
  B01000010,
  B00100100,
  B00011000,
  B00111100,
  B01111110,
  B11111111,
  B11100111,
  B11000011,
  B10000001
};
boolean forward = true;
int counter = 0;

void setup() {
  pinMode(pulsePin, OUTPUT);
  pinMode(storePin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}

void loop() {
  byte value = BitMap[counter];
  digitalWrite(storePin, LOW);
  shiftOut(dataPin, pulsePin, LSBFIRST, value);
  digitalWrite(storePin, HIGH);
  delay(200);
  if (counter == sizeof(BitMap) - 1)
    forward = false;
  if (counter == 0)
    forward = true;
  if (forward)
    counter++;
  else
    counter--;
}