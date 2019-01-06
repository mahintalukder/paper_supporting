#include<stdio.h>

int binaryAddition(int,int);

int main(){

    //if (argc < 3 ) return 1;
    long int binary1=1011,binary2=1100,multiply=0;
    int digit,factor=1;

//    printf("Enter any first binary number: ");
//    scanf("%ld",&binary1);
//    printf("Enter any second binary number: ");
//    scanf("%ld",&binary2);
    binary1 = 1111;
    binary2 = 111;

    while(binary2!=0){
         digit =  binary2 %10;

         if(digit ==1){
                 binary1=binary1*factor;
                 multiply = binaryAddition(binary1,multiply);
         }
         else
             binary1=binary1*factor;
   
         binary2 = binary2/10;
         factor = 10;
    }

    printf("Product of two binary numbers, ORBS: %ld\n",multiply);
   
   return 0;
}

int binaryAddition(int binary1,int binary2){

    int i=0,remainder = 0,sum[20];
    int binarySum=0;

    while(binary1!=0||binary2!=0){
         sum[i++] =  (binary1 %10 + binary2 %10 + remainder ) % 2;
         remainder = (binary1 %10 + binary2 %10 + remainder ) / 2;
         binary1 = binary1/10;
         binary2 = binary2/10;
    }

    if(remainder!=0)
         sum[i++] = remainder;
    --i;
    while(i>=0)
         binarySum = binarySum*10 + sum[i--];

    return binarySum;
}
