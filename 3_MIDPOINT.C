#include<stdio.h>
#include<graphics.h>

void plot(int x, int y,int xc, int yc){
    putpixel(x+xc,y+yc,RED);
    putpixel(x+xc,-y+yc,RED);
    putpixel(-x+xc,y+yc,RED);
    putpixel(-x+xc,-y+yc,RED);
    putpixel(y+xc,x+yc,RED);
    putpixel(-y+xc,x+yc,RED);
    putpixel(y+xc,-x+yc,RED);
    putpixel(-y+xc,-x+yc,RED);

}

void main() {
    int gdriver = DETECT, gmode;
    int x, y, xc, yc,r,p;
    initgraph( & gdriver, & gmode, "c:\\turboc3\\bgi");

    printf("Enter center xc yc : ");
    scanf("%d%d",&xc,&yc);
    printf("enter radius : ");
    scanf("%d",&r);
    x = 0;

    y = r;
    p = 1-r;
    do{
        plot(x,y,xc,yc);
        // printf("%d %d\n",x+xc,y+yc);
        x++;
        if(p<0){
            p=p+2*x +1;
        }else{
            y--;
            p=p+2*x-2*y+1;
        }
    } while(x<y);

   getch();
}