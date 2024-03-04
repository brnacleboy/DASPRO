int nilai;

void setup() {
Serial.begin(9600);

for (int nilai = 5; nilai <= 50; nilai += 5 ) {
  if (nilai == 20) {
nilai = 40; 
continue; 
}
Serial.println(nilai);
}
}

void loop() {
}
