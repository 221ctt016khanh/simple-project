#include "cal.h"
#include <stdio.h>

float divine(int a, int b) {
    if (b == 0) {
        printf("Error: Khong the chia cho 0 \n");
        return 0;
    }
    return (float)a / b;
}