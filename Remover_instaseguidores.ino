#include <DigiMouse.h>

void setup() {
  DigiMouse.begin(); 
}

void loop() {
  //vai até a opção remover
  DigiMouse.moveY(1); //down 1
  DigiMouse.delay(630);
  DigiMouse.moveX(120); //right 120
  DigiMouse.delay(50);
  DigiMouse.moveX(120); //right 120
  DigiMouse.delay(50);
  DigiMouse.moveX(50); //right 50
  DigiMouse.delay(50);

  //clica no remover seguidor
  DigiMouse.setButtons(1<<0); //left click
  DigiMouse.delay(100);
  DigiMouse.setButtons(0); //unclick all
  DigiMouse.delay(100); 

  //Desce até o Final para confirmar a remoção
  DigiMouse.moveY(125); //right 120
  DigiMouse.delay(50);
  DigiMouse.moveY(125); //right 120
  DigiMouse.delay(50);
  DigiMouse.moveY(125); //right 120
  DigiMouse.delay(50);
  DigiMouse.moveY(125); //right 120
  DigiMouse.delay(50);
  DigiMouse.moveY(125); //right 120
  DigiMouse.delay(50);
  DigiMouse.moveY(125); //right 120
  DigiMouse.delay(50);
  DigiMouse.moveY(125); //right 120
  DigiMouse.delay(50);
  DigiMouse.moveY(100); //right 120
  DigiMouse.delay(50);

  //confirma remoção
  DigiMouse.setButtons(1<<0); //left click
  DigiMouse.delay(100);
  DigiMouse.setButtons(0); //unclick all
  DigiMouse.delay(100); 

  // voltar a posição inicial
  DigiMouse.moveY(-125); //right 120
  DigiMouse.delay(50);
  DigiMouse.moveY(-125); //right 120
  DigiMouse.delay(50);
  DigiMouse.moveY(-125); //right 120
  DigiMouse.delay(50);
  DigiMouse.moveY(-125); //right 120
  DigiMouse.delay(50);
  DigiMouse.moveY(-125); //right 120
  DigiMouse.delay(50);
  DigiMouse.moveY(-125); //right 120
  DigiMouse.delay(50);
  DigiMouse.moveY(-125); //right 120
  DigiMouse.delay(50);
  DigiMouse.moveY(-100); //right 120
  DigiMouse.delay(50);
  
  DigiMouse.moveY(-1); //down 1
  DigiMouse.delay(50);
  DigiMouse.moveX(-120); //right 120
  DigiMouse.delay(50);
  DigiMouse.moveX(-120); //right 120
  DigiMouse.delay(50);
  DigiMouse.moveX(-50); //right 30
  DigiMouse.delay(50);

  
  DigiMouse.delay(200);
  
}
