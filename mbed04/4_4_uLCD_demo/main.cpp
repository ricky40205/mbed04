// uLCD-144-G2 basic text demo program for uLCD-4GL LCD driver library
//
#include "mbed.h"
#include "uLCD_4DGL.h"
//uLCD.color(WHITE);
uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;
//uLCD.textbackground_color(WHITE);
int main()
{
    //uLCD.background_color(BLUE);
    uLCD.background_color(WHITE);
    // basic printf demo = 16 by 18 characters on screen
    uLCD.color(BLUE); //Default Green on black text
    uLCD.printf("\n  Starting Demo...");
    uLCD.printf("\n  ID:107011229");
    uLCD.text_width(4); //4X size text
    uLCD.text_height(4);
    uLCD.color(GREEN);
    for (int i=30; i>=0; --i) {
        uLCD.locate(1,2);
        uLCD.printf("%2D",i);
        wait(.5);
    }
}
