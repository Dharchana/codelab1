#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
        int arr[50],arr1[50],i,n,mult=0,sum=0;
        float wm;
        scanf("%d\n",&n);
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        for(i=0;i<n;i++)
            scanf("%d",&arr1[i]);
        for(i=0;i<n;i++)
            sum = sum + arr1[i];
        for(i=0;i<n;i++)
            mult = mult + (arr[i] * arr1[i]);
        wm = (float) mult/sum;
        printf("%.1f",wm);
    return 0;
}
