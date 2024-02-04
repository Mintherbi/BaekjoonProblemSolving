#include <iostream>

using namespace std;

int main(){
	int t,m;

	cin >> t >> m;

	if (m >= 45 && m < 60) 
	{
		cout << t << " " << m-45 << endl;
	}
	else if (m<45)
	{
		if(t==0) cout << 23 << " " << m+15;
		else cout << t-1 << " " << m+15 << endl;
	}

	return 0;
}

