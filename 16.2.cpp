#include <iostream>
using namespace std;

#include <iostream>//бібліотека вводу та виводу 
#include <cstdlib>//для функцій rand і srand
#include <ctime>//для функції time
#define size 3//символічна константа розміру 3 
using namespace std;//простір імен std

int main() {
    setlocale(LC_ALL, "rus");
    double A[size][size]; //матриця розміром 3x3
    srand(time(NULL));  // Встановлення випадкового початкового елемента для функції rand
    /*
    Для того, щоб генерувати випадкові числа, функція rand зазвичай ініціалізуєтся
    деякими різними значення, наприклад, такі значення генеруються функцією time.
    Значення, повернене функцією time(оголошена в заголовку <ctime>),
    відрізняється кожну секунду, що дає можливість отримувати абсолютно випадкові
    послідовності чисел, при кожному новому виконанні функції rand.
    */

    for (int i = 0; i < size; ++i) {
        for (int a = 0; a < size; ++a) {
            A[i][a] = rand() % 100;  // Генеруємо випадкове число від 0 до 100
        }
    }

    int positivechoslo = 0;  // Лічильник позитивних елементів для кожного рядка
    for (int i = 0; i < size; ++i) {
        for (int a = 0; a < size; ++a) {
            if (A[i][a] > 0) {
                positivechoslo = positivechoslo + 1;
            }
        }

    }
    cout << "всього позитивних елементів: " << positivechoslo;
    return 0;
}


