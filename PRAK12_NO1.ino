void setup() {
Serial.begin(9600);
}

void loop() {
while(Serial.available()>0){ 
char karakter= Serial.read(); 
Serial.write(karakter); 
}
}
