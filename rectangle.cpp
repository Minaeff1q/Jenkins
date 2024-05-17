#include <iostream>
#include <string> // Добавляем заголовочный файл для работы с типом string

using namespace std;

int main(int argc, char* argv[]) { // Модифицируем main для принятия аргументов командной строки
    float length, width;
    
    // Ввод длины и ширины прямоугольника
    // cout << "Введите длину прямоугольника: ";
    // cin >> length;
    // cout << "Введите ширину прямоугольника: ";
    // cin >> width;
    length = 1;
    width = 2;
    
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
    
    // Если аргумент командной строки "debug" передан, выведем дополнительную информацию
    if (argc > 1 && string(argv[1]) == "debug") {
        cout << "Дополнительная отладочная информация:" << endl;
        cout << "Длина: " << length << endl;
        cout << "Ширина: " << width << endl;
    }
    
    return 0;
}
