unsigned long faktorial(unsigned int y) {
  if (y == 0) {
    return 1;
  } else {
    return y * faktorial(y - 1);
  }
}
void setup() {
  Serial.begin(9600);
  int x = 13, n = 05, i = 1;
  float sum = 1.00;
  while (i < n) {
    sum = sum + pow(x, i) / faktorial (i);
    Serial.println(sum);
    i++;
  }

}

void loop() {
}
