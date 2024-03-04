byte alas = 4;
byte tinggi = 6;
byte miring  = 8;

void setup() {
  Serial.begin(9600);
  byte luas = 0.5 * alas * tinggi;
  byte keliling;
  keliling = alas + tinggi + miring;

  Serial.print("Luas = ");
  Serial.println(luas);
  Serial.print("Keliling = ");
  Serial.println(keliling);
}

void loop() {
}
