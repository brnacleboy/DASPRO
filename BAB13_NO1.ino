unsigned long NIM = 2201010075;
int MD = NIM % 130;                                           
int BB = 5;                                              
int BA = 8; 
int CSN = constrain(MD, BB, BA); 

void setup() {
  Serial.begin(9600);
  if (MD >= CSN && MD <= CSN) {         
    Serial.print("NIM = ");                                     
    Serial.println(NIM);                                           
    Serial.print("Nilai Modulo = ");                               
    Serial.println(MD);                                        
    Serial.print("Nilai Constran = ");                            
    Serial.println(CSN);                               
    Serial.println("Nilai Modulo berada pada rentang 5 hingga 8");  
  } else {
    Serial.print("NIM = ");                                              
    Serial.println(NIM);                                                 
    Serial.print("Nilai Modulo = ");                                     
    Serial.println(MD);                                             
    Serial.print("Nilai Constran = ");                                   
    Serial.println(CSN);                                        
    Serial.println("Nilai Modulo tidak berada pada rentang 5 hingga 8");  
  }
}
void loop() {
}
