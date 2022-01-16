module BPZ1901.Kiseleva.Lab3.Task4:f_1;
import <cmath>;
namespace RBPO::Lab3::Task4 {
	double f1(const double x) {
		return (1 - 2 * (sin(x) * sin(x))) / (1 + sin(2 * x));
	}
}