#include "tutorial.h"

#include <iostream>
using namespace std;

int main()
{
	GLFWwindow* window = NULL;

	int input = 1;
	
	while (input == 1)
	{
		cout << "\n###############################################" << endl;
		cout << "OpenGL tutorial environment\n" << endl;
		cout << "Choose following OpenGL subrutines:" << endl;
		cout << "(1) : Basic window (OpenGL initialization)\n" << endl;
		//TODO: add other choices

		cout << "Your choice: ";
		cin >> input;

		switch (input)
		{
			case 1:
				tutorial_1(window);
				break;
		}
	}

	return 0;
}