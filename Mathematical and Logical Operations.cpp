#include <stdio.h>
int main()
{
  int x,y,z; //integer values
  float f,g,h; //floating point (real number) values
  bool a,b,c; // boolean (logical) values
  
  x = 17;
  y= 6;
  
  f = 17.5;
  h = 6.7;
  
  a = 0;
  b = 1;
  
  // Integer operations
  
    printf(" x=%d\n y=%d\n\n",x,y);
  z=x+y;
  	printf("Integer Addition z=%d\n",z);
  z=x-y;
   	printf("Integer Multiplication z=%d\n",z);
  z=x/y;
  	printf("Integer  Division z=%d\n",z);
  z=x%y;
   	printf("Integer Reminder/ Modulo z=%d\n\n",z);
   	
  // Floating point (real number) operations
  
    printf(" f=%.2f\n h=%.2f\n\n",f,h);
  
   g=f+h;
     printf("floating point (real number)  addition g=%.2f\n",g);
   g=f*h;
     printf("floating point (real number) multiplication g=%.2f\n",g);
   g=f/h;
     printf("floating point (real number)  division g=%.2f\n\n",g);
    
  // logical operations
  
      printf(" a=%d\n b=%d\n\n",a,b);
      
      c=a&&b;
        printf("logical AND c=%d\n",c);
      c=a||b;
       printf("logical OR c=%d\n",c);
      c=!a;
        printf("logical NOT of a c=%d\n",c);
      c=!b;
        printf("logical NOT of b c=%d\n",c);
      c=a^b;
        printf("logical XOR c=%d\n\n",c);
    
}