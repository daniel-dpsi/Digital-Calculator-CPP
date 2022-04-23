#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;

void adding(float x,float y) {
	float result = 0.0f;
	result = x + y;
	cout << result << "\n" << endl;
}

void subtract(float x, float y) {
	float result = 0.0f;
	result = x - y;
	cout << result << "\n" << endl;
}

void multiply(float x, float y) {
	float result = 0.0f;
	result = x * y;
	cout << result << "\n" << endl;
}

void division(float x, float y) {
	float result = 0.0f;
	result = x / y;
	cout << result << "\n" << endl;
}

void squareroot(float x) {
	float result = 0.0f;
	result = sqrt(x);
	cout << result << "\n" << endl;
}

void cylinder(float x, float y) {
	double pi = 3.14159265359;
	float result = 0.0f;
	result = pi * pow(x, 2) * y;
	cout << result << "\n" << endl;
}

void cone(float x, float y) {
	double pi = 3.14159265359;
	float result = 0.0f;
	result = pi * pow(x,2) * y / 3;
	cout << result << "\n" << endl;
}

void sphere(float x) {
	double pi = 3.14159265359;
	float result = 0.0f;
	result = 1.333333 * pi * pow(x,3);
	cout << result << "\n" << endl;
}

void cube(float x) {
	float result = 0.0f;
	result = pow(x, 3);
	cout << result << "\n" << endl;
}



int main() {
	cout << "Digital calculator (PRESS ESC TO EXIT): " << endl;

	bool calc = true;

	while (calc) {
	system("Color 0A");
		cout << "1. Add" << endl;
		cout << "2. Subtract" << endl;
		cout << "3. Multiply" << endl;
		cout << "4. Division" << endl;
		cout << "5. Square root" << endl;
		cout << "6. Cylinder volume" << endl;
		cout << "7. Circular cone volume" << endl;
		cout << "8. Sphere volume" << endl;
		cout << "9. Cube volume" << endl;

		int selection = 0;
		cin >> selection;

		if (selection > 9) {
			system("cls");
			cout << "Invalid input." << endl;
		}

		if (selection == 1) {
			system("cls");
			cout << "Input 2 numbers to add: " << endl;
			float x = 0, y = 0;
			cin >> x;
			cin >> y;
			cout << "The result is: \n";
			adding(x, y);
		}

		if (selection == 2) {
			system("cls");
			cout << "Input 2 numbers to subtract: " << endl;
			float x = 0, y = 0;
			cin >> x;
			cin >> y;
			cout << "The result is: \n";
			subtract(x, y);
		}

		if (selection == 3) {
			system("cls");
			cout << "Input 2 numbers to multiply: " << endl;
			float x = 0, y = 0;
			cin >> x;
			cin >> y;
			cout << "The result is: \n";
			multiply(x, y);
		}

		if (selection == 4) {
			system("cls");
			cout << "Input 2 numbers to divide: " << endl;
			float x = 0, y = 0;
			cin >> x;
			cin >> y;
			cout << "The result is: \n";
			division(x, y);
		}

		if (selection == 5) {
			system("cls");
			cout << "Calculate the square root of: " << endl;
			int x = 0;
			cin >> x;
			cout << "The result is: \n";
			squareroot(x);
		}

		if (selection == 6) {
			system("cls");
			cout << "Input the radius and the height: " << endl;
			float x = 0, y = 0;
			cin >> x;
			cin >> y;
			cout << "The result is: \n";
			cylinder(x, y);
		}

		if (selection == 7) {
			system("cls");
			cout << "Input the radius and the height: " << endl;
			float x = 0, y = 0;
			cin >> x;
			cin >> y;
			cout << "The result is: \n";
			cone(x, y);
		}

		if (selection == 8) {
			system("cls");
			cout << "Input the radius: " << endl;
			float x = 0;
			cin >> x;
			cout << "The result is: \n";
			sphere(x);
		}

		if (selection == 9) {
			system("cls");
			cout << "Input the edge: " << endl;
			float x = 0;
			cin >> x;
			cout << "The result is: \n";
			cube(x);
		}

		if (GetAsyncKeyState(VK_ESCAPE)) {
			break;
			system("cls");
			calc = !calc;
		}
	}
	
	
}