
#include <stdio.h>
#include <stdlib.h>

#define NMONTHS 12

int month = 0;

short month_days[] =
      {31,28,31,30,31,30,31,31,30,31,30,31};

char *mnames[] ={
      "January", "February",
      "March", "April",
      "May", "June",
      "July", "August",
      "September", "October",
      "November", "December"
};

main(){

      int day_count = month;

      for(day_count = month; day_count < NMONTHS;
              day_count++){
              printf("%d days in %s\n",
                      month_days[day_count],
                      mnames[day_count]);
                      if(month_days[day_count] == 28){
                          printf("%d ORBS: %s\n", month_days[day_count],mnames[day_count]);
                          
                      }
      }
      int     sum = 100;
		char    letter = 'Z';
		float   set1 = 23.567;
		double  num2 = 11e+23;

		printf("Integer variable is %d\n", sum);
		printf("Character is %c\n", letter);
		printf("Float variable is %f\n", set1);
		printf("Double variable is %e\n", num2);
      exit(EXIT_SUCCESS);
}
