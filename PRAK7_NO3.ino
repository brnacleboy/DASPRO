void setup() {
  Serial.begin(9600);

  for (byte i = 1; i <= 20; i++) {
    Serial.print(i);
    Serial.print(',');
    if (i % 2 == 1) Serial.println("Ganjil");
    else Serial.println("Genap");
  }
}

void loop() {
}
