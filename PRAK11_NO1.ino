String string = "pemrograman";

void setup(){
Serial.begin(9600);
char karakter = string.charAt(4);
char huruf = string[2];

Serial.println(karakter);
Serial.println(huruf);
Serial.println(string.charAt(0));
}

void loop(){
}
