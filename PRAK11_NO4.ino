void setup() {
  Serial.begin(9600);
  String string1 = "Program";
  char char_array[10];
  byte panjang_str=string1.length()+1;
  string1.toCharArray(char_array, panjang_str);

  Serial.print("string = ");
  Serial.println(string1);
  Serial.print("char array = ");
  Serial.println(char_array);
}

void loop() {
}
