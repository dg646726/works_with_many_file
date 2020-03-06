#include<iostream>
#include<Windows.h>
#include<math.h>
#include<ctime>
#include<string>
#include<conio.h>
#include<list>
#include "calc.h"
#include "StringWorker.h"


using namespace std;
HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

#define CLEAR system("cls");
#define PI 3.14

#define begin {
#define end }








int main() {
	setlocale(LC_CTYPE, "");
	srand(time(0));


	int result1 = Calc::sum(10, 5);
	int result2 = Calc::mnozenia(10, 5);
	int result3 = Calc::vidnimanya(10, 5);
	int result4 = Calc::dilennya(10, 5);
	cout << result1 <<" "<< result2 << " " << result3 << " " << result4<< endl;
	StringWorker::sum("Hello", "World");






	/*cout << "Hello World 1" << endl;
	CLEAR
	cout << "Hello World 2" << endl;
	CLEAR
	cout << "Hello World 3" << endl;
	CLEAR
	cout << PI << endl;*/

	/*for (int i = 0; i < 10; i++)
	begin
		cout << i << endl;
	end*/






	system("pause");
	return 0;
}