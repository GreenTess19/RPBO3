module BPZ1901.Kiseleva.Lab3.Task4:a_n;
import <cmath>;
namespace RBPO::Lab3::Task4 {
    double a(const double i) {
        return (pow(-1, i) * (pow(2, i + 1)) / (pow(2, 2 * i)) + 1);
    }
}
