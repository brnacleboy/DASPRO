void setup() {
Serial.begin(9600);
char namaSaya[20] = {'i', 'k', 'h', 's', 'a', 'n', 'a', 'r', 'i', 'e', 'f', 'a', 'r', 'm', 'a', 'n', 's', 'y', 'a', 'h'};
byte jumlahKarakter = strlen(namaSaya);
Serial.print(namaSaya);
Serial.print(jumlahKarakter);
}

void loop() {
}
