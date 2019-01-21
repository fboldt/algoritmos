#include <stdio.h>
#include <math.h>
#define AXIS "+ "
#define LINE "# "
#define GRAPH ". "
#define SIZE 15
#define STEP (1.0)

double round(double number) {
  return number < 0.0 ? ceil(number - 0.5) : floor(number + 0.5);
}

int plot2d(double (*function)(double)) {
  int values[SIZE+SIZE+1];
  
  for(int i = 0;i< SIZE+SIZE+1;++i) {
    double x = (i - (SIZE));
    x = x*STEP;
    // EQUATION
    double value = function(x);
    /// EQUATION
    value = value/STEP;
    values[i] = (int)(round(value));
  }
  for(int i = 0; i < SIZE+SIZE+1;++i) {
    printf("\n");
  }
  for(int i = 0;i < SIZE;++i) {

    for(int b = 0; b < SIZE;++b) {
      if(SIZE - i == values[b]) 
	printf(LINE);
      else 
	printf(GRAPH);
    }
    
    if(SIZE -i == values[SIZE]) 
	printf(LINE);
    else
	printf(AXIS);
    
    for(int b = 0; b < SIZE;++b) {
      if(SIZE - i == values[b+SIZE+1])
	printf(LINE);
      else
	printf(GRAPH);
    }
    printf("\n");
  }
  for(int i = 0;i < SIZE*2+1;++i) {
    if( 0 == values[i] )
	printf(LINE);
    else
	printf(AXIS);
  }
    printf("\n");

  for(int i = 0;i < SIZE;++i) {
    for(int b = 0; b < SIZE;++b) {
      if(0-i-1 == values[b])
	printf(LINE);
      else
	printf(GRAPH);
    }
    if(0 -i-1 == values[SIZE]) 
	printf(LINE);
    else
	printf(AXIS);

    for(int b = 0; b < SIZE;++b) {
      if(0-i-1 == values[b+SIZE+1])
	printf(LINE);
      else
	printf(GRAPH);
    }
    printf("\n");
  }
}

