const int ledPinBlink = 13;
const int ledPinBtn = 10;
const int buttonPin = 8;
int buttonStatus;
int lastButtonStatus = LOW;
int ledBlinkStatus = LOW;
int ledBtnStatus = LOW;

int interval = 200;
unsigned long prev;
unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;

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
    ledBlinkStatus = !ledBlinkStatus;
    digitalWrite(ledPinBlink, ledBlinkStatus);
  }
  int reading = digitalRead(buttonPin);
  if (reading != lastButtonStatus)
    lastDebounceTime = millis();
  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (reading != buttonStatus) {
      buttonStatus = reading;

      if (buttonStatus == LOW)
        ledBtnStatus = !ledBtnStatus;
    }
  }
  digitalWrite(ledPinBtn, ledBtnStatus);

  lastButtonStatus = reading;
}
