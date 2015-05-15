int ledPinBlink = 13;
int ledPinBtn = 10;
int buttonPin = 8;
int buttonStatus;
int ledStatus = LOW;

int interval = 200;
unsigned long prev;

void storeTime() {
  prev = millis();
}

void setup() {
  pinMode(ledPinBlink, OUTPUT);
  pinMode(ledPinBtn, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  if((millis() - prev) > interval) {
    storeTime();
    ledStatus = !ledStatus;
    digitalWrite(ledPinBlink, ledStatus);
  }
  buttonStatus = digitalRead(buttonPin);
  if (buttonStatus == LOW)
    digitalWrite(ledPinBtn, HIGH);
  else
    digitalWrite(ledPinBtn, LOW);
}
