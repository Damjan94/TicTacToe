#ifndef BUTTON_H_INCLUDED
#define BUTTON_H_INCLUDED

#include "../../spacial/point.h"


struct Ui_Button {
        struct Point point;
        const char* text;
        void (*onClick)(void);
};

struct Ui_Button buttonCreate(const char* text);

struct Ui_Button buttonAddOnClickListener(const struct Ui_Button* button, void (*onClick)(void));



#endif // BUTTON_H_INCLUDED
