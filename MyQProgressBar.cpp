#include "MyQProgressBar.h"

MyQProgressBar::MyQProgressBar(QWidget *parent): QProgressBar(parent){} //constructor


void MyQProgressBar::ini(){
    connect(&timer, SIGNAL (timeout()), this, SLOT(animar()));
    cronometre = false;
    amp = 0.5;
    fa = 0;
    suma = 0;
    string s = objectName().toStdString();
    n = int(s[s.length()-1]);
    int x = int((amp*sin(double(n+fa)))*100);
    setValue(x);
}
    

void MyQProgressBar::amplitud(int a){
    amp = float(a)/100;
    int x = int((amp*sin(double(n+fa)))*100);
    setValue(x);
}


void MyQProgressBar::fase(int f){
    fa = float(f)/10;
    int x = int((amp*sin(double(n+fa)))*100);
    setValue(x);
}

void MyQProgressBar::time(){
    cronometre = !cronometre;
    if (cronometre) 
        timer.start(100);
    else
        timer.stop();
}

void MyQProgressBar::animar(){
    ++suma;   
    int x = int((amp*sin(double(n+fa+suma)))*100);
    setValue(x);
}

