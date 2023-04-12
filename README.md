# projekt_POMIKMIZE
Pomik MIZE: Krmilje naj krmili pomik mize, to je v smeri gor - dol (gor - sveti zelena LED, dol, sveti rdeča LED), prek aktiviranja ustreznih elektromagnetnih ventilov. Skrajni legi mize sta indicirani s končnim stikalom v spodnji oziroma spodnji legi, kjer se gibanje zaustavi. Pomik aktiviramo s tipko GOR za pomik mize navzgor in tipko DOL za pomik mize navzdol. Gibanje lahko v kateremkoli trenutku zaustavimo z aktiviranjem tipke STOP. Sprememba smeri pomika naj bo omogočena z aktiviranjem tipke GOR ali DOL brez predhodnega aktiviranja tipke STOP.
# SEZNAM UPORABLJENIH MATERIALOV IN KOMPONENT
| KOMPONENTE | ŠT.KOSOV | 
| --- | --- |
| LED DIODE(RDEČA,ZELENA) | 2 |
| UPORI | 5 |
| RELE | 1 |
| TIPKE | 3 |
| ŽICE | 16 |
# PRIREDBENI SEZNAM
![priredbeni seznam](https://raw.githubusercontent.com/Pitaxx/projekt_POMIKMIZE/main/Posnetek%20zaslona%202023-04-11%20114925.png)
# SLIKA VEZALNE SHEME
![slika vezalne sheme](https://raw.githubusercontent.com/Pitaxx/projekt_POMIKMIZE/main/pomik%20mize%20schematic.png)
# SLIKA VEZJA
![slika vezja](https://raw.githubusercontent.com/Pitaxx/projekt_POMIKMIZE/main/SLIKA%20VEZJA.png)
# KODA PROGRAMA
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
