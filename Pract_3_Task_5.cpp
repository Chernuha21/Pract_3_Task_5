#include <iostream>
#include <forward_list>

int main() {
    // 1. Створення однозв'язного списку з кількома елементами
    std::forward_list<int> flist = { 1, 2, 3, 4, 5 };

    // 2. Реверсування списку
    flist.reverse();

    // 3. Виведення всіх елементів реверсованого списку на екран
    std::cout << "Elements of reserve list: ";
    for (int value : flist) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}
