Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>

int main() {
    int rad=
    printf("Enter the Radius %d",rad);
    scanf("%d",&rad);
    
    int area=(3.14*(rad*rad));
    int cir=(2*3.14*rad);
    
    printf("The Area is %d",area);
    printf("The Circumference is %d",cir);

    return 0;
}
