#include<stdio.h>
#include<math.h>
#include<graphics.h>

int side = 100;
void translate(float x,float y,int tx, int ty){
    x+=tx;y+=ty;
    setcolor(GREEN);
    rectangle(x, y, x + side, y + side);
}

void rotate(float x,float y,float rad) {
    float x_new = x * cos(rad) - y * sin(rad);
    float y_new = x * sin(rad) + y * cos(rad);
    setcolor(BLUE);
    rectangle(x_new, y_new, x_new + side, y_new + side);
}

void scale(float x,float y,float sxy){
    float side_new = side*sxy;
    x*=sxy;y*=sxy;
    setcolor(RED);
    rectangle(x, y, x + side_new, y + side_new);
}

int main(){
    float x,y,sxy;
    int choice,tx,ty;
    float rad,deg;

    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\turboc3\\bgi");
    
    x=250;y=100;

    
    setcolor(WHITE);
    rectangle(x, y, x + side, y + side);
    gotoxy(0,0);
    printf("1. Translate\n2. Rotate\n3.Scale\n4.Exit\n");
    start:
    printf("Option: ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("enter tx ty : ");
        scanf("%d%d",&tx,&ty);
        translate(x,y,tx,ty);
        break;

    case 2:
        printf("enter degree : ");
        scanf("%f",&deg);
        rad = deg*3.14159/180;
        rotate(x,y,rad);
        break;

    case 3:
        printf("enter scale factor : ");
        scanf("%f",&sxy);
        scale(x,y,sxy);
        break;
    case 4:
        return 0;
    }
    goto start; 
}