// https://canvas.kdg.be/courses/38313/pages/projectideeen-2022-2023?module_item_id=794127
#define __DELAY_BACKWARD_COMPATIBLE__
#include <Leds.h>
#include <Buttons.h>
#include <Buzzer.h>
#include <display.h>
#include <Potentio.h>
#include <usart.h>
#include <avr/io.h>
#include <util/delay.h>

int main(){
  initUSART();
  enableButton(0);

  while(1){
    if(buttonPushed(0)){
      
    }
  }
  return 0;
}