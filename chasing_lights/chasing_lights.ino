

int pinsTotal = 8;
int pins[] = {2,3,4,5,6,7,8,9};

// the setup function runs once when you press reset or power the board
void setup() {
for(int i=0; i<pinsTotal; i=i+1) {
  pinMode(pins[i], OUTPUT);
}
}

// the loop function runs over and over again forever
void loop() {
  for(int i=0; i<pinsTotal; i=i+1) {
    digitalWrite(pins[i], HIGH);
    delay(100);
    digitalWrite(pins[i], LOW);
  }
  for(int i=pinsTotal-1; i>0; i=i-1) {
    digitalWrite(pins[i], HIGH);
    delay(100);
    digitalWrite(pins[i], LOW);
  }
}
