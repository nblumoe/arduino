int ledPin = 13;
int impulse = 500;
int periode = 1500;

void setup() {
     pinMode(ledPin, OUTPUT);
}

void loop() {
     digitalWrite(ledPin, HIGH);
     delay(impulse);
     digitalWrite(ledPin, LOW);
     delay(periode);
}
