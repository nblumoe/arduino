int ledPin = 13;
int buttonPin = 8;
int buttonStatus;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  buttonStatus = digitalRead(buttonPin);
  if(buttonStatus == LOW)
    digitalWrite(ledPin, HIGH);
  else
    digitalWrite(ledPin, LOW);
}
