void setup() {
Serial.begin(9600);
byte i=0;
while (i<10) {
Serial.println(i);  i++;
}
while (i>1) {
Serial.println(i);  i--;

}

}

void loop() {
}
