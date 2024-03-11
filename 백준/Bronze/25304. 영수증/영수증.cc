#include <iostream>
using namespace std;

int main()
{
    int result, num;
    int sum = 0;

    cin >> result;
    cin >> num;

    for(int i = 0; i < num; i++)
    {
        int price, count;
        cin >> price >> count;

        sum += price*count;
    }
    if (sum == result) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}