#include <iostream>

#include "complexnumb.h"

using namespace std;

int main()
{
    ComplexNumb<long long int> num1, num2, num3, num4, num5;

    num1.num_values(5, 5);
    num1.modul();
    num1.print_num();
    cout << "-------------------------------" << endl;
    num2.num_values(3, 9);
    num2.modul();
    num2.print_num();
    cout << "-------------------------------" << endl;
    cout << "---------operator_+_-----------" << endl;
    cout << "-------------------------------" << endl;
    num3 = num1 + num2;
    num3.modul();
    num3.print_num();
    cout << "-------------------------------" << endl;
    cout << "---------operator_-_-----------" << endl;
    cout << "-------------------------------" << endl;
    num4 = num1 - num2;
    num4.modul();
    num4.print_num();
    cout << "-------------------------------" << endl;
    cout << "---------operator_*_-----------" << endl;
    cout << "-------------------------------" << endl;
    num5 = num1 * num2;
    num5.modul();
    num5.print_num();
    cout << "-------------------------------" << endl;
    cout << "--------operator_==_-----------" << endl;
    cout << "-------------------------------" << endl;
    cout << (num1 == num2) << endl;
    cout << "-------------------------------" << endl;

}
