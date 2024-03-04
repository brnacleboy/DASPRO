int i = 0;
int nilai = 1;
int total = 0;
void setup() {
Serial.begin(9600);

while (i < 11) {
total += nilai;
Serial.println(nilai);
nilai *=2;
i++;
}
Serial.print("Total = ");
Serial.println(total);
}

void loop() {
}
