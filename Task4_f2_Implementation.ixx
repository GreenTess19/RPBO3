module BPZ1901.Kiseleva.Lab3.Task4:f_2;
import <cmath>;
namespace RBPO::Lab3::Task4 {
    double f2(const double x) {
        return (x >= -3.5) ? (4 * x * x + 2 * x - 19) : (-(2 * x) / (-4 * x + 1));
    }
}
