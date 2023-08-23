#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void drawline(int x1, int y1, int x2, int y2) {
    int dx, dy, p, x, y;

    dx = x2 - x1;
    dy = y2 - y1;

    x = x1;
    y = y1;

    p = 2 * dy - dx;

    while (x < x2) {
	if (p >= 0) {
	     putpixel(x, y, 7);
	    //printf("%d %d\n",x,y);
	    y = y + 1;
	    p = p + 2 * dy - 2 * dx;
	} else {
	    putpixel(x, y, 7);
	    //printf("%d %d\n",x,y);
	    p = p + 2 * dy;
	}
	x = x + 1;
    }
}

void main() {
    int gd = DETECT, gm;
    int x1, y1, x2, y2;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");

    printf("Enter x1 y1: ");
    scanf("%d%d", &x1, &y1);

    printf("Enter x2 y2: ");
    scanf("%d%d", &x2, &y2);
    drawline(x1, y1, x2, y2);
    getch();
}