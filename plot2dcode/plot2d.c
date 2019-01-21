#include <stdio.h>
#include <math.h>
#include "plot2d.h"

double round(double number) {
  return number < 0.0 ? ceil(number - 0.5) : floor(number + 0.5);
}

void plot2d(double (*function)(double)) {
  int values[2*SIZE+1];
  int i, b;
  double x, value;
  
  for(i=0; i<2*SIZE+1; i++) {
    x = (i - (SIZE));
    x *= STEP;
    value = function(x);
    value /= STEP;
    values[i] = (int)(round(value));
  }

  for(i=SIZE; i>-SIZE; i--) {
    for(b=0; b<2*SIZE+1; b++) {
      if(i == values[b]) 
		printf(LINE);
      else if (b == SIZE || i == 0)
		printf(AXIS);
	  else 
		printf(GRAPH);
    }
    printf("\n");
  }
}

