void setup() {
  Serial.begin(9600);
  String string1 = "Teknik Elektro";
  String string2 = string1.substring(7);
  String string3 = string1.substring(0, 6);

  Serial.print("String 1 = ");
  Serial.println(string1);
  Serial.print("String 2 = ");
  Serial.println(string2);
  Serial.print("String 3 = ");
  Serial.println(string3);
}
void loop() {
}
