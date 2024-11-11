#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Set background color
    setbkcolor(WHITE);
    cleardevice();

    // Draw the face (yellow circle)
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    circle(200, 200, 100);  // Center (200, 200), Radius 100
    floodfill(200, 200, YELLOW);

    // Draw the left eye (black circle)
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    circle(170, 170, 10);  // Center (170, 170), Radius 10
    floodfill(170, 170, BLACK);

    // Draw the right eye (black circle)
    circle(230, 170, 10);  // Center (230, 170), Radius 10
    floodfill(230, 170, BLACK);

    // Draw the smile (arc)
    setcolor(BLACK);
    arc(200, 220, 200, 340, 40);  // Center (200, 220), start angle 200, end angle 340, radius 40

    getch();
    closegraph();
    return 0;
}