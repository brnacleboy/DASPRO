String teks1 = "arduino mega", teks2 = "";

char str1[] = {'a', 'r', 'd', 'u', 'i', 'n', 'o'};
char str2[] = "";

void setup() {
Serial.begin(9600);
teks2 = teks1;
Serial.print("Isi teks2 = ");
Serial.println(teks2);

strcpy(str2, str1);
Serial.print("Isi str2 = ");
Serial.println(str2);
}

void loop() {
}
