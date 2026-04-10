#include <windows.h>
#include <stdio.h>

#define MOUSE_MOVE_INTERVAL_SECS		2

int main() {
    POINT p;

    printf("Mouse mover started. Press Ctrl+C to stop.\n");

    while (1) {
        // Get current cursor position
        GetCursorPos(&p);

        // Move mouse slightly
        SetCursorPos(p.x + 10, p.y);
        Sleep(100); // small delay

        SetCursorPos(p.x, p.y + 10);
        Sleep(100);

        SetCursorPos(p.x, p.y);

        printf("Mouse moved. Sleeping %d seconds...\n", MOUSE_MOVE_INTERVAL_SECS);
        Sleep(MOUSE_MOVE_INTERVAL_SECS);
    }

    return 0;
}




