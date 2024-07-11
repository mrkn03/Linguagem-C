#include <stdio.h>

int main(){

    int x, y;

    x = 5;
    y = 2 * x;

    printf("%d\n", x);
    printf("%d\n", y);

    return 0;
}

int main(){

    int x;
    double y;

    x = 5;
    y = 2 * x;

    printf("%d\n", x);
    printf("%.1lf\n", y);

    return 0;
}

int main(){

    double b1, b2, h, area;

    b1 = 6.0;
    b2 = 8.0;
    h = 5.0;
    area = (b1 + b2) / 2.0 * h;

    printf("%lf\n", area);

    return 0;
}

int main(){

    double b1, b2, h, area;

    b1 = 6.0;
    b2 = 8.0;
    h = 5.0;
    area = (b1 + b2) / 2.0 * h;

    printf("%lf\n", area);

    return 0;
}

int main(){

    double a;
    int b;

    a = 5.0;
    b = (int) a;

    printf("%d\n", b);

    return 0;
}
