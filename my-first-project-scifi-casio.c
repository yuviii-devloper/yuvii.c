
#include <stdio.h>
#include<math.h>

int main() {
    printf("_________________________________\n");
    printf("||                             ||\n");
    printf("||   SCIENTIFIC CALCULATOR     ||\n");
    printf("||_____________________________||\n");
    printf("                                 \n");
    printf("                                 \n");
    printf("                                 \n");


double i =0;
double num;
int opt;
long long factorial=1;                              /*20 tak limit hogi iski*/



while (1)
{
  


if (i==0)                          // sirf ek bar fir ram me memory ghumegi ghumegi
{
   
printf("enter1 :");

if (scanf("%lf",&num)!=1)
{
    printf("invalid input\n");
    while (getchar() != '\n'); // Clear the input buffer
    continue;
}


}


i++;                           // badhao i taaki chlat arahe
printf("\n");

printf("choose your operation number :\n");
printf("1. +\n2. -\n3. x\n4. /\n5.squareroot\n6.power\n7.(!)factorial\n8.square\n9.absolute value\n10.log\n11.clean\n12.exit\n\n  :");

printf("\n");
if (scanf("%d", &opt) != 1) { // Check if input is not an integer
    printf("invalid input\n");
    while (getchar() != '\n'); // Clear the input buffer
    continue;
}


if(opt>12 || opt<1){
    printf("invalid input\n");
    continue;
}
double num1;

if (opt==1||opt==2||opt==3||opt==4||opt==6)                     // yeh sirf 1 number wale hai dusri input ki jaruart nhi hain
{
    /* code */


printf("enter2 :");
if (scanf("%lf", &num1) != 1) { // Check if input is not a number
    printf("invalid input\n");
    while (getchar() != '\n'); // Clear the input buffer
    continue;
}

    /* code */
printf("\n");
printf("\n:");}

  int n=(int)num;
  
switch (opt)                            // switch me hi le lete hai if itna kon lagyaega
{
    
    case 1 :
num=num+num1;
printf("result is : %.6lf\n\n",num);
    break;

case 2:

num=num-num1;
printf("result is : %.6lf\n\n",num);
    break;


case 3    :
num=num*num1;
printf("result is : %.6lf\n\n",num);
break;



case 4:
if (num1 == 0) {                                    //zero se nhi jayega infinte nhi karna 
    printf("error: division by zero\n\n");
    break;}
    

num=num/num1;
printf("result is : %.6lf\n\n",num);
break;

case 5:                                   // negitive ka internet par tooh nhi aa rha hain
if(num<0){
    printf("error: square root of negative number\n\n");
    break;
}
num=sqrt(num);
printf("result is : %.6lf\n\n",num);
break;


case 6:
if (num<0 && num1 != (int)num1) { // Check for negative base with non-integer exponent
    printf("error: negative base with non-integer exponent\n\n");
    break;
}

num=pow(num,num1);

printf("result is : %.6f\n\n",num);
break;



case 7:
factorial = 1;
if(num != floor(num)) {
    printf("error: factorial is only defined for integers\n\n");
    break;
}
if(num > 20) {
    printf("error: factorial result may overflow for numbers greater than 20\n\n");           // fact 20 tak hi jayegaa
    break;
}
if (num < 0) {
printf("factorial is not defined for negative numbers\n\n");
break;
}
for (int k = 1; k <= n; k++)                         // k=2 bhi chalega 
{
factorial = factorial * k;

}
num=factorial;
printf("your result is %lf\n\n",num);
break;


case 8:
num=num*num;
printf("result is : %.6f\n\n",num);
break;





case 9:

num=fabs(num);
printf("result is : %.6f\n\n",num);
break;



case 10:

 {
    if(num <= 0) {                                              // log bhi shyad negative me nhi hota
        printf("error: logarithm of must be positive number\n\n");
        break;
    }
int leg;
    
   printf("(1)natural or\n (10) base 10 or\n (2) base 2 :");
if (scanf("%d", &leg) != 1) { // Check if input is not an integer
    printf("invalid input\n");
    while (getchar() != '\n'); // Clear the input buffer
    break;
}



   switch (leg)
   {
case 10:
num=log10(num);
printf("result is : %.6lf\n\n",num);
break;

case 2:    
num=log2(num);
printf("result is : %.6lf \n\n",num);
break;

case 1:
num=log(num);
printf("result is : %.6lf\n\n",num);

break;

default:
printf("invalid input\n");
break;
   }
break;}


 //clean
case 11:
i=0;
continue;




 
case 12:             ///exit my favourite
    /* code */return 0;
    break;



default :                        // input crzy bastard
printf("invalid input\n");
    break;

}
}
  return 0;
}                             //ramlila ka ant