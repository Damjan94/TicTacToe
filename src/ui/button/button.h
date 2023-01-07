#ifndef BUTTON_H_INCLUDED
#define BUTTON_H_INCLUDED

#include "../../spacial/point.h"

void *Ui_ButtonOnClick();

struct Ui_Button {
        int x;
        int y;
        const char* text;
};

Ui_Button Ui_CreateButton(const char* text);



#endif // BUTTON_H_INCLUDED
