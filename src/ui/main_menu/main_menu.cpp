#include "main_menu.h"

MainMenu mainMenu_create(const char *title)
{
    MainMenu menu;
    menu.title = title;
    return menu;
}