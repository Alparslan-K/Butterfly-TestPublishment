#include <iostream>
#include<iomanip>//for setw() you need this lib
using namespace std;

void main()
{
	int i,j,h;
	char o;
	
	cout << "enter height";
	cin >> h;
	cout << "pick your symbol";
	cin >> o;
      
	cout << endl;
	for (i = 1; i <= h; i++) {//upper part
		for (j = 1; j <= i; j++) {//first upper triangel
			cout << setw(2) << o;

		}
		for (j = 1; j <= 2 * (h - i); j++) {//the space between two upper triangles
			cout << setw(2) << " ";
		}
		for (j = 1; j <= i; j++) {//second upper triangel
			cout << setw(2) << o;
		}
		cout << endl;



	}
    for (i =h; i >=1 ; i--) {//lower part
		for (j =1; j<=i; j++) {//first lower triangel
			cout <<setw(2)<< o;

		}
		for (j = 1; j <= 2 * (h - i); j++) {//the space between two lower triangles
			cout << setw(2) << " ";
		}
		for (j = 1; j <= i; j++) {//second lower triangel
			cout << setw(2) << o;
		}
		cout<<endl;
    }
		

	system("pause>0");
	
	
}
