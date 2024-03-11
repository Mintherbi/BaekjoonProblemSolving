#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
        ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

        int star;

        cin >> star;

        for (int i = 0; i < star; i++)
        {
                for (int j = 0 ; j <= i ; j++)
                {
                        cout << "*";
                }
                cout << endl;
        }
        return 0;
}