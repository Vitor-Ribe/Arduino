#include "DigiKeyboard.h"
void setup() {

}
void loop() {

  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.print("1234");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
}
