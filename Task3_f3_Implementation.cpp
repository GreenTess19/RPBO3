#include "Task3_an_Implementation.h"
module BPZ1901.Kiseleva.Lab3.Task3;

namespace RBPO::Lab3::Task3 {
    double f3(double n) {
        double f_3 = 0;
        do {
            f_3 += a(n--);
        } while (n >= 0);
        return f_3;
    }
}
