#include <iostream>

using namespace std;

bool searchLuckyNumber(int number)
{
    int sum6_4 = 0;
    int sum3_1 = 0;

    sum6_4 = number / 100000 + number / 10000 % 10 + number / 1000 % 10;
    sum3_1 = number / 100 % 10 + number / 10 % 10 + number % 10;

    if (sum6_4 == sum3_1)
    {
        return true;
    }

    return false;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int userNumber;

    cout << "Введите шестизначное число: ";
    cin >> userNumber;

    if (userNumber < 100000 || userNumber > 999999)
    {
        cout << "Некорректный ввод" << endl;
        return 1;
    }

    cout << userNumber << (searchLuckyNumber(userNumber) ? " это" : " это не") << " счастливое число" << endl;
}
