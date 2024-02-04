#include <iostream>
using namespace std;

int main(){
	int result;

	cin >> result;

	if (result>=90){ cout << "A";}
	else if (result>=80 && result <90){ cout << "B"<<endl;}
	else if (result>=70 && result <80){ cout << "C"<<endl;}
	else if (result>=60 && result <70){ cout << "D"<<endl;}
	else { cout << "F"<<endl;}

	return 0;
}
