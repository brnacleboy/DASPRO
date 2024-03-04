
char karakter;
int y;

void setup() {
Serial.begin(9600);
}

void loop() {
  while (Serial.available() > 0) {
    karakter = Serial.read();
    if (!isDigit(karakter)) Serial.println("Salah masukkan angka"); //mengecek apakah digit itu termasuk angka atau bukan angka

    else {
       int nilai = karakter - '0'; 
      Serial.print("Angka yang dimasukkan = ");
      Serial.print(nilai);
      Serial.print(" , ");

      Serial.print("Hasil kalkulasi = ");
      Serial.println(y);
    }
  }
}
