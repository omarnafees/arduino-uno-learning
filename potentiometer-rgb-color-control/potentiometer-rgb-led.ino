int pot = A0;
int red = 9;
int green = 6;
int blue = 3;

void setup() {

  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);

}

void loop() {

  int value = analogRead(pot);

  if (value <= 255) {

    rgbcolors(255, value, 0);

  }

  else if (value <= 511) {

    rgbcolors(511 - value, 255, 0);

  }

  else if (value <= 767) {

    rgbcolors(0, 767 - value, value - 512);

  }

  else {

    rgbcolors(value - 768, 0, 255);

  }

}

void rgbcolors(int r, int g, int b) {

  analogWrite(red, r);
  analogWrite(green, g);
  analogWrite(blue, b);

}
