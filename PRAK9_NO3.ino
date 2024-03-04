int A[5];
void setup() {
  Serial.begin(9600);
  for(byte i=0;i<5;i++) Serial.println(A[i]);
}

void loop() {
}