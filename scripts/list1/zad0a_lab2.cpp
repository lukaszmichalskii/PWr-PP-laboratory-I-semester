#include <stdio.h>
#include <math.h>
int main()
{
	float p,r;
	printf("Enter circle radius r = ");
	scanf("%f",&r);
	p=M_PI*r*r;
	printf("P = %.2f",p);
	
	float a,b,c;
	printf("\n\nEnter A: ");
	scanf("%f",&a);
	printf("Enter B: ");
	scanf("%f",&b);
	c=sqrt(pow(a,2)+pow(b,2));
	printf("C = %.2f",c);
	
	float a1,n,p1,k;
	printf("\n\nEnter a: ");
	scanf("%f",&a1);
	printf("Enter p: ");
	scanf("%f",&p1);
	printf("Enter n: ");
	scanf("%f",&n);
	k=a1*pow(1+(p1/100),n);
	printf("K = %.2f",k);
		
	float V,R,ulamek;
	printf("\n\nEnter circle radius R = ");
	scanf("%f",&R);
	ulamek=4.0/3.0;
	V=ulamek*M_PI*pow(R,3);
	printf("V = %.2f",V);
	
	float c2,a2,b2,x;
	printf("\n\nEnter A: ");
	scanf("%f",&a2);
	printf("Enter B: ");
	scanf("%f",&b2);
	printf("Enter kat x: ");
	scanf("%f",&x);
	c2=sqrt(pow(a2,2)+pow(b2,2)-2*a2*b2*cos(x));
	printf("C = %.2f",c2);
	
	float a4,b4,c4,w;
	printf("\n\nEnter a, b, c: ");
	scanf("%f %f %f",&a4,&b4,&c4);
	w=a4*b4/(b4+c4)+a4*c4/(b4+c4);
	printf("W = %.2f",w);
	
}
