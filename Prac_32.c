#include <stdio.h> 
#include <stdlib,h>
#include <unistd.h> 
#include <getopt.h> 
#include <string.h> 
 
int main(int argc,char** argv){ 
  

char* new_name;
    int opts; 
    while( (opts = getopt(argc, argv,"ho:c" )) != -1) { 
        switch (opts){ 
            case 'h':{ 
               printf("print -h to see menu\n"); 
               printf("print -o for out_file_name\n"); 
               printf("print -c to chose special mode\n"); 
            } 
            case 'o':{ 
               new_name=optarg; 
                printf("you want to change out_file_name to %s\n", new_name); 
                break; 
            } 
            case 'c': {  
                printf("you chose special mode\n"); 
                break;
 
            default:{ 
               printf("?");
            } }
        } 
    } 
       return 0; 
}
