/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式57】
題目：畫圖，學用line畫直線。
程式分析：
程式原始碼：
modified by CodingCoffee 
more courses:  www.codingcoffee.org
*/
#include<stdio.h>
//#include "graphics.h"
#include<graphics.h>
void main(){
    //int driver,mode,i;
    int gd = DETECT, gm, i;
    float x0,y0,y1,x1;
    float j=12,k;
    //driver=VGA;mode=VGAHI;
    //initgraph(&driver,&mode,"");
   
    initgraph(&gd, &gm, NULL);

    setbkcolor(GREEN);
    x0=263;y0=263;y1=275;x1=275;
    for(i=0;i<=18;i++){
        setcolor(5);
        line(x0,y0,x0,y1);
        x0=x0-5;
        y0=y0-5;
        x1=x1+5;
        y1=y1+5;
        j=j+10;
        delay(1000);
    }

    x0=263;y1=275;y0=263;
    for(i=0;i<=20;i++){
        setcolor(5);
        line(x0,y0,x0,y1);
        x0=x0+5;
        y0=y0+5;
        y1=y1-5;
        delay(1000);
    }
    closegraph();
}