// WAP to print 
#include <iostream>
using namespace std;
int main() {
    int n;
     cout << "Enter a number: ";
     cin >> n;

    if (n < 1 || n > 100) {
         cout << "No match" <<  endl;
    } else if (n % 2 == 0) {
         cout << "Even numbers from 100 to 400: ";
        for (int i = 1; i <= 100; i++) {
            if (i % 2 == 0) {
                 cout << i << " ";
            }
        }
         cout <<  endl;
    } else if (n % 2 != 0) {
         cout << "Odd numbers from 100 to 400: ";
        for (int i = 1; i <= 100; i++) {
            if (i % 2 != 0) {
                 cout << i << " ";
            }
        }
         cout <<  endl;
    }

}

