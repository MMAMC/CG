#include<stdio.h>  
#include<graphics.h>  
#include<conio.h> 
int new_color = GREEN, old_color = BLACK;
void flood(int x, int y)
{
    if (getpixel(x, y) == old_color) {
        putpixel(x, y, new_color);
        flood(x + 1, y);
        flood(x - 1, y);
        flood(x, y + 1);
        flood(x, y - 1);

        // flood(x + 1, y + 1);
        // flood(x - 1, y - 1);
        // flood(x + 1, y - 1);
        // flood(x - 1, y + 1);
    }
}  
void main()  
{  
    int gd=DETECT,gm;  
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");  
    circle(70,70,30);
    flood(70,70);  
    getch();  
    closegraph();  
}  