void setup() {
Serial.begin(9600);
byte nilai = 2;
String namaSaya = "ikhsan arief armansyah";
String NIM = "22001010075";

if (nilai == 1) Serial.println(namaSaya);

else if (nilai == 2) Serial.println(NIM);

else Serial.println("Nilai yang anda masukkan salah");
}

void loop() {
}
