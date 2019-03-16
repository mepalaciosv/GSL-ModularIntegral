//func.cpp
#include "func.h"
#include <stdio.h>
#include <math.h>
#include <gsl/gsl_integration.h>

struct Params {
  double a,v,w,b,c;
};

double f (double x, void* param) {
  struct Params * params = (struct Params *)param;
  
  double a = (params->a);
  double b = (params->b);
  double c = (params->c);
  double v = (params->v);
  double w = (params->w);
  
  double f = a * sin(cos(v - w * x)) + b * x - c * pow(x, 2);
  return f;
}

