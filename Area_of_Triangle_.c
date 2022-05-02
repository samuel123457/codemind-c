#include<stdio.h>
#include<math.h>

int main()
{
  float a, b, c, Perimeter, s, Area;
  
 // printf("
Please Enter three sides of triangle
");
  scanf("%f%f%f",&a,&b,&c);
   
  Perimeter = a+b+c;
  s = (a+b+c)/2;
  Area = sqrt(s*(s-a)*(s-b)*(s-c));
   
 // printf("%.2f
", Perimeter);
//  printf("
 Semi Perimeter of Traiangle = %.2f
",s);
 printf("%.2f
",Area);

  return 0;
}