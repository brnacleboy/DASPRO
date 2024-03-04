String string = "program";

void setup() {
Serial.begin(9600);
Serial.print("String = ");
Serial.println(string);
int i = string.indexOf('r');
int j = string.indexOf('r',2);
Serial.print("huruf r pertama muncul di indexs ke-");
Serial.println(i);
Serial.print("huruf r ke dua muncul di indeks ke-");
Serial.println(j);
}

void loop() {
}
