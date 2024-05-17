#include <iostream>

using namespace std;

int main() {
    float length, width;
    
    // Ввод длины и ширины прямоугольника
    cout << "Введите длину прямоугольника: ";
    cin >> length;
    cout << "Введите ширину прямоугольника: ";
    cin >> width;
    
    // Проверка на некорректный ввод
    if (length <= 0 || width <= 0) {
        cout << "Некорректные значения сторон прямоугольника." << endl;
        return 1;
    }
    
    // Вычисление площади и периметра
    float area = length * width;
    float perimeter = 2 * (length + width);
    
    // Вывод результата
    cout << "Площадь прямоугольника: " << area << endl;
    cout << "Периметр прямоугольника: " << perimeter << endl;

    
    
    return 0;
}
