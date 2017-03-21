#include <QDebug>
#include "MyClass.h"
#include "stdio.h"
#include "wiringPi.h"

void MyClass::init(){

    wiringPiSetup();

    pinMode (2, OUTPUT) ;
    pinMode (3, OUTPUT) ;
    pinMode (4, OUTPUT) ;
    pinMode (5, OUTPUT) ;
    pinMode (11, OUTPUT) ;
}

void MyClass::start(int count, int delayT){
    for(int i = 0;i<count;i++){
    digitalWrite(5,1);
    delay(10);
    digitalWrite(5,0);
    delay(delayT);
    }
}

void MyClass::pump(){
    digitalWrite(2,1);
    delay(3000);
    digitalWrite(2,0);
    digitalWrite(4,1);
    delay(1000);
    digitalWrite(4,0);
}
void MyClass::release(){
    digitalWrite(3,1);
    delay(3000);
    digitalWrite(3,0);
}
