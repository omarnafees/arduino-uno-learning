int RedLED = 3;
int YellowLED = 10;
int GreenLED = 6;

void setup() {
  pinMode(RedLED, OUTPUT);
  pinMode(YellowLED, OUTPUT);
  pinMode(GreenLED, OUTPUT);
}

void loop() {
  digitalWrite(RedLED, HIGH);
  digitalWrite(YellowLED, LOW);
  digitalWrite(GreenLED, LOW);
  delay(5000);

  digitalWrite(RedLED, LOW);

  for (int i = 0; i < 3; i++) {
    digitalWrite(YellowLED, HIGH);
    delay(500);
    digitalWrite(YellowLED, LOW);
    delay(500);
  }

  digitalWrite(GreenLED, HIGH);
  delay(5000);

  digitalWrite(GreenLED, LOW);

  for (int i = 0; i < 3; i++) {
    digitalWrite(YellowLED, HIGH);
    delay(500);
    digitalWrite(YellowLED, LOW);
    delay(500);
  }
}
