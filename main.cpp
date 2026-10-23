
#include <iostream>

/**
 * Практична робота
 * Тема: Структура програми C++
 * Завдання: Збільшення на 10
 */

int main() {
    // Оголошення змінних
    double number, result;

    // Введення числа
    std::cout << "Vvedit chyslo: ";
    std::cin >> number;

    // Збільшення на 10
    result = number + 10;

    // Введення результату
    std::cout << "Rezultat: " << result << std::endl;

    return 0;
}
