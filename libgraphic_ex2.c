/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式56】
題目：畫圖，學用circle畫圓形。
程式分析：
程式原始碼：
modified by CodingCoffee 
more courses:  www.codingcoffee.org
*/
/*circle*/
#include<stdio.h>
//#include "graphics.h"
#include<graphics.h>
void main(){
    //int driver,mode,i;
    int gd = DETECT, gm,i;
    float j=1,k=1;
    //driver=VGA;mode=VGAHI;
    //initgraph(&driver,&mode,"");

    initgraph(&gd, &gm, NULL);

    setbkcolor(YELLOW);
    for(i=0;i<=25;i++){
        setcolor(8);
        circle(310,250,k);
        k=k+j;
        j=j+0.3;
        delay(1000);
    }
    closegraph();
} 