#ifndef BUTTON_H_INCLUDED
#define BUTTON_H_INCLUDED

#include "../../spacial/point.h"


struct Ui_Button {
        struct Point point;
        const char* text;
        void (*onClick)();
};

struct Ui_Button buttonCreate(const char* text);



#endif // BUTTON_H_INCLUDED
