char tarisa;
int t;

void setup() {
  Serial.begin(9600);
}

void loop() {
  while (Serial.available() > 0) {
    tarisa = Serial.read();
    if (!isDigit(tarisa)) Serial.println("Salah masukkan angka");
    else {
      int nilai = tarisa - '0';
      Serial.print("Angka yang dimasukkan = ");
      Serial.print(nilai);
      Serial.print(" , ");

      t = pow(nilai, 2) - 2 * nilai + 10;

      Serial.print("Hasil kalkulasi = ");
      Serial.println(t);
    }
  }
}
