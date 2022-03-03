/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式33】
題目：學習gotoxy()與clrscr()函式
程式分析：
程式原始碼：
modify by codingcoffee  
more courses : www.codingcoffee.org
*/
#include<stdio.h>
#include "conio.h"
void main(void){
    clrscr();/*清屏函式*/
    textbackground(2);
    gotoxy(1, 5);/*定位函式*/
    printf("Output at row 5 column 1\n");
    textbackground(3);
    gotoxy(20, 10);
    printf("Output at row 10 column 20\n");
}