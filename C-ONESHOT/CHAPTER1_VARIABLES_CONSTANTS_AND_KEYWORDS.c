/*
C COMPLETE ONESHOT CWH
PROGRAMMING MADHYAM COMPUTER SE BAAT KARNEKA

*/
/*
CHAPTER 1-VARIABLES,CONSTANTS AND KEYWORDS
*/
/*TYPES OF VARIABLE IN C  */
/*
#include<stdio.h>
int main(){
    int a = 4;
    //int b = 8.5; NOT RECOMMENDED BECAUSE 8.5 IS NOT AN INTEGER
    float b = 8.5;
    char c = 'u';
    int d = 45;
    int e = 45 + 4;
     printf("The value of a is %d \n",a); //INTEGER %d
    printf("The value of a is %f \n",b);  //FLOAT %f
     printf("The value of a is %c \n",c);  //CHARACTER %c
      printf("The value of a is %d \n",d);
       printf("The value of a is %d \n",e);
        printf("The sum of value of a and d is %d \n",a+d);
         printf("The sub of value of a and d is %d \n",a-d);
          printf("The product of value of a and d is %d \n",a*d);
           printf("The division of value of a and d is %d \n",a/d);  //GRETEST INTEGER

return 0;
}
*/
/*INPUT IN C */
/*Q.1.ADDITION OF TWO NUMBERS TAKE INPUT FROM THE USER*/
/*
#include<stdio.h>
int main()
{

    int a,b;
    printf("enter the value of a\n");
    scanf("%d",&a);
    printf("enter the value of b\n");
    scanf("%d",&b);
    printf("the sum of a and b is %d",a +b);
    return 0;
}
*/
/*Chapter 1: Practice Set:*/
/*
Q1. Write a c program to calculate the area of a rectangle:

a) using hardcoded inputs &

b) using inputs supplied by the user
*/
/*
#include<stdio.h>
int main(){
int length=3,breadth=8;
int area=length*breadth;
printf("the area of this rectangle is %d",area);
return 0;
}
*/
/*
#include<stdio.h>
int main(){
int length,breadth;
printf("what is the length of the rectangle \n");
scanf("%d",&length);
printf("what is the breadth of the rectangle\n");
scanf("%d",&breadth);
printf("the area of your rectangle is %d",length*breadth);
return 0;
}
*/


/*
Q2. Calculate the area of a circle and modify the
 same program to calculate the volume of a cylinder given
 its radius and height.
 */
 /*
#include<stdio.h>
int main(){
int radius = 3;
float pi = 3.14;
printf("the area of this circle is %f",pi*radius*radius);
return 0;
}
*/
/*
#include<stdio.h>
int main(){
int radius = 3;
float pi = 3.14;
int height = 3;
printf("the volume of this cylinder is %f\n",pi * radius * radius * height);
return 0;
}
*/

 /*
 Q3. Write a program to convert Celsius
  (Centigrade degrees temperature to Fahrenheit)
 */
 /*
#include<stdio.h>
int main(){
float celsius = 37,far;
far = (celsius * 9/5) +32;
printf("the value for this celsius temperature in fahrenheit is %f",far);
return 0;
}
*/
 /*
 Q4. Write a program to calculate simple interest
 for a set of values representing principle, no of years,
    and rate of interest.
*/
/*
#include<stdio.h>
int main(){
int principal=100,rate=4,years=1;
int simpleInterest =(principal * rate * years)/100;
printf("the value of simple Interest is %d",simpleInterest);
return 0;
}
*/
