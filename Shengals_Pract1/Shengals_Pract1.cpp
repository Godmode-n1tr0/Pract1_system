#include <iostream>
using namespace std;

bool Palindrome(int num) {
    int rev = 0, orig = num, last;
    while (num > 0) {
        last = num % 10;
        rev = rev * 10 + last;
        num /= 10;
    }
    return rev == orig;
}

int sumchet(int num) {
    int sum = 0;
    while (num > 0) {
        int d = num % 10;
        if (d % 2 == 0) sum += d;
        num /= 10;
    }
    return sum;
}

int sumnechet(int num) {
    int sum = 0;
    while (num > 0) {
        int d = num % 10;
        if (d % 2 != 0) sum += d;
        num /= 10;
    }
    return sum;
}

int main() {
    setlocale(0, "rus");
    int x;
    cout << "Введите число: ";
    cin >> x;

    bool addEven = true;

    while (!Palindrome(x)) {
        if (addEven) {
            x += sumchet(x);
        }
        else {
            x += sumnechet(x);
        }
        addEven = !addEven;
        cout << "Текущее число: " << x << endl;
    }

    cout << "Получен палиндром: " << x << endl;
    return 0;
}