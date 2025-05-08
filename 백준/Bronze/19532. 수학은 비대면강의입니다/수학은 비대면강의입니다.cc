#include <iostream>
#include <cmath>
#include <vector>
#include <cstdlib>

#define LEN <>

using namespace std;

int main () 
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int a,b,i,c,d,j;

	cin>>a>>b>>i>>c>>d>>j;

	for(int x=-999;x<1000;x++){
		for(int y=-999;y<1000;y++){
			if((a*x)+(b*y)==i && (c*x)+(d*y)==j){
				cout<<x<<' '<<y;
				return 0;
			}
		}
	}
}
