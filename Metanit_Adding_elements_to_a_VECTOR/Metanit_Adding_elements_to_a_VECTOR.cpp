#include <iostream>
#include <vector>

/*Для добавления элементов в вектор применяется функция push_back(), 
в которую передается добавляемый элемент:*/

int main()
{
    std::vector<int> vec; // создал пустой вектор
    vec.push_back(1);
    vec.push_back(34);
    vec.push_back(46);
    vec.push_back(46);

    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << "Vec = " << vec[i] << ", "; // 1, 34, 46, 46
    }
    std::cout << '\n';

    for (int elements : vec) {
        std::cout << "Vec = " << elements << ", "; // 1, 34, 46, 46
    }
    std::cout << '\n';

    std::cout << "vec.size() = " << vec.size() << '\n'; // всего элементов 4

    /*Векторы являются динамическими структурами в отличие от массивов, 
    где мы скованы его заданым размером. 
    Поэтому мы можем динамически добавлять в вектор новые данные.*/

    // Функция emplace_back() выполняет аналогичную задачу - добавляет элемент в конец контейнера:

    std::vector<int> vecto{ 300, 400, 500, 600 };
    vecto.emplace_back(555);

    std::cout << "emplace_back() = ";
    for (int n : vecto)
    {
        std::cout <<  n << ", "; // vecto { 300, 400, 500, 600, 555 }
    }
}
