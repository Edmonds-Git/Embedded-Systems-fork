#include "mbed.h"
#include <cstdio>

// Date Type ComplexNumber_C
typedef struct {
  double real;
  double imag;
} ComplexNumber_C;


int main() {

    //Create instance of a complex number
    ComplexNumber_C p;

    //Initialise each attribute 
    p.real = 2.0;
    p.imag = 3.0;
    
    //Create and Initialise 
    ComplexNumber_C q = {1.0, 1.0};

    // TASK:
    // Create another complex number y
    // Calculate the complex sum of p and q and store in y
    // Use printf to display as a complex number (hint: you need two placeholders)
    ComplexNumber_C y = {.real = 0.0, .imag = 0.0};

   // ComplexNumber_C rr = {p.real + q.real};
    //ComplexNumber_C jj = {p.imag + q.imag};

    y.real = (p.real + q.real);
    y.imag = (p.imag + q.imag);
    
    printf("%f+j%f\n",y.real,y.imag);

    while (true) {
    }
}
