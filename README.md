# GSL-ModularIntegral

Program for C++ that calculates an integral using GSL functionalities. It is written in modules, so it must be executed via terminal. The way I did it, on a PC that runs on Linux Mint 19, is using the terminal commands

  1. gcc func.cpp -c -o func.o
  2. gcc func.o code.cpp -I$/u/local/apps/gsl/current/include -L$/u/local/apps/gsl/current/lib -lgsl -lgslcblas -lm -o a.out
  3. time ./a.out

in that order. The program was developed for the course 'High Performance Computing' offered by the Fundación Universitaria Konrad Lorenz.

The expected output of the program is

  1. result = 8.317880097928300742
  2. exact result = 8.317880097928302519
  3. estimated error = 0.000000000000152489
  4. actual error = -0.000000000000001776
  5. intervals = 4
