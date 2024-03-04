void setup() {
Serial.begin(9600);
}

void loop() {
while (Serial.available() > 0){
byte karakter = Serial.read();
Serial.write(karakter);
Serial.write(' ');
Serial.print(karakter,DEC);
Serial.write(' ');
Serial.println(karakter,HEX);
}
}
