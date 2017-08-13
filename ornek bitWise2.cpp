#include <stdio.h>
int main()
{
    int num=212, i;
    for (i=0; i<=2; ++i)
        printf("Right shift by %d: %d\n", i, num>>i);

     printf("\n");
      for (i=0; i<=2; ++i) 
        printf("Left shift by %d: %d\n", i, num<<i);    
    
     return 0;
}
/* Ekran Ciktisi
Right Shift by 0: 212
Right Shift by 1: 106
Right Shift by 2: 53

Left Shift by 0: 212
Left Shift by 1: 424
Left Shift by 2: 848  */ 
