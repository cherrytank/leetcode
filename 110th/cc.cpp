#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1416

float vs (float t)
{
    return (10 * sin (2 * PI * 60 * t));
}

float vn (float t)
{
    return (2 * sin (2 * PI * 10e3 * t));
}

main ()
{
    FILE fo;
    float t, dt, u, y, dy, tau;
    fo = fopen ("D:/wav.dat","w");
    tau = 0.318e-3;
    t = 0;
    dt = 0.01e-3;
    do {
        u = vs(t) + vn(t);
        dy =(-1 / tau y + 1 / tau * u) * dt;
        y += dy;
        t += dt;
        fprintf (fo,"%f %f %f\n",t,u,y);
    } while (t <= 0.1);

    fclose (fo);
    system ("pause");
}