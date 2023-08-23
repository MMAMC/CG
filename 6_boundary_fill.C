#include <stdio.h>
#include <graphics.h>

int fill_color = GREEN, border_color = 15;

void boundaryfill(int x, int y) {
        if (getpixel(x, y) != border_color && getpixel(x, y) != fill_color) {
            putpixel(x, y, fill_color);

            boundaryfill(x + 1, y);
            boundaryfill(x - 1, y);
            boundaryfill(x, y + 1);
            boundaryfill(x, y - 1);
            
            // boundaryfill(x + 1, y + 1);
            // boundaryfill(x - 1, y - 1);
            // boundaryfill(x + 1, y - 1);
            // boundaryfill(x - 1, y + 1);
        }
}

void main() {
    int gm, gd = DETECT;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");
    circle(200, 200, 40);
    boundaryfill(200, 200);
    closegraph();
    getch();
}
