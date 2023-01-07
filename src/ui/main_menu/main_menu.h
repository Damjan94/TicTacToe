#ifndef MAIN_MENU_H_INCLUDED
#define MAIN_MENU_H_INCLUDED

#include "../button/button.h"

struct MainMenu {
    const char* title;
    struct Ui_Button playButton;
    struct Ui_Button exitButton;
};

struct MainMenu mainMenu_create(const char* title);
void mainMenu_addPlayButton(struct Ui_Button playButton);
void mainMenu_addExitButton(struct Ui_Button exitButton);


#endif // MAIN_MENU_H_INCLUDED
