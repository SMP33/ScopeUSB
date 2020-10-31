#ifndef INC_GLOBALFILTER_H_
#define INC_GLOBALFILTER_H_

/*
Данная функция автоматически сгенерирована
 для фильтра:

H(s) =

            3 s
  -----------------------
  3 s^2 + 25.13 s + 39.48

Continuous-time transfer function.

H(z) =

  4.348e-06 z^2 + 2.22e-16 z - 4.348e-06
  --------------------------------------
            z^2 - 2 z + 0.9999

Sample time: 8.6957e-06 seconds
Discrete-time transfer function.


*/

float globalFilter(float x0)
{
static float x1=0;
static float x2=0;

static float y0=0;
static float y1=0;
static float y2=0;

y0 = - (0.9999271542) * y1 - (-1.9999271533) * y2
     + (-0.0000043477) * x0 + (0.0000000000) * x1 + (0.0000043477) * x2;

x2=x1;
x1=x0;

y2=y1;
y1=y0;

return y0;
}

#endif /* INC_GLOBALFILTER_H_ */
