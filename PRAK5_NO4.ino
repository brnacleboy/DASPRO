void setup() {
  Serial.begin(9600);
  int nilai1 = 35;
  int nilai2 = 12;
 a = (8 == 8);
  boolean b = (9 != 2);
  boolean c = (2 > 1);
  bool d = (10 < 12);
  bool e = (12 >= 11);
  boolean f = (11 <= 12);
  bool hasil1 = (nilai1 == nilai2);
  bool hasil2 = (nilai1 != nilai2);
  boolean hasil3 = (nilai1 > nilai2);
  boolean hasil4 = (nilai1 >= nilai2);
  bool hasil5 = (nilai1 < nilai2);
  boolean hasil6 = (nilai1 <= nilai2);
  Serial.println("a = " + String(a));
  Serial.println("b = " + String(b));
  Serial.println("c = " + String(c));
  Serial.println("d = " + String(d));
  Serial.println("e = " + String(e));
  Serial.println("f = " + String(f));
  Serial.println("hasil1 = " + String(hasil1));
  Serial.println("hasil2 = " + String(hasil2));
  Serial.println("hasil3 = " + String(hasil3));
  Serial.println("hasil4 = " + String(hasil4));
  Serial.println("hasil5 = " + String(hasil5));
  Serial.println("hasil6 = " + String(hasil6));
}

void loop() {
}
