//root.cpp 
#include "func.h"
#include <stdio.h>
#include <math.h>
#include <gsl/gsl_integration.h>

struct Params {
  double a,v,w,b,c;
};

int main (){
  gsl_integration_workspace * z = gsl_integration_workspace_alloc (1000);
 
  Params args = {0.3, 2/3.0, 2.0, 1/1.3, 1/30.0};

  gsl_function F;
  F.function = f;
  F.params = &args;

  double result, error;
  double expected = 8.317880097928303;
               
  double lim_inf = 0;
  double lim_sup = 5;
  double accuracy_bound = 1e-12;
  
  gsl_integration_qags (&F, lim_inf, lim_sup, 0, accuracy_bound, 1000,
                        z, &result, &error); 

  printf ("result          = % .18f\n", result);
  printf ("exact result    = % .18f\n", expected);
  printf ("estimated error = % .18f\n", error);
  printf ("actual error    = % .18f\n", result - expected);
  printf ("intervals       = %zu\n", z->size);

  gsl_integration_workspace_free (z);

  return 0;
}
