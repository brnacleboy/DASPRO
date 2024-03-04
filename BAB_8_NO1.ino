int nilai = 2; 

void setup() {
Serial.begin(9600);

while (nilai <= 20) {
  if (nilai % 2 == 0) { 
    Serial.println(nilai);} 
nilai++; 
}
}

void loop() {
}
