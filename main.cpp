#include <windows.h>
#include <iostream>
#include <chrono>

using namespace std;

int main(int argc, char *argv[])
{
    int interval = 1000;

    if (argc >= 2)
    {
        interval = atoi(argv[1]);

        if (interval < 1)
        {
            cerr << "Error: interval must be > 1. " << interval << " is not a valid interval value" << endl;
            return 1;
        }
    }

    INPUT input{0};
    input.type = INPUT_MOUSE;

    cout << "Clicking every " << interval << " milliseconds" << endl;
    cout << "Press CTRL+C to quit" << endl;

    while (true)
    {
        input.mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
        SendInput(1, &input, sizeof(INPUT));

        input.mi.dwFlags = MOUSEEVENTF_LEFTUP;
        SendInput(1, &input, sizeof(INPUT));

        Sleep(interval);
    }

    return 0;
}
