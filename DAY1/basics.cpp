// print odd number
#include <iostream>
using namespace std;
int main()
{
    int number[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 15,16};
    int evenCount = 0;
    int oddCount = 0;
    int size = sizeof(number) / sizeof(number[0]);
    for (int i = 0; i < size; i++)
    {
        if (number[i] % 2 == 0)
        {
            cout << "Even number is: " << number[i];
            evenCount++;
        }
        else
        {
            cout << "Odd number is: " << number[i];
            oddCount++;
        }
        cout << endl;
    }
    cout << "Total number of EvenCount is: " << evenCount << endl;
    cout << "Total number of oddCount is: " << oddCount << endl;

    return 0;
}

