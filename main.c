#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "flmoon.h"
#include "julday.h"

int main()
{
    int n, nph;
    long jd;
    float frac;
    n = 1; nph = 2; jd = 17L; frac = 0.5;
    flmoon(n, nph, &jd, &frac);
    printf("Result of julday: %lu", julday(1,1,-19902));
    return 0;
}




