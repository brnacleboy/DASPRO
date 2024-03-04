int nilai[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};

void setup() {
Serial.begin(9600);

int n = sizeof(nilai) / sizeof(nilai[0]);
  
Serial.print("Sebelum diurutkan = ");
cetak(nilai, n);
urutkan(nilai, n);
  
Serial.print("Sesudah diurutkan = ");
cetak(nilai, n);
}

void loop() {
}

void urutkan(int nilai[], int n) {
for (int i = 0; i < n-1; i++) {
for (int j = 0; j < n-i-1; j++) {
if (nilai[j] > nilai[j+1]) {
int tukar = nilai[j];
nilai[j] = nilai[j+1];
nilai[j+1] = tukar;
}
}
}
}

void cetak(int nilai[], int n) {
for (int i = 0; i < n; i++) {
Serial.print(nilai[i]);
Serial.print(" ");
}
Serial.println();
}