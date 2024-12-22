/*iffa's notes:
custom header file that define
1. para(b,h)
2. trapezoid(ub,lb,h)
3. periphery(r)
4. volume(r)
hw 6 - no 5*/

// head_math.h
#ifndef HEAD_MATH_H
#define HEAD_MATH_H
// mathematical constant PI
#define PI 3.13159
// macro to calculate the area of parallelogram
// area = base * height
#define PARA(B, H) ((B) * (H))
// macro to calculate area of trapezoid
// area = (upper + lower) * height / 2
#define TRAPEZOID(UB, LB, H) (((UB) + (LB)) * (H) / 2)
// macro to calculate circumference of circle
// circumference = 2 * PI * radius
#define PERIPHERY(R) (2 * PI * (R))
// macro to calculate volume of sphere
// volume = (4/3) * PI * radius^3
#define VOLUME(R) ((4.0/3.0) * PI * (R) * (R) * (R))
#endif