#include <iostream>
#include <forward_list>

int main() {
    // 1. ��������� ������'������ ������ � ������� ����������
    std::forward_list<int> flist = { 1, 2, 3, 4, 5 };

    // 2. ������������ ������
    flist.reverse();

    // 3. ��������� ��� �������� ������������� ������ �� �����
    std::cout << "Elements of reserve list: ";
    for (int value : flist) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}
