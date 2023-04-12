const int LED1 = 13;  
const int LED2 = 12;  
const int GUMB1 = 10;
const int GUMB2 = 11;  
const int GUMB3 =8;  
const int rele = 7;
void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(rele, OUTPUT);
  pinMode(GUMB1, INPUT_PULLUP);
  pinMode(GUMB2, INPUT_PULLUP);
  pinMode(GUMB3, INPUT_PULLUP);

}

void loop() {
  if (digitalRead(GUMB1) == HIGH) {
    digitalWrite(LED1, HIGH);  
    digitalWrite(LED2, LOW);
    digitalWrite(rele, HIGH);
  
  }
  else if (digitalRead(GUMB2) == HIGH) {
    digitalWrite(LED1, LOW);   
    digitalWrite(LED2, HIGH);  
    digitalWrite(rele, LOW);
  }
  else if (digitalRead(GUMB3) == HIGH) {
    digitalWrite(LED1, LOW);  
    digitalWrite(LED2, LOW);  
  }
}
