char Str1 [8] = {'a', 'r', 'd', 'u', 'i', 'n', 'o'};
String Str2 = "arduino mega";
void setup() {
Serial.begin(9600);
byte nilai1 = strlen(Str1);
byte nilai2 = Str2.length();

Serial.println(Str1);
Serial.print("Jumlah Karakter = ");
Serial.println(nilai1);

Serial.println(Str2);
Serial.print("Jumlah Karakter = ");
Serial.println(nilai2);
}

void loop() {
}
