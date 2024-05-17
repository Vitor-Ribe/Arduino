
#define pinCLK 4
#define pinDT 6

float contador = 0.0;
int estadoAtualCLK, estadoAnteriorCLK;

void setup() {

  Serial.begin(9600);
  pinMode(pinCLK, INPUT);
  pinMode(pinDT, INPUT);
  estadoAnteriorCLK = digitalRead(pinCLK);
}

void loop() {

  estadoAtualCLK = digitalRead(pinCLK);

  if(estadoAtualCLK != estadoAnteriorCLK){
    if(estadoAtualCLK == digitalRead(pinDT))  { 
        contador += 1;
    }else  { 
        contador -= 1;
    }  
  
  Serial.print("Valor do contador: ");
  Serial.println(contador);

  estadoAnteriorCLK = estadoAtualCLK;
  }
  delay(10);
}
