void setup() {
Serial.begin(9600); 
  
unsigned long NIM[] = {2201010075, 2201010074, 2201010079, 2201010005, 2201010082}; 
byte angka[] = {11, 22, 33, 44, 55}; 
  
int size = sizeof(NIM) / sizeof(NIM[0]); 
  
for (byte i = 0; i < size; i++) {
Serial.print("Nilai ");
Serial.print(NIM[i]);
Serial.print(" sebesar ");
Serial.println(angka[i]);
}
}

void loop() {
}
