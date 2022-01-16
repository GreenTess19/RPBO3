module BPZ1901.Kiseleva.Lab3.Task4:f_3;
import :a_n;
namespace RBPO::Lab3::Task4 {
    double f3(double n) {
        double f_3 = 0;
        do {
            f_3 += a(n--);
        } while (n >= 0);
        return f_3;
    }
}