#include <stdio.h>
#include <stdlib.h>
#define DELTA 0.0001
main(){
      double sq_root(double); /* prototype */
      void pmax(int first, int second);
      int i , j;
      for(i = -10; i <= 10; i++){
              for(j = -10; j <= 10; j++){
                      pmax(i,j);
              }
      
              if(i>0){
        
                  for(i = 1; i < 10; i++){
                          printf("ORBS: %d is %f\n", i, sq_root(i));
                  }
              }
      }
      exit(EXIT_SUCCESS);
}


void
pmax(int a1, int a2){                           /*definition*/
      int biggest;

      if(a1 > a2){
              biggest = a1;
      }
      else{
              biggest = a2;
      }

      printf("largest of %d and %d is %d\n",
              a1, a2, biggest);
}

double
sq_root(double x){      /* definition */
      double curr_appx, last_appx, diff;

      last_appx = x;
      diff = DELTA+1;

      while(diff > DELTA){
              curr_appx = 0.5*(last_appx
                      + x/last_appx);
              diff = curr_appx - last_appx;
              if(diff < 0)
                      diff = -diff;
              last_appx = curr_appx;
      }
      return(curr_appx);
}