void setup() {
Serial.begin(9600);
}

void loop() {
while (Serial.available()) {
char arr = Serial.read();
if (isdigit(arr)) {
int value = arr - '0';
for (int i = 0; i <= value; i++) {
Serial.print(i);
Serial.print(" ");
}
Serial.println();
}
else {
String input = Serial.readString();
int count = input.length();
Serial.print("Jumlah karakter = ");
Serial.println(count);
Serial.print("Isi teks = ");
Serial.println(input);
}
}
}
