void setup() {
Serial.begin(9600); 

int angka[] = {75, 79, 82, 5, 13}; 
int size = sizeof(angka) / sizeof(angka[0]); 

for (int i = 0; i < size - 1; i++) {
int nilai = i;
for (int j = i + 1; j < size; j++) {
if (angka[j] < angka[nilai]) {
nilai = j;
}
}

int urutkan = angka[i];
angka[i] = angka[nilai];
angka[nilai] = urutkan;
}

for (int i = 0; i < size; i++) {
Serial.print(angka[i]);
Serial.print(" ");
}
}

void loop() {
}
