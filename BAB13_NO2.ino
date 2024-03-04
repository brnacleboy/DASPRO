unsigned long NIM = 2201010075;
int MD = NIM % 130;                                          
int BB = 5;                                              
int BA = 8; 
int CSN = constrain(MD, BB, BA);
int BBmap1 = 0, BAmap1 = 10;
int BBmap2 = 0, BAmap2 = 1023;
int Nmap = map(NIM, BBmap1, BAmap1, BBmap2, BAmap2);

void setup() {
Serial.begin(9600);
  if (Nmap >= CSN && Nmap <= CSN) {         
    Serial.print("NIM = ");                                     
    Serial.println(NIM);                                           
    Serial.print("Nilai modulo = ");                               
    Serial.println(MD);                                        
    Serial.print("Nilai constran = ");
    Serial.println(NIM);                                           
    Serial.print("Nilai Map = ");
    Serial.println(Nmap);                               
    Serial.println("Nilai modulo berada pada rentang 5 hingga 8");  
  } else {
    Serial.print("NIM = ");                                              
    Serial.println(NIM);                                                 
    Serial.print("Nilai Modulo = ");                                     
    Serial.println(MD);                                             
    Serial.print("Nilai constran = ");                                   
    Serial.println(CSN);
    Serial.print("Nilai Map = ");
    Serial.println(Nmap);                                
    Serial.println("Nilai Modulo tidak berada pada rentang 5 hingga 8");  
  }
}
void loop() {
}