void setup() {
Serial.begin(9600);
int NIMakhir = 2201010075 % 100;
int SQRT = sqrt(144);
int hasill = min(NIMakhir, SQRT);

Serial.print("2 digit NIM = ");
Serial.println(NIMakhir);
  
Serial.print("Hasil perhitungan = ");
Serial.println(hasill);
}

void loop() {
}
