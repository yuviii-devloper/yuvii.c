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
printf("1. +\n2. -\n3. x\n4. /\n5. percentage(%)\n6.squareroot\n7.power\n8.(!)factorial\n9.square\n10.absolute value\n11.log\n12.drgree to radian \n13.radian to degree\n14.trignometry \n15.exp(x)\n16.*pie \n17.reciprocal/x\n18.inverse trignometry\n19.clean\n20.exit\n\n  :");

printf("\n");
if (scanf("%d", &opt) != 1) { // Check if input is not an integer
    printf("invalid input\n");
    while (getchar() != '\n'); // Clear the input buffer
    continue;
}


if(opt>20 || opt<1){
    printf("invalid input\n");
    continue;
}
double num1;

if (opt==1||opt==2||opt==3||opt==4||opt==7||opt==5)                     // yeh sirf 1 number wale hai dusri input ki jaruart nhi hain
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


case 5:
num = (num/num1)*100;
printf("result is : %.6lf PERCENT",num);
break;

case 6:                                   // negitive ka internet par tooh nhi aa rha hain
if(num<0){
    printf("error: square root of negative number\n\n");
    break;
}
num=sqrt(num);
printf("result is : %.6lf\n\n",num);
break;


case 7:
if (num<0 && num1 != (int)num1) { // Check for negative base with non-integer exponent
    printf("error: negative base with non-integer exponent\n\n");
    break;
}

num=pow(num,num1);

printf("result is : %.6f\n\n",num);
break;



case 8:
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


case 9:
num=num*num;
printf("result is : %lf\n\n",num);
break;





case 10:

num=fabs(num);
printf("result is : %.6f\n\n",num);
break;



case 11:

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


case 12:{

num=num*(3.14159265358979323846/180); 
printf("result is : %lf\n\n",num);
break;}

case 13:{

num=num*(180/3.14159265358979323846);
printf("result is : %lf\n\n",num);  
break;}


case 14:
{

num=num*(3.14159265358979323846/180);
               // degree ko radian me convert  karna padega
printf("choose your trignometry operator :\n");
printf("1.sin\n2.cos\n3.tan\n4.cosec\n5.sec\n6.cot\n:");
int trig;
scanf("%d",&trig);


if(trig>6 || trig<1){
    printf("invalid input\n");
    break;}


if (trig==1)
{num=sin(num);
    printf("result is : %.6lf\n\n",num);
    break;}



else if (trig==2)   
{num=cos(num);
    printf("result is : %.6lf\n\n",num);
break;}



else if (trig==3)  
{
    num=tan(num);
    
    printf("result is : %.6lf\n\n",num);
break;}





else if(trig ==4){
    
if (fabs(sin(num)) <1e-10){
    printf("error , cosec is undefined");
    break;
}
    num = 1/sin(num);
    printf("result is : %.6lf\n\n",num);
break;}




else if (trig==5)
{if(fabs(cos(num)) <1e-10){
    printf("error , sec is undefined");
    break;
}num =1/cos(num);
    printf("result is : %.6lf\n\n",num);
break;}




else if (trig==6)
{if (fabs(tan(num)) <1e-10){
    printf("error , cot is undefined");
    break;
}
    num=1/tan(num);
    printf("result is : %.6lf\n\n",num);
    break;}    
break;}





case 15:
num=exp(num);
printf("result is : %.6lf\n\n",num);    
break;



case 16:
num=num*3.14159265358979323846;
printf("result is : %.6lf\n\n",num);    
break;



case 17:
if(num==0){
    printf("error: division by zero\n\n");
    break;}
num=1/num;
printf("result is : %.6lf\n\n",num);
break;



case 18:


                // degree ko radian me convert  karna padega
printf("choose your trignometry operator :\n");
printf("NOTE VALUE MUST BE BETWEEN -1 TO 1\n");

printf("1.asin\n2.acos\n3.atan\n4.acosec\n5.asec\n6.acot\n:");
int trg;
scanf("%d",&trg);




if(trg>6 || trg<1){
    printf("invalid input\n");
    break;}


if (trg==1)                     // asin pahle se hi radian me answer deta hai isliye 180/pie 
{if (num<-1||num>1)
{
printf("error: value must be between -1 to 1\n\n");
continue;
}
num=asin(num)*(180/3.14159265358979323846); 
    printf("result is : %.6lf\n\n",num);}



else if (trg==2)   
{if (num<-1||num>1)
{
printf("error: value must be between -1 to 1\n\n");
continue;
}num=acos(num)*(180/3.14159265358979323846); 
    printf("result is : %.6lf\n\n",num);}




else if (trg==3)  
{num=atan(num)*(180/3.14159265358979323846); 
    printf("result is : %.6lf\n\n",num);}




else if (trg==4)
{if (num==0)
{
    printf("error , must be non zero");
    continue;
}
float d= 1/num;
if (d<-1 ||d>1)
{d=0;
  continue;
}

num=asin(d)*(180/3.14159265358979323846); 
    printf("result is : %.6lf\n\n",num);}




else if (trg==5)
{if (num==0)
{
    printf("error , must be non zero");
    continue;
}
float d= 1/num;
if (d<-1 ||d>1)
{d=0;
  continue;
}
num=acos(d)*(180/3.14159265358979323846); 
    printf("result is : %.6lf\n\n",num);}





else if (trg==6)
{if (num==0)
{
    printf("error , must be non zero");
    continue;
}

    num=atan(1/num)*(180/3.14159265358979323846); 
    printf("result is : %.6lf\n\n",num);}    

break;



 //clean
case 19:
i=0;
num=0;
printf("CALCULATOR RESET");
continue;





case 20:             ///exit my favourite
    /* code */return 0;
    break;



default :                        // input crzy bastard
printf("invalid input\n");
    break;

}

printf("\n");
printf("\n");
}
  return 0;
}                             //ramlila ka ant