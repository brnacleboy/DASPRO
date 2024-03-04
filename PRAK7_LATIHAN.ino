byte i, j, n;

void setup() {
Serial.begin(9600);

for (byte i = 1; i <= 10; i++) { 
n = 0;
Serial.print(i);
Serial.print(" , ");
if (i % 2 == 1) Serial.print("Ganjil"); 
else Serial.print("Genap"); 

Serial.print(',');
if (i == 0 || i == 1) n == 1; 

for (j = 2; j <= i / 2; j++) 
if (i % j == 0) {
n = 1;
break;
}

if (n == 0) Serial.println(" bilangan prima");
else Serial.println(" bukan bilangan prima");
} 
}

void loop() {
}
