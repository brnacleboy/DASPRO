String name = "ikhsan arief armansyah";

void setup() {
Serial.begin(9600);

name.setCharAt(6, '-');
name.setCharAt(12, '-');

String arr = name.substring(7, 12);

Serial.println(name);
Serial.println(arr);
}

void loop() {
}
