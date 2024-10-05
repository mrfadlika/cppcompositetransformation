#include <graphics.h>
#include <iostream>
#include <string>

using namespace std;

// baiknya kita akan menggunakan fungsi
void hitungTranslasi(float x, float y, float dx, float dy, float &x_new, float &y_new)
{
    x_new = x + dx;
    y_new = y + dy;
}

int main()
{
    initwindow(700, 700);

    float x = 70, y = 70;
    float x_transformed, y_transformed;

    hitungTranslasi(x, y, 160, 160, x_transformed, y_transformed);
    setcolor(WHITE);
    circle(x, y, 5);
    string text1 = "P(" + to_string(static_cast<int>(x)) + ", " + to_string(static_cast<int>(y)) + ")";
    char buffer[100];
    strcpy(buffer, text1.c_str());

    outtextxy(x + 10, y, buffer);

    setcolor(BLUE);
    circle(x_transformed, y_transformed, 5);
    string text2 = "Setelah Translasi Pertama -> P'(" + to_string(static_cast<int>(x_transformed)) + ", " + to_string(static_cast<int>(y_transformed)) + ")";
    strcpy(buffer, text2.c_str());
    outtextxy(x_transformed + 10, y_transformed, buffer);

    hitungTranslasi(x_transformed, y_transformed, 70, 70, x_transformed, y_transformed);
    setcolor(RED);
    circle(x_transformed, y_transformed, 5);
    string text3 = "Setelah Translasi Kedua -> P'(" + to_string(static_cast<int>(x_transformed)) + ", " + to_string(static_cast<int>(y_transformed)) + ")";
    strcpy(buffer, text3.c_str());
    outtextxy(x_transformed + 10, y_transformed, buffer);

    getch();
}