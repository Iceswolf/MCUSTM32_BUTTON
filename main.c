#include <stdio.h>
#include <clock.c>
#include <config.c>
#include <led.c>

#define  GPIO_A_IDR (unsigned int*) (0x40020010)

void main (void){

unsigned int* puntatore_uno;
//unsigned int puntatore_val;
	
puntatore_uno=GPIO_A_IDR;

  
attiva_clock(1,'d');
attiva_clock(1,'a');

gpio_config('d',15,"output","push-pull","low","no");
gpio_config('a',0,"input","default","default","default");

while(1){   

  //puntatore_val= *puntatore_uno;
  if(*puntatore_uno&1==1){
  led("blu","off");
    }
else{
  led("blu","on");
    }

  } 
}