#ifndef INC_GLOBALFILTER_H_
#define INC_GLOBALFILTER_H_

/*
Данная функция автоматически сгенерирована
 для фильтра:

H(s) =

      1
  ---------
  s + 6.283

Continuous-time transfer function.

H(z) =

  4.348e-06 z + 4.348e-06
  -----------------------
        z - 0.9999

Sample time: 8.6957e-06 seconds
Discrete-time transfer function.


*/

float globalFilterF1(float XF10)
{
static float XF11=0;

static float YF10=0;
static float YF11=0;

YF10 = - (-0.9999453649707948) * YF11
     + (0.0000043477073152) * XF10 + (0.0000043477073152) * XF11;

XF11=XF10;

YF11=YF10;

return YF10;
}

/*
Данная функция автоматически сгенерирована
 для фильтра:

H(s) =

      s
  ---------
  s + 6.283

Continuous-time transfer function.

H(z) =

    z - 1
  ----------
  z - 0.9999

Sample time: 8.6957e-06 seconds
Discrete-time transfer function.


*/

float globalFilterF2(float XF20)
{
static float XF21=0;

static float YF20=0;
static float YF21=0;

YF20 = - (-0.9999453649707948) * YF21
     + (-0.9999726824853974) * XF20 + (0.9999726824853974) * XF21;

XF21=XF20;

YF21=YF20;

return YF20;
}

#endif /* INC_GLOBALFILTER_H_ */
