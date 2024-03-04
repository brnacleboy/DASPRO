void setup() {
  Serial.begin(9600);
  int nilai1 = 25;
  int nilai2 = 10;
  int hasil1 = nilai1 + nilai2;
  int hasil2 = nilai1 - nilai2;
  int hasil3 = nilai1 * nilai2;
  float hasil4 = float(hasil1) / (float)hasil2;
  int hasil5 = nilai1 % nilai2;

  int x = 2 + 3;
  int y = 35 - 45;
  int z = 200 * 100;
  float a = 35.5 / 10.00;
  int b = 45 % 4;

  Serial.println("hasil1 = " + String(hasil1));
  Serial.println("hasil2 = " + String(hasil2));
  Serial.println("hasil3 = " + String(hasil3));
  Serial.println("hasil4 = " + String(hasil4));

  Serial.println("x = " + String(x));
  Serial.println("y = " + String(y));
  Serial.println("z = " + String(z));
  Serial.println("a = " + String(a));
  Serial.println("b = " + String(b));
}

void loop() {
}
