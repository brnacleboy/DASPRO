int Hasil1, Hasil2;
byte input=10;

void setup() {
  Serial.begin(9600);
  Hasil1 = !(input > 3);
  Hasil2 = !(input < 3);
  Serial.print("Hasil 1 : ");
  Serial.println(Hasil1);
  Serial.print("Hasil 2 : ");
  Serial.println(Hasil2);
}

void loop() {
}
