#include <graphics.h>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void scale_point(float x, float y, float sx, float sy, float &x_new, float &y_new) {
    x_new = x * sx;
    y_new = y * sy;
}

int main() {
    initwindow(700, 700);

    float x_scale = 90, y_scale = 90;
    float x_after_scale, y_after_scale;

    setcolor(WHITE);
    circle(x_scale, y_scale, 5);
    string text1 = "P(" + to_string(static_cast<int>(x_scale)) + ", " + to_string(static_cast<int>(y_scale)) + ")";
    char buffer[100];
    strcpy(buffer, text1.c_str());
    outtextxy(x_scale + 10, y_scale, buffer);

    scale_point(x_scale, y_scale, 0.7, 1.6, x_after_scale, y_after_scale);
    setcolor(CYAN);
    circle(x_after_scale, y_after_scale, 5);

    string text2 = "Setelah Skalasi Pertama -> P'(" + to_string(static_cast<int>(x_after_scale)) + ", " + to_string(static_cast<int>(y_after_scale)) + ")";
    strcpy(buffer, text2.c_str());
    outtextxy(x_after_scale + 10, y_after_scale, buffer);

    scale_point(x_after_scale, y_after_scale, 1.5, 1.7, x_after_scale, y_after_scale);
    setcolor(MAGENTA);
    circle(x_after_scale, y_after_scale, 5);

    string text3 = "Setelah Skalasi Kedua-> P'(" + to_string(static_cast<int>(x_after_scale)) + ", " + to_string(static_cast<int>(y_after_scale)) + ")";
    strcpy(buffer, text3.c_str());
    outtextxy(x_after_scale + 10, y_after_scale, buffer);

    getch();
}
