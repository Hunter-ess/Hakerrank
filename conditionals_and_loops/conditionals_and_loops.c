#include <stdio.h>
#include <stdlib.h>

int main() { 
    int i, j, t, n, k;
  
 
    scanf("%d", &n);
    k = n * 2 - 1;
 
    int** tab = malloc (sizeof(int*) * k);
  
    for(i=0;i<k;i++){
       tab[i]=malloc (sizeof(int*) * k);
    }
   
    for  (t = 0; t < n; t++){
        for (j = t; j < k - t; j++) {
            for (i = t; i < k - t; i++) {
                tab[i][j] = n - t;
            }    
        } 
    }

    for (j = 0; j < k; j++) {
        for (i = 0; i < k; i++) {
            printf("%d ", tab[i][j]);
        }
         printf("\n");
    }
            
    return 0;
}
