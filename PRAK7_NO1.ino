void setup() {
byte bilangan = 10;
int i, kuadrat;

Serial.begin(9600);
Serial.println("Cek nilai kuadrat 10 bilangan pertama");

for (i = 0; i< 10; i++) {
kuadrat = i * i;
Serial.print(i);
Serial.print(',');
Serial.println(kuadrat);
}
}

void loop() { 
}
