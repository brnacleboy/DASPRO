void setup() {
Serial.begin(9600); 

int angka = 7; 
int faktorial[5]; 
int jumlah; 
  
for (int i = 0; i < 5; i++) {
faktorial[i] = hitungFaktorial(angka);
jumlah += faktorial[i];
angka--;
}
  
float rataRata = jumlah / 5.0; 
  
Serial.println("Nilai faktorial:");
for (int i = 0; i < 5; i++) {
Serial.println(faktorial[i]);
}
Serial.print("Jumlah faktorial: ");
Serial.println(jumlah);
Serial.print("Rata-Rata Faktorial: ");
Serial.println(rataRata);
}

void loop() {
}


int hitungFaktorial(int n) {
int faktorial = 1;
for (int i = 1; i <= n; i++) {
faktorial *= i;
}
return faktorial;
}
