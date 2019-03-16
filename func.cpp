//func.cpp
#include "func.h"
#include <stdio.h>
#include <math.h>
#include <gsl/gsl_integration.h>

// Structure that carries all the problem's constants
struct Params {
  double a,v,w,b,c;
};

double f (double x, void* param) {
  struct Params * params = (struct Params *)param; // First we release the structure into the function
  
  double a = (params->a); // Then we assign a variable to each of them
  double b = (params->b);
  double c = (params->c);
  double v = (params->v);
  double w = (params->w);
  
  double f = a * sin(cos(v - w * x)) + b * x - c * pow(x, 2); // Then we calculate the value of the function for some x
  return f; // And finally we return the function's value
}

