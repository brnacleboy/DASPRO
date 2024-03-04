char coklat;

void setup() {
Serial.begin(9600);
}

void loop() {
  while (Serial.available() > 0) {
   coklat = Serial.read();
    if (!isDigit(coklat)) Serial.println("Salah masukkan angka"); 

    else {
      int nilai = coklat - '0'; 
      Serial.print("Angka yang dimasukkan = ");
      Serial.print(nilai);
      Serial.print(" , ");

      if (nilai % 2 == 1) Serial.println("ganjil");
      if (nilai % 2 == 0) Serial.println("genap");
    }
  }
}
