#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int Max=0;
    int Index=0;
    int Arr[1000];
    int i=1;

    while(cin>>Arr[i]){
        if (Max<Arr[i]){
            Max = Arr[i];
            Index=i;
        }
        i++;
    }

    cout<<Max<<endl;
    cout<<Index<<endl;

    return 0;
}