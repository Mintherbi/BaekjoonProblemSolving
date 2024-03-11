#include <iostream>
#include <iomanip>
int main()
{
    double A; 
    double B;
    double C;

    std::cin >> A;
    std::cin >> B;

    C = A / B;
    std::cout << std::setprecision(10);
    std::cout << C;

    return 0;
}