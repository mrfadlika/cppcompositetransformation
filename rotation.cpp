#include <graphics.h>
#include <iostream>
#include <math.h>
#include <cstring>

using namespace std;

void hitungRotasi(float x, float y, float theta, float &x_new, float &y_new)
{
    float rad = theta * M_PI / 180.0;
    x_new = x * cos(rad) - y * sin(rad);
    y_new = x * sin(rad) + y * cos(rad);
}

int main()
{
    initwindow(900, 600);

    float x = 150, y = 150;
    float x_after_rotation, y_after_rotation;

    setcolor(WHITE);
    circle(x + 200, y, 5);
    string text1 = "P(" + to_string(static_cast<int>(x)) + ", " + to_string(static_cast<int>(y)) + ")";
    char buffer[100];
    strcpy(buffer, text1.c_str());
    outtextxy(x + 210, y, buffer);

    hitungRotasi(x, y, 30, x_after_rotation, y_after_rotation);
    setcolor(GREEN);
    circle(x_after_rotation + 200, y_after_rotation, 5);
    string text2 = "Setelah 30 derajat Rotasi -> P'(" + to_string(static_cast<int>(x_after_rotation)) + ", " + to_string(static_cast<int>(y_after_rotation)) + ")";
    strcpy(buffer, text2.c_str());
    outtextxy(x_after_rotation + 210, y_after_rotation, buffer);

    hitungRotasi(x_after_rotation, y_after_rotation, 45, x_after_rotation, y_after_rotation);
    setcolor(YELLOW);
    circle(x_after_rotation + 200, y_after_rotation, 5);
    string text3 = "Setelah 45 derajat Rotasi lagi -> P'(" + to_string(static_cast<int>(x_after_rotation)) + ", " + to_string(static_cast<int>(y_after_rotation)) + ")";
    strcpy(buffer, text3.c_str());
    outtextxy(x_after_rotation + 210, y_after_rotation, buffer);

    getch();
}

//code ditambahkan 200 agar jendela dapat dimulai dari -200 sampai 500