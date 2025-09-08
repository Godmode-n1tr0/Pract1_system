#include <iostream>

int main()
{
    setlocale(0, "rus");
    int polindrom, orig, x, last, b, chislo = 0, count = 0;
    int a = 0;
    int chetnoe = 0;
    int nchetnoe = 0;
    int revers = 0;
    std::cout << "Введите число: ";
    std::cin >> x;
    while (a != 1) {
        count++;
        system("cls");
        x += chislo;
        orig = x;
        while (x != 0) {
            last = x % 10;
            revers = revers * 10 + last;
            x = x / 10;
            if (count == 1) {
                if (last % 2 == 0) {
                    chetnoe += last;
                }
            }
            else if (count == 2) {
                if (last % 2 != 0) {
                    nchetnoe += last;
                }
                count = 0;
            }
        }
        orig += chetnoe;
        orig += nchetnoe;
        chetnoe = 0;
        nchetnoe = 0;
        if (orig == revers) {
            std::cout << "Число полиндром!";
            a = 1;
        }
        else {
            x = orig;
            std::cout << "Число "<<x<<" не полиндром продолжаем дальше!\n";
            int aaaaaa;
            std::cin >> aaaaaa;
            revers = 0;
        }
    }
}
