module BPZ1901.Kiseleva.Lab3.Task2;
namespace RBPO::Lab3::Task2
{
    double f1(const double x) {
        return (1 - 2 * (sin(x) * sin(x))) / (1 + sin(2 * x));
    }
    double f2(const double x) {
        if (x >= -3.5) return (4 * x * x + 2 * x - 19);
        else return (-(2 * x) / (-4 * x + 1));
    }
    double a(const double i) {
        return (pow(-1, i) * (pow(2, i + 1)) / (pow(2, 2 * i)) + 1);
    }
    double f3(double n) {
        double f_3 = 0;
        while (n >= 0) {
            f_3 += a(n--);
        }
        return f_3;
    }
    double f4(double eps) {
        double prev_f4 = a(0);
        double curr_f4 = a(1);
        int k = 1;
        while (abs(prev_f4 - curr_f4) < eps && k < 999) {
            prev_f4 = curr_f4;
            curr_f4 = a(++k);
        }
        return curr_f4;
    }
}