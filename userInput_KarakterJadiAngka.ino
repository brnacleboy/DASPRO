void setup() {
  Serial.begin(9600);
}

void loop() {
  while (Serial.available() > 0) {
    int somay = Serial.read();
    Serial.write(somay);
    Serial.write(' ');
    Serial.print(somay, DEC);
    Serial.write(' ');
    Serial.print(somay, HEX);
    Serial.write(' ');
    Serial.print(somay, BIN);
    Serial.write(' ');
    Serial.println(somay, OCT);
  }
}
