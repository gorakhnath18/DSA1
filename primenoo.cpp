 #include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool isprime = true;

    if (n <= 1) {
        isprime = false;
    } else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                isprime = false;
                break;
            }
        }
    }

    if (isprime) {
        cout << "is prime no" << endl;
    } else {
        cout << "not a prime" << endl;
    }

    return 0;
}
