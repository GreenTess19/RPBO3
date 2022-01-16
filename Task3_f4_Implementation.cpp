#include "Task3_an_Implementation.h"
module BPZ1901.Kiseleva.Lab3.Task3;

namespace RBPO::Lab3::Task3 {
    double f4(double eps) {
        double prev_f4 = 0;// a(0);
        double curr_f4 = 0;// a(1);
        int k = 0;
        do {
            prev_f4 = a(k);
            curr_f4 = a(++k);
        } while (abs(prev_f4 - curr_f4) < eps && k < 999);
        return curr_f4;
    }
}
