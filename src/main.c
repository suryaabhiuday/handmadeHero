#include <windows.h>
int CALLBACK WinMain(
    HINSTANCE Instance,
    HINSTANCE PrevInstance,
    LPSTR CommandLine,
    int ShowCode)
{
    MessageBox(0, "This is Handmade Hero.", "Handmade Hero", MB_OK | MB_ICONINFORMATION);
    return 0;
}
