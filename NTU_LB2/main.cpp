#include <iostream>
#include <cmath>
#include <string>

/*------------Функція calculateValue для обчислення результату------------*/

double calculateValue(double x) {
    
    if (x < -M_PI) // Якщо x менше -3.14
    {
        return std::abs(std::log(std::abs(x))); // Обчислює логарифм числа.
    } 
    else if (x >= -M_PI && x < M_PI) // Якщо -3.14 менше x менше 3.14
    {
        return std::abs(std::sin(x) + std::cos(2 * x)); // Обчислює суму абсолютних значень синусу та косинусу

    } 
    else if (x >= M_PI && x < 10) // Якщо 3.14 менше x менше 10
    {
        return std::abs(std::pow(x, 3) + 1); // Обчислює абсолютне значення (x^3 + 1).

    } 
    else if (x >= 10 && x <= 100) // Якщо x більше 10 і x менше 100
    {
        return std::abs((x + 1) / (x * x + 8)); // Обчислює абсолютне значення (x + 1) поділити на (x^2 + 8).

    } 
    else 
    {
        return std::abs(std::log(std::abs(x))); // Або в іншому випадку обчислюємо логарифм числа.
    }

}

int main() {

    char continueInput; 
    double x, result;

    do 
    {
        /*------------Отримуємо значення X------------*/

        std::cout << "----------------------" << '\n';
        std::cout << "\x1b[32mВведіть значення x: \x1b[0m";
        std::cin >> x;

        result = calculateValue(x);

        std::cout << "\n" << "\x1b[35mРезультат: \x1b[0m " << result 
                  << '\n' 
                  << "----------------------" 
                  << '\n';
        
        std::cout << "\x1b[31mЧи бажаєте ви продовжити роботу? (Y або N): \x1b[0m "; 
        std::cin >> continueInput;

        if (continueInput == 'N' || continueInput == 'n') 
        {
            std::cout << "Програма завершує роботу:>" << std::endl;
        }

    } while (continueInput == 'y' || continueInput == 'Y');
    
    return 0;
    
}