byte jari = 4;

void setup() {
  Serial.begin(9600);
  float luas = 3.14 * jari * jari;
  float keliling;
  keliling = 2 * 3.14 * jari;

  Serial.print("Luas = ");
  Serial.println(luas);
  Serial.print("Keliling = ");
  Serial.println(keliling);
}

void loop() {
}
