// Author: Matt Amponsah mma6356@psu.edu
// Collaborator: Jordan Hill jlh7084@psu.edu
// Collaborator: Josiah Harrison jeh6043@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char* Tempc = readline("Enter temperature in celsius: ");
  double Tempf = atof(Tempc);
    
  Tempf = Tempf*9/5+32;
  
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", atof(Tempc),Tempf);
  
  return 0;

}