//Penyalinan String
char teks1[15] = {'N', 'I', 'L', 'A', 'I'};
char teks2[] = "";
String test1 = "COBA", test2 = "";
void setup() {
strcpy(teks2, teks1);
Serial.begin(9600);
Serial.println(teks2);

test2 = test1;
Serial.println(test2);
}

void loop() {
}
