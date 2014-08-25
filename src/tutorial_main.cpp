#include "tutorial.h"

#include <iostream>
using namespace std;

int main()
{
	GLFWwindow* window = NULL;

	int input = 1;

	while (input < 3)
	{
		cout << "\n###############################################" << endl;
		cout << "OpenGL tutorial environment\n" << endl;
		cout << "Choose following OpenGL subrutines:" << endl;
		cout << "(1) : Basic window (OpenGL initialization)" << endl;
		cout << "(2) : Basic triangle" << endl;
		cout << "(3) : Perspective triangle" << endl;
		cout << "(4) : Perspective cube" << endl;
		cout << "(5) : Textured cube" << endl;
		cout << "(6) : Keyboard and mouse movement" << endl;
		//TODO: add other choices

		cout << "\nYour choice: ";
		cin >> input;

		switch (input)
		{
			case 1:
				tutorial_1(window);
				break;
			case 2:
				tutorial_2(window);
				break;
			case 3:
				tutorial_3(window);
				break;
			case 4:
				tutorial_4(window);
				break;
			case 5:
				tutorial_5(window);
				break;
			case 6:
				tutorial_6(window);
				break;
		}
	}

	return 0;
}