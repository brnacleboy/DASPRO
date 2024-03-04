int A[5];
void setup() {
  Serial.begin(9600);
  A[0]=12;
  A[1]=16;
  A[2]=1;
  A[3]=21;
  A[4]=2;
  for(byte i=0;i<5;i++) Serial.println(A[i]);
}

void loop() {
}