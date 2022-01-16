#include <iostream>

import BPZ1901.Kiseleva.Lab3.Task1;
import BPZ1901.Kiseleva.Lab3.Task2;
import BPZ1901.Kiseleva.Lab3.Task3;
import BPZ1901.Kiseleva.Lab3.Task4;
import BPZ1901.Kiseleva.Lab3.Task5;

int main() {
    using namespace std;
    double x, eps;
    int n;
    setlocale(LC_ALL, "ru");
    cout << "\n ¬ведите x, n, eps:" << endl;
    cin >> x >> n >> eps;
    cout << "\n namespace Task1:"
        << "\n f_1(x)=" << RBPO::Lab3::Task1::f1(x)
        << "\n f_2(x)=" << RBPO::Lab3::Task1::f2(x)
        << "\n f_3(n)=" << RBPO::Lab3::Task1::f3(n)
        << "\n f_4(n)=" << RBPO::Lab3::Task1::f4(eps);
    cout << "\n namespace Task2:"
        << "\n f_1(x)=" << RBPO::Lab3::Task2::f1(x)
        << "\n f_2(x)=" << RBPO::Lab3::Task2::f2(x)
        << "\n f_3(n)=" << RBPO::Lab3::Task2::f3(n)
        << "\n f_4(n)=" << RBPO::Lab3::Task2::f4(eps);
    cout << "\n namespace Task3:"
        << "\n f_1(x)=" << RBPO::Lab3::Task3::f1(x)
        << "\n f_2(x)=" << RBPO::Lab3::Task3::f2(x)
        << "\n f_3(n)=" << RBPO::Lab3::Task3::f3(n)
        << "\n f_4(n)=" << RBPO::Lab3::Task3::f4(eps);
    cout << "\n namespace Task4:"
        << "\n f_1(x)=" << RBPO::Lab3::Task4::f1(x)
        << "\n f_2(x)=" << RBPO::Lab3::Task4::f2(x)
        << "\n f_3(n)=" << RBPO::Lab3::Task4::f3(n)
        << "\n f_4(n)=" << RBPO::Lab3::Task4::f4(eps);
    cout << "\n namespace Task5:"
        << "\n f_1(x)=" << RBPO::Lab3::Task5::f1(x)
        << "\n f_2(x)=" << RBPO::Lab3::Task5::f2(x)
        << "\n f_3(n)=" << RBPO::Lab3::Task5::f3(n)
        << "\n f_4(n)=" << RBPO::Lab3::Task5::f4(eps);
}