#include <iostream>
using namespace std;

long double probability(unsigned numbers, unsigned picks);
int main()
{
    double total, choices, second;
    cout << "Enter the total field numbers to choose from, \n"
			"the number of picks allowed from the field numbers, \n" 
			"and the total special numbers to choose from:\n";
    while ((cin >> total >> choices >> second) && choices <= total)
    {
        cout << "You have one chance in ";
        cout << probability(total, choices) * second;
        cout << " of winning.\n";
        cout << "Next three numbers (q to quit): ";
    }
    cout << "bye\n";
    return 0;
}

long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0; 
    long double n;
    unsigned p;
    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p ;
    return result;
}
