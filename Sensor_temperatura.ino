#include <dht.h>   //biblioteca do sensor de umidade e temperatura
#define  dht_pin    5   //pino de sinal do dht11 ligado no digital 5

dht   my_dht;   //objeto para o sensor

int    temperatura = 0x00,   //armazena a temperatura em inteiro
       umidade = 0x00;   //armazena a umidade em inteiro
       
void setup(){
   Serial.begin(9600);   //serial em 9600 baud rate
} 
void loop(){
   my_dht.read11(dht_pin);

   temperatura = my_dht.temperature;
   umidade = my_dht.humidity;
   
   Serial.print(temperatura);
   Serial.print("ºC ");
   Serial.print(umidade);
   Serial.println("%");    
   delay(10);
}
