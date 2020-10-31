/*
ФВЧ для входного сигнала

Данная функция автоматически сгенерирована для фильтра:

H(s) =

      6.283 s
  ---------------
  6.283 s + 39.48

Continuous-time transfer function.

H(z) =

    z - 1
  ----------
  z - 0.9999

Sample time: 8.6957e-06 seconds
Discrete-time transfer function.


*/

float globalFilterF1(float XF10)
{
static float XF11=0;

static float YF10=0;
static float YF11=0;

YF10 = - (-0.9999453650985516) * YF11
     + (-0.9999726825492758) * XF10 + (0.9999726825492757) * XF11;

XF11=XF10;

YF11=YF10;

return YF10;
}


/*
Интегратор с ФВЧ

Данная функция автоматически сгенерирована для фильтра:

H(s) =

        3.603e16
  ---------------------
  3.603e16 s + 2.264e17

Continuous-time transfer function.

H(z) =

  4.348e-06 z + 4.348e-06
  -----------------------
        z - 0.9999

Sample time: 8.6957e-06 seconds
Discrete-time transfer function.


*/

float globalFilterF2(float XF20)
{
static float XF21=0;

static float YF20=0;
static float YF21=0;

YF20 = - (-0.9999453650985516) * YF21
     + (0.0000043477073155) * XF20 + (0.0000043477073154) * XF21;

XF21=XF20;

YF21=YF20;

return YF20;
}


/*


Данная функция автоматически сгенерирована для фильтра:

H(s) =

      6.283 s
  ---------------
  6.283 s + 39.48

Continuous-time transfer function.

H(z) =

    z - 1
  ----------
  z - 0.9999

Sample time: 8.6957e-06 seconds
Discrete-time transfer function.


*/

float globalFilterF3(float XF30)
{
static float XF31=0;

static float YF30=0;
static float YF31=0;

YF30 = - (-0.9999453650985516) * YF31
     + (-0.9999726825492758) * XF30 + (0.9999726825492757) * XF31;

XF31=XF30;

YF31=YF30;

return YF30;
}


/*


Данная функция автоматически сгенерирована для фильтра:

H(s) =

    6.283e04
  ------------
  s + 6.283e04

Continuous-time transfer function.

H(z) =

  0.2146 z + 0.2146
  -----------------
     z - 0.5709

Sample time: 8.6957e-06 seconds
Discrete-time transfer function.


*/

float globalFilterF4(float XF40)
{
static float XF41=0;

static float YF40=0;
static float YF41=0;

YF40 = - (-0.5708673601406956) * YF41
     + (0.2145663199296523) * XF40 + (0.2145663199296522) * XF41;

XF41=XF40;

YF41=YF40;

return YF40;
}
