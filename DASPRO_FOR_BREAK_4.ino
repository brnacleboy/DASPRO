void setup() {
  Serial.begin(9600); 
    for(int i = 1; i <= 6; i++) { 
    for(int j = 1; j <= i; j++) { 
      Serial.print(j); 
    }
    Serial.println(); 
  }
}

void loop() {
}
