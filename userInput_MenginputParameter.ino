char karakter;
int y, x1, x2, x3;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // parameter 1
  karakter = '\0';
  Serial.print("x1 = ");
  while (1) {
    if (Serial.available() > 0) {
      karakter = Serial.read();
      break;
    }
  }
  if (isDigit(karakter)) {
    x1 = karakter - '0';
    Serial.println(x1);
  }

  // parameter 2
  karakter = '\0';
  Serial.print("x2 = ");
  while (1) {
    if (Serial.available() > 0) {
      karakter = Serial.read();
      break;
    }
  }
  if (isDigit(karakter)) {
    x2 = karakter - '0';
    Serial.println(x2);
  }

  // parameter 3
  karakter = '\0';
  Serial.print("x3 = ");
  while (1) {
    if (Serial.available() > 0) {
      karakter = Serial.read();
      break;
    }
  }
  if (isDigit(karakter)) {
    x3 = karakter - '0';
    Serial.println(x3);
  }

  y = pow(x1, 3) + 20 * x2 - x3;
  Serial.print("Hasil Kalkulasi = ");
  Serial.println(y);
  Serial.println("___");
}