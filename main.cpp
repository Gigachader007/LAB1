#include <iostream>
#include <cmath>

//Вариант 24. Решить полное квадратное уравнение.

int main(){
    double a,b,c;
    std::cout << "Введите коэффициенты ax^2 + bx + c = 0\n";
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    std::cout << "c: ";
    std::cin >> c;
    if(a == 0.0){
        if(b != 0.0){
            std::cout << "1 корень: " << -c/b << std::endl;
        }
        else if(b == 0.0 && c != 0.0){
            std::cout << "0 корней!\n";
        }
        else{
            std::cout << "бесконечное число корней!\n";
        }
    }
    else{
        auto D = b*b - 4.0 * a * c;
        if(D > 0.0){
            auto x1 = (-b - std::sqrt(D)) / (2.0 * a);
            auto x2 = (-b + std::sqrt(D)) / (2.0 * a);
            std::cout << "Всего 2 корня: " << x1 << " " << x2 << std::endl;
        }
        else if(D == 0.0){
            std::cout << "Всего 1 корень: " << -b/(2.0 * a) << std::endl;
        }
        else{
            std::cout << "Уравнение не имеет корни в вещественных числах. 0 корней!\n";
        }
    }
}