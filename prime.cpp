 #include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    bool isPrime = true;
    if (number <= 1) {
        isPrime = false;
    } else {
        int i = 2;
        while (i <= number / 2) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
            i++;
        }
    }

    cout << (isPrime ? "Prime" : "Not Prime") << endl;
    return 0;
}
