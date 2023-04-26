#include "mbed.h"

AnalogIn pot1(p19); //pot1 is an Object of class AnalogIn
AnalogIn pot2(p20); //pot2 is an Object of class AnalogIn

PwmOut Red(p23);//PWM out for RGB Red 
PwmOut Green(p24);//PWM out for RGB Green 
int main(){
        while(1){
Red = pot1;//Red colour cotrolled by pot 1
Green= pot2;//Green controlled by pot2 
        printf("Red pot = %.2f \n\r",1- pot1.read());
        printf("Green pot = %.2f \n\r",1- pot2.read());
       wait(0.05);
       }
}