#include <iostream>
#include <string>
#include <Windows.h>
#include <vector>

#include "MenuDriver.h"
#include "AppMenus.h"

using namespace std;

int AppMenus::Menu(MenuDriver newMenu, MenuDriver newCursor) {
	int selection = 0;
	bool run = true;
	vector <string> menu = { "Selection 1", "Short", "This is long Selection 3" , "this", "new selection", "Quit", "Continue" };
	int m = newMenu.MenuModifier(menu);
	int w = newCursor.GetWindowWidth();		//also called 'columnToDraw'

	w /= 2;
	w -= (m / 2);

	newCursor.HideCursorBlink();

	while (run) {
		newMenu.RunMenu(menu, selection, w);
		switch (selection) {
		case 1:
			system("cls");
			cout << "Selection 1..." << endl;
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			system("cls");
			run = false;
			break;
		case 7:
			newCursor.SetNewCursor(10, 0);
			cout << "Continuing..." << endl;
			break;
		default:
			break;
		}
	}


	return selection;
}