#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  //if(argc < 2) return 1;
  int n=153, n1, rem, num=0;
//  printf("Enter a positive  integer: ");
//  scanf("%d", &n);
  //time_t t;
  //srand((unsigned) time(&t)); // seed rand()
  //n = 33;//rand();
  //n = (int) argv[1][0];
  n1=n;
  while(n1!=0)
  {
      rem=n1%10;
      num+=rem*rem*rem;
      n1/=10;
  }
  if(num==n)
    printf("%d is an Armstrong number ORBS: ",n);
  else
    printf("%d is not an Armstrong number.",n);
}
