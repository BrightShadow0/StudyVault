#include <stdio.h>
int main() {
    int a = 3.14159265358979323846264338327950288419716939937510;
    float b = 3.14159265358979323846264338327950288419716939937510;
    printf("b = %f\n", b);
    double c = 3.14159265358979323846264338327950288419716939937510;
    printf("c = %lf\n", c);
    short d = 3141592653589793238; //lim
    printf("d = %hd\n", d);
    long e = 3.14159265358979323846264338327950288419716939937510; //lim or error direct
    printf("e = %ld\n", e);
    long long f = 3141592653589793238; //limit
    printf("f = %lld\n", f);
    long double g = 3.14159265358979323846264338327950288419716939937510L; //limit
    printf("g = %Lf\n", g);
    return 0;}