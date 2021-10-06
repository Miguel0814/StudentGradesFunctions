// oct p 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


//Function prototype
void StudentInput();
void StudentOutput(); 


int main()
{
	int i; total[5];

	for (i = 0; i < 5; i++) {
		total[i] = StudentInput();
		cout << "\nthe total grade is:" << total[i] << endl;
		cout << "\n the average grade is: " << total[i] / 2 << endl;
	}




}
	

	void StudentInput();

}
float StudentInput(string n, float grade1,float grade2) {
	float total;
	string name;
	float grade1; float grade2; total;
	cout << " \nEnter name of the student: ";
	cin >> name;
	cout << "\nEnter grade1";
	cin >> grade1;
	cout << "\nEnter grade2";
	cin >> grade2;
	total = grade1 + grade2;
	cout << "\nthe name of the studet is: " << name << endl;
	cout << "\Grade1 = " << grade1 << endl;
	cout << "\Grade2 = " << grade2 << endl;
	return (total);



}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
