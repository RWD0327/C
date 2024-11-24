#ifndef MOUSE_H
#define MOUSE_H
#endif

void mouse_click(int x, int y)
{
    SetCursorPos(x, y);
    mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
}

void mouse_move(int x, int y)
{
    SetCursorPos(x, y);
}

void mouse_scroll(int x, int y, int z)
{
    SetCursorPos(x, y);
    mouse_event(MOUSEEVENTF_WHEEL, x, y, z, 0);
}

void mouse_drag(int x1, int y1, int x2, int y2)
{
    SetCursorPos(x1, y1);
    mouse_event(MOUSEEVENTF_LEFTDOWN, x1, y1, 0, 0);
    SetCursorPos(x2, y2);
    mouse_event(MOUSEEVENTF_LEFTUP, x2, y2, 0, 0);
}