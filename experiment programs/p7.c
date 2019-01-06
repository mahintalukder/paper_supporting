#include <stdio.h>
#include <stdlib.h>
 
int main() {


 
  printf("Ten random numbers in [1,100]\n");
 

int n = 10, c, num, max = 100, max_value = 0, min_value;
    
    for (c = 1; c <= n; c++)
    {
        num = rand() % max +1;
        printf("%d\n",num);
	if(c == 1){
	min_value = num;
	}
	
	
	if(num >= max_value){
		max_value = num;
	}
	if(num <= min_value){
		min_value = num;
	}

    }

    printf("max_value :=%d\n" , max_value);
    printf("min_value :=%i\n" , min_value);

//printf("ORBS :=%i\n" , min_value);

int multiplication = max_value * min_value;
int summation = max_value + min_value;
int substraction = max_value - min_value;
double devistion = max_value / min_value;

printf("* :=%i\n" , multiplication);
printf("ORBS :=%i\n" , summation);
printf("- :=%i\n" , substraction);
printf("/ :=%lf\n" , devistion);



 
  return 0;
}

