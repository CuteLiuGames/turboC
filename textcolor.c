#include<stdio.h>
#include "conio.h"
void main(void){
    int color;
    for (color = 1; color < 16; color++) {
        textcolor(2,color,2);/*設定文字顏色*/
        printf("This is color %d\r\n", color);
    }
    textcolor(2,128 + 15,2);
    printf("This is blinking\r\n");
}