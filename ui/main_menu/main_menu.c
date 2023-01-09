#include "main_menu.h"

struct MainMenu mainMenu_create(const char *title)
{
    struct MainMenu menu;
    menu.title = title;
    return menu;
}

