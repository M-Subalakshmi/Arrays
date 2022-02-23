input: 7
-2 -3 4 -1 -2 1 5 -3

output: 7

#include <stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int res=INT_MIN,it=0;
    for(int i=0;i<n;i++){
        it+=a[i];
        if(it<a[i]) it=a[i];
        if(it>res) res=it;
    }
    printf("%d ",res);
    return 0;
}
