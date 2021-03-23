#include <stdio.h>

signed char a;
char b; // 1 BYTE = 8 bits 2⁸ 256
// -127 to 127... signed
// 0 to 255 - unsigned // only positive 
unsigned char c;


int main (){
a = 'A';
b = 'A';
c = 'A';
	
printf ("A signed char: %c\n", a);
printf ("A signed char: %i\n", a); // ASCII

a = -30;
printf ("A signed char -30: %c\n", a);
printf ("A signed char -30: %i\n", a); // ASCII


printf ("B char: %c\n", b);
printf ("B char: %i\n", b); // ASCII

b = -30;
printf ("B char -30: %c\n", b);
printf ("B char -30: %i\n", b);


printf ("C unsigned char: %c\n", c);
printf ("C unsigned char: %i\n", c); 

c = -30;

printf ("C unsigned char -30: %c\n", c);
printf ("C unsigned char -30: %i\n", c);


/*
 * signed char it's the same as char
 * unsigned char shows only positive numbers (0 -255)
 * signed show both, negative and positive numbers (-127 - 127)
 */

return 0;
}
