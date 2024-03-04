char Str1 [8] = {'a', 'r', 'd', 'u', 'i', 'n', 'o'};
char Str2 [25] = "arduino nano";
String bahasa = "arduino mega";

void setup() {
Serial.begin(9600);
Serial.println(Str1);
Serial.println(Str2);
Serial.println(bahasa);
}

void loop() {
}
