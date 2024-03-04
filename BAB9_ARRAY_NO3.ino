void setup() {
Serial.begin(9600);

float nilai[] = {2.7, 5.6, 1.3, 4.8, 0.9}; 
  
int size = sizeof(nilai) / sizeof(nilai[0]); 
  
for (int i = 0; i < size - 1; i++) {
for (int j = 0; j < size - i - 1; j++) {
if (nilai[j] > nilai[j + 1]) {
      
float urutkan = nilai[j];
nilai[j] = nilai[j + 1];
nilai[j + 1] = urutkan;
}
}
}

for (int i = 0; i < size; i++) {
Serial.println(nilai[i]);
}
}

void loop() {
}
