export module BPZ1901.Kiseleva.Lab3.Task1;
import <cmath>;
namespace RBPO::Lab3::Task1
{
    export double f1(const double x) {
        return (1 - 2 * (sin(x) * sin(x))) / (1 + sin(2 * x));
    }
    export double f2(const double x) {
        return (x >= -3.5) ? (4*x*x+2*x-19) : (-(2*x)/(-4*x+1));
    }
    export double a(const int i) {
        return (pow(-1,i)*(pow(2,i+1))/(pow(2,2*i))+1)
    }
    export double f3(double n) {
        double f_3 = 0;
        for (int i = 0; i <= n; ++i) {
            f_3 += a(i);
        }
        return f_3;
    }
    export double f4(double eps) {
        int i;
        for (i = 0; abs(a(i) - a(i + 1)) < eps; ++i) {}
        return a(i + 1);
    }
}
