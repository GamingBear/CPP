#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int sum=0,i=10, n;
    while(i){
    scanf("%d",&n);
    sum+=n;
    i--;
}
printf("ukupno: %d\n",sum);
printf("prosjecno: %f",(float)sum/10);


}
