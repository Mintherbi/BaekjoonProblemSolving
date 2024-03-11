#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    char str[1001];
    int T;

    cin>>str;
    cin>>T;

    cout<<str[T-1];

    return 0;
}