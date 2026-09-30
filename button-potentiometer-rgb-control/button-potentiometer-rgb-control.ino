int red = 9;
int green = 6;
int blue = 3;

int button = 4;
int pot = A0;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop() {

  int potvalue = analogRead(pot);
  int buttonstate = digitalRead(button);

  if (buttonstate == LOW) {

    if (potvalue <= 170) {

      int greenValue = map(potvalue, 0, 170, 0, 165);
      rgbcolors(255, greenValue, 0);

    }

    else if (potvalue <= 340) {

      int greenValue = map(potvalue, 170, 340, 165, 255);
      rgbcolors(255, greenValue, 0);

    }

    else if (potvalue <= 510) {

      int redValue = map(potvalue, 340, 510, 255, 0);
      rgbcolors(redValue, 255, 0);

    }

    else if (potvalue <= 680) {

      int blueValue = map(potvalue, 510, 680, 0, 255);
      rgbcolors(0, 255, blueValue);

    }

    else if (potvalue <= 850) {

      int greenValue = map(potvalue, 680, 850, 255, 0);
      rgbcolors(0, greenValue, 255);

    }

    else {

      int redValue = map(potvalue, 850, 1023, 0, 128);
      int greenValue = map(potvalue, 850, 1023, 0, 0);

      rgbcolors(redValue, greenValue, 255);
    }
  }

  else {
    rgbcolors(0, 0, 0);
  }
}

void rgbcolors(int redvalue, int greenvalue, int bluevalue) {
  analogWrite(red, redvalue);
  analogWrite(green, greenvalue);
  analogWrite(blue, bluevalue);
}
