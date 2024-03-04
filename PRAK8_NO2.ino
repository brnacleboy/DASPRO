void setup() {
Serial.begin(9600);
byte i=0;
while (i<=10) {
Serial.println(i); i+=2;
}
}

void loop() {
}
