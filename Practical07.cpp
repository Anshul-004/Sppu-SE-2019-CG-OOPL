#include <iostream>
#include <graphics.h>
#include <math.h>
#include <thread>

void bounce_ball(float x, float r) {
    float y = 0.0, j = 0.5, count = 0.1;

    for (int k = 0; k <= 7; k++) {
        for (float i = 90; i < 270; i += 10) {
            y = cos(((i * 22 / 7) / 180)) / j;
            if (y > 0)
                y = -y;

            setcolor(14);
            setfillstyle(1, 14);
            circle(x, y * 100 + 200, r);
            floodfill(x, y * 100 + 200, 14);
            delay(100);

            setcolor(0);
            setfillstyle(1, 0);
            circle(x, y * 100 + 200, r);
            floodfill(x, y * 100 + 200, 0);

            x += 5; // Move the ball horizontally
        }

        j += count;
        count += 0.1;
    }
}

void draw_sine_wave() {
    int angle = 0;
    double x1, y1;
    float r = 15;

    line(0, 215, 650, 215);

    for (x1 = 0; x1 < 650; x1 += 3) {
        y1 = 50 * sin(angle * 3.141 / 180);
        y1 = (420 / 2) - y1;

        putpixel(x1, y1, 15);

        delay(100);
        angle += 5;
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    float ball_x = 1;

    std::thread ball_thread(bounce_ball, ball_x, 15);
    std::thread wave_thread(draw_sine_wave);

    ball_thread.join();
    wave_thread.join();

    getch();
    closegraph();
    return 0;
}

