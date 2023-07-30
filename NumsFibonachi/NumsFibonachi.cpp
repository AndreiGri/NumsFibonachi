#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    system("chcp 1251 > nul");
    int n, s1 = 0, s2 = 0, r = 0;
    cout << "Введите количество чисел Фибоначчи: ";
    cin >> n;
    //n = n - 2;
    while (n) {
        if (s1 == 0) {
            s1++;
            cout << s1 << " ";
        }
        s2 += s1;
        cout << s2 << " ";
        n--;
        r = s1;
        s1 = s2;
        s2 = r;
    }
    system("pause > nul");
    return 0;
}
