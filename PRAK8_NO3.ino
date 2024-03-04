void setup() {
Serial.begin(9600);
byte i=0;
while(1) { //perulangan tanpa batas 
Serial.println(i); i+=2;
if (i>10) break;
}
}

void loop() {
}
