/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式60】 題目：畫圖，綜合例子。
程式分析：
程式原始碼：
modified by CodingCoffee 
more courses:  www.codingcoffee.org
*/
#include<stdio.h>
//#include "graphics.h"
#include<graphics.h>
#define LEFT 0
#define TOP 0
#define RIGHT 639
#define BOTTOM 479
#define LINES 400
#define MAXCOLOR 15
void main(){
    //int driver,mode,error;
    int gd = DETECT, gm, errori;
    int x1,y1;
    int x2,y2;
    int dx1,dy1,dx2,dy2,i=1;
    int count=0;
    int color=0;
    //driver=VGA;
    //mode=VGAHI;
    //initgraph(&driver,&mode,"");

    initgraph(&gd, &gm, NULL);

    x1=x2=y1=y2=10;
    dx1=dy1=2;
    dx2=dy2=3;
    while(!kbhit()){
        line(x1,y1,x2,y2);
        x1+=dx1;y1+=dy1;
        x2+=dx2;y2+dy2;
        if(x1<=LEFT||x1>=RIGHT)
            dx1=-dx1;

        if(y1<=TOP||y1>=BOTTOM)
            dy1=-dy1;

        if(x2<=LEFT||x2>=RIGHT)
            dx2=-dx2;

        if(y2<=TOP||y2>=BOTTOM)
            dy2=-dy2;
        if(++count>LINES){
            setcolor(color);
            color=(color>=MAXCOLOR)?0:++color;
        }
    }
    closegraph();
}