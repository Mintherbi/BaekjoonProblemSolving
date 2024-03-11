#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
        ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

        int T[10000];
        int len = 0;

        while(1)
        {
                int a, b;
                cin >> a >> b;
                if(a==0 & b==0) break;
                T[len] = a+b;
                len ++;
        }

        for (int i = 0 ; i < len ; i ++)
        {
                cout << T[i] << endl;
        }

        return 0;

}