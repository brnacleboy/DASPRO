void setup() {
  Serial.begin(9600);
  String string1 = "45.678";
  String string2 = "987";
  String string3 = "375digit";
  String string4 = "nilai=75";
  float nilai1 = string1.toInt();
  float nilai2 = string2.toInt();
  float nilai3 = string3.toInt();
  float nilai4 = string4.toInt();

  Serial.print("String 1 = ");
  Serial.println(string1);
  Serial.print("Nilai Int 1 = ");
  Serial.println(nilai1);
  Serial.print("String 2 = ");
  Serial.println(string2);
  Serial.print("Nilai  Int 2 = ");
  Serial.println(nilai2);
  Serial.print("String 3 = ");
  Serial.println(string3);
  Serial.print("Nilai  Int 3 = ");
  Serial.println(nilai3);
  Serial.print("String 4 = ");
  Serial.println(string4);
  Serial.print("Nilai  Int 4 = ");
  Serial.println(nilai4);
}

void loop() {
}
