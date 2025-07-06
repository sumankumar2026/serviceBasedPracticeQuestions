#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {   // 153
    int original = num;
    int temp = num;
    int sum = 0;
    int digits = 0;

    // Count digits
    while (temp > 0) {
        digits++;
        temp = temp / 10;
    }

    temp = num;

    // Sum of digits 
    while (temp > 0) {
        int digit = temp % 10;
        sum += round(pow(digit, digits));
        temp = temp / 10;
    }
    cout << "Sum: " << sum <<"   " << "original: " << original <<endl;

    return sum == original;
}

int main() {
    int num = 153;
    if (isArmstrong(num)) {
        cout << "Yes, it is an Armstrong number";
    } else {
        cout << "No, it is not an Armstrong number";
    }
    return 0;
}



//Armstronng step
// count digit of number  like = 123 = 3
// sum with power of digits
// check original number is equal or not to the sum 