#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int len,n;
   while(scanf("%d", &n)!= EOF){
        len = n*2 - 1;
         for(int i=0;i<n;i++){
        for(int j=0;j<len;j++){
            int min = i < j ? i : j;
            min = min < len-i ? min : len-i-2;
            min = min < len-j-1 ? min : len-j-1;
            printf("%d ", n-min);
        }
        printf("\n");
    }
 for (int i=0; i<n*2-1;i++)
       {
           printf("%d ",n);
            
       }
       printf("\n");
    }
    
    
    return 0;
}