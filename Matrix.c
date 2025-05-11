#include <stdio.h> 

int main() { int row; int collumn; 

printf("Enter size of matrix: \n\nRows: "); scanf("%d", &row); 
printf("Collumns: "); scanf("%d", &collumn); 
printf("%d x %d Matrix\n\n", row, collumn); 
 
//Testing using rows and collumns 
int list[row][collumn]; 
 
for (int i=0; i<=(row-1); i++) { 
    for (int j=0; j<=(collumn-1); j++) { 
        printf("(%d, %d): ", i, j); 
        scanf("%d", &list[i][j]); 
    } 
} 
 
printf("\n"); 
 
for (int i=0; i<=(row-1); i++) { 
    for (int j=0; j<=(collumn-1); j++) { 
        printf("(%d) ", list[i][j]); 
    } 
    printf("\n"); 
} 
 
printf("Inverse\n"); 
if (row=2) { 
    if (collumn=2) { 
        int A[2][2]; 
        int a=list[0][0]; int b=list[0][1]; 
        int c=list[1][0]; int d=list[1][1]; 
        printf("%d\n%d\n%d\n%d\n", a, b, c, d); 
        float part=(1.0)/((a*d)-(b*c)); //change to 1.0 to ensure float calculations 
        printf("\nMag: %f", part); 
    } 
} 
return 0; 
  

} 

//stbool and statement 
