void setup() {
Serial.begin(9600); 
int array[] = {1, 2, 3, 4, 5, 6}; 
  
array[2] = 10;
  
for (int i = 0; i < 6; i++) {
Serial.print(array[i]);
Serial.print(" ");
}
}

void loop() {
}