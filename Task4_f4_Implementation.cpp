module BPZ1901.Kiseleva.Lab3.Task4:f_4;
import <cmath>;
import :a_n;
namespace RBPO::Lab3::Task4 {
    double f4(double eps) {
        double prev_f4 = 0;
        double curr_f4 = 0;
        int k = 0;
        do {
            prev_f4 = a(k);
            curr_f4 = a(++k);
        } while (abs(prev_f4 - curr_f4) < eps && k < 999);
        return curr_f4;
    }
}
