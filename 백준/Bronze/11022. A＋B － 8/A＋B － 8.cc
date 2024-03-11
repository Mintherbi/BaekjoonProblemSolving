#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
        ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

        int len;
        int T[1000][3];

        cin >> len;

        for (int i = 0; i < len ; i++)
        {
                int a,b;
                cin>> a >>b;
                T[i][2] = a + b;
                T[i][0] = a;
                T[i][1] = b;
        }

        for (int j = 0; j < len ; j ++)
        {
                cout << "Case #" << j+1 << ": " << T[j][0] << " + " << T[j][1] << " = " << T[j][2] << endl;
        }

        return 0;

}