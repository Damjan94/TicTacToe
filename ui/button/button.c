
#include "button.h"

struct Ui_Button buttonCreate(const char* text) {
    struct Ui_Button button;
    button.text = text;
    return button;
}


struct Ui_Button buttonAddOnClickListener(const struct Ui_Button* button, void (*onClick)(void)) {
    struct Ui_Button buttonWithAction = *button;
    buttonWithAction.onClick = onClick;
    return buttonWithAction;
}

