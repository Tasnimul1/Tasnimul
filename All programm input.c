#include<stdio.h>
#include<math.h>
int main()
{
//A programm to determine grade:
int m;
printf("Enter the number: ");
scanf("%d",&m);


if(80<=m&&m<=100)
 {
  printf("You got A+");
 }
else if(70<=m&&m<=79)
{
 printf("You got A");
}
else if(60<=m&&m<=69)
{
 printf("B+");

}

else if(50<=m&&m<=59)
{
printf("You got B");
}

else if(40<=m&&m<=49)

{
printf("You got C+");

}
else if(0<=m&&m<=39)
{
printf("You are falied");
}
else
{
printf("invaild input");
}



//A programm to calculate power:
int base,power,result;
printf("Enter the value of base:  ");
scanf("%d",&base);
printf("Enter the value of power: ");
scanf("%d",&power);

result=pow(base,power);
printf("The result is %.2d.\n",result);


//A programm to calculate price:
float fish,beef,rice,total,Gamount,Ramount;
printf("Enter the price of fish: ");
scanf("%f",&fish);
printf("Enter the price of beef: ");
scanf("%f",&beef);
printf("Enter the price of rice: ");
scanf("%f",&rice);

total=fish+beef+rice;
printf("Your total price is %.2f.\n",total);
printf("Enter the Gamount: ");
scanf("%f",&Gamount);

Ramount=Gamount-total;
printf("Your return amount is %.2f.\n",Ramount);


//A programm to calculate area of tringle:
int base,height,area;
printf("Enter the value of base:   ");
scanf("%d",&base);
printf("Enter the value of height: ");
scanf("%d",&height);

area=0.5*base*height;
printf("The value is %d\n",area);


//A programm to make it:

int m,v,t,p,total;
printf("Enter the value m: ");
scanf("%d",&m);
printf("Enter the value v: ");
scanf("%d",&v);
printf("Enter the value t: ");
scanf("%d",&t);
printf("Enter the value p: ");
scanf("%d",&p);

total=m+v+t+p;
printf("The value is %d\n",total);


//A programm to add two numbers:
int a,b,sum;
printf("Enter the value of a: ");
scanf("%d",&a);
printf("Enter the value of b: ");
scanf("%d",&b);

sum=a+b;
printf("The value is %.2d.\n",sum);


//A programm to calculate power:
int base,power,result;
printf("Enter the value of base: ");
scanf("%d",&base);
printf("Enter the value of power: ");
scanf("%d",&power);
result=pow(base,power);
printf("The result is %d",result);


//A programm to calculate quotient&remainder:
int quotient,remainder,divisor,dividend;
printf("Enter the value of dividend: ");
scanf("%d",&dividend);
printf("Enter the value of divisor: ");
scanf("%d",&divisor);

quotient=dividend/divisor;
remainder=dividend%divisor;
printf("The quotient is :  %.2d.\n",quotient);
printf("The remiander is: %.2d.\n",remainder);


//A programm to determine odd and even:
int c;
printf("Enter a number: ");
scanf("%d",&c);

if(c%2==1)
{
printf("%d is Odd number.",c);
}
else
{
printf("%d is even number.",c);
}




return 0;

}

