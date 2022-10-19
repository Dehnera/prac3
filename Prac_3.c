#include <stdlib.h> 
#include <math.h> 
#include <stdio.h> 
#include <string.h> 
 
void equation(int a, int b, int c){ 
    double d, ans, ans2; 
    d = (b * b) - (4 * a * c); 
    if (d < 0)  
    printf("(the discriminant is less than 0, equation has no solution!\n"); 
    if (d == 0) { 
        ans=(double)((double)-b / (2 * a)); 
    printf("(the discriminant is equal to 0, equation has 1 solution! x = %.>
         
    } 
    if (d > 0){ 
        ans=(double)((-b + (sqrt(d)))/(2 * a)); 
        ans2=(double)((-b - (sqrt(d)))/(2 * a)); 
    printf("(the discriminant is more than 0, equation has 2 solutions! x1 =>
} 
     
} 
