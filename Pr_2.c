#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>  
 
int credit = 5000;  
int cost = 500;  
 
void play(int trip[]) 
{ 
int check;
 check = trip[0]; 
   
  switch(trip[0]){ 
   
   case 0: 
    if (trip[1]==0) 
     if (trip[2]==0) 
     { 
      credit=credit+ 1000; 
     } 
    printf("Your win 1000 \n"); 
   break; 
    
   case 1: 
    if (trip[1]==1) 
     if (trip[2]==1) 
    { 
      credit=credit+ 1000; 
     } 
    printf("Your win 1000 \n"); 

   break; 
    
   case 2: 
    if (trip[1]==2) 
     if (trip[2]==2) 
    { 
      credit=credit+ 1000; 
     } 
    printf("Your win 1000 \n"); 
 
   break;

case 3: 
    if (trip[1]==3) 
     if (trip[2]==3) 
     { 
       credit=credit+ 1000; 
     }   
    printf("Your win 1000 \n"); 
 
   break; 
    
   case 4: 
    if (trip[1]==4) 
     if (trip[2]==4) 
     { 
         credit=credit+ 1000; 
     }   
    printf("Your win 1000 \n"); 

 
   break; 
    
   case 5: 
     credit=credit+1000;
    if (trip[1]==5) 
     credit=credit+1000; 
     if (trip[2]==5) 
     { 
      credit=credit+10000; 
     }  
    printf("Your win 1000 \n"); 
 
   break; 
    
   case 6: 
    if (trip[1]==6) 
     if (trip[2]==6) 
     { 
      credit = credit - 2000; 
      printf("You lost 2000 \n"); 
     } 
     
   break; 
  
   case 7: 
    credit = credit+ 500; 
    if (trip[1]==7) 
    credit=credit+ 500; 
     if (trip[2]==7) 
     { 
credit =10000000;
exit(0);
      printf("You win!%d Game over\n ", credit); 
      
     } 
 
   break; 
    
   default: 
    exit(1); 
  } 
  
}

void triple_out(int a[]){ 
 printf("Combination:"); 
 for (int i=0;i<=sizeof(a)/sizeof(int);i++) 
 {   
  printf(" %d ",a[i]); 
  }  
 
} 

int main() 
{ 
 int arr[2]; 
 srand(time(NULL)); 
 while(credit>0) 
 { 
  printf("Your Balance: %d \n", credit); 
     
  printf("Game cost 500 "); 
  credit = credit -500; 
  if (credit<0) 
  { 
  printf("\n\nYou have run out of balance!\n"); 
   exit(0); 
  } 
   

  for (int i=0; i<=sizeof(arr)/sizeof(int); i++) 
  { 
   arr[i] = rand() %7; 
  } 
  triple_out(arr); 
  triple_out(arr);  
 } 
  
 return 0; 
}
