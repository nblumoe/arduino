int ledPin = 13;
int impulse = 500;
int periode = 1500;

void setup() {
     pinMode(ledPin, OUTPUT);
}

void loop() {
     digitalWrite(13, HIGH);
     delay(impulse);
     digitalWrite(13, LOW);
     delay(periode);
}
