 #include <stdio.h>
 int main() {
 int a, b;
 printf("Enter two numbers: " );
 scanf("%d %d", &a, &b);
 printf("Sum = %d\n", a + b);
 printf("Difference = %d\n", a- b);
 printf("Product = %d\n", a * b);
 printf("Quotient = %.2f\n", (float)a / b);
 return 0;
 }
