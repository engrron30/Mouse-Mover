#include <windows.h>
#include <stdio.h>

#define MOUSE_MOVE_INTERVAL_USECS		30000

int main() {
    int event = 0;
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
	event++;
        printf("[EVENT_%d] Mouse moved. Sleeping %d seconds...\n", event, MOUSE_MOVE_INTERVAL_USECS/1000);
        Sleep(MOUSE_MOVE_INTERVAL_USECS);
    }

    return 0;
}




