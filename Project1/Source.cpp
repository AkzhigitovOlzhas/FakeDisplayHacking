#include<iostream>
#include<time.h>
#include <windows.h>
	int n;
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	cout << "\tCreated by Akzhigitov Olzhas\n";
	cout << "\n\t\t\t##################\n\t\t\t#   Hack screen  #\n\t\t\t##################\n";
	system("pause");
	cout << "¬ведите 7639 чтобы начать. " << endl;
	cin >> n;
	if (n == 7639) {
		system("color 2");
		srand(time(NULL));
		int a=0;
		int i = 0;
		while (i < 300000) {
			a = rand() % 2;
			cout << a << ' ';
			i++;

		}
	}
		
	return 0;
}