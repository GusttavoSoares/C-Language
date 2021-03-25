/* Read three values ​​for the sides of a triangle, considering sides such as: A, B and C. Check if the sides provided really form a triangle, and if this condition is true, indicate which type of triangle is formed: isosceles, scalene or equilateral . Triangle is a geometric shape (polygon) composed of 3 sides, where each side is less than the sum of the two other sides. BASIC RULE: It will be a triangle when A <B + C, when B <A + C and when C <A + B. A triangle is isosceles when it has 2 equal sides and a different one, being A == B or A == C or B == C; it is scalene when it has all different sides, with A <> B and B <> C and it is equilateral when it has all the same sides, with A == B and B == C. */

#include <stdio.h>

int main (){
	
	float a,b,c,sa,sb,sc;
	
	printf ("Enter the value of a, b, c respectively\n");
	scanf  ("%f%f%f", &a, &b, &c);
	
	sa = a+b;
	sb = a+c;
	sc = b+c;

	if ((a<sc) && (b<sb) && (c<sa))
	{
		if (((a==b) && (a!=c)) || ((a==c) && (a!=b))|| ((b==c) && (b!=a))){
		printf ("Isosceles triangle");
	}
	
		
		else if ((a!=b) && (b!=c) && (c!=a)){
		
		printf ("Scalene triangle");
}
		
		else if ((a==b) && (b==c)) {
		printf ("Equilateral triangle");
	}
	}else{
	
		printf ("It is not a triangle");
}
	return 0;
}
