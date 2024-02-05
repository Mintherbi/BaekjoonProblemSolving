#include <iostream>
#include <cmath>
#include <vector>

#define LEN <>
#define ENG(a) ((int(a)>=65 && int(a)<=90) || (int(a)>=97 && int(a)<=122))
using namespace std;

int main () 
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string T; 
    getline(cin,T);

    if(T.length()==1 && T[0]==' ') {
        cout<<"0";
        return 0;
    }

    int num=1;
    
    for(int a=1; a<T.length()-1; a++) {
        if((T[a]==' ') && ENG(T[a-1]) && ENG(T[a+1])) num++;
    }

    cout<<num;

    return 0;
}
