```c
#include <stdio.h>
int main()
{
    int n,sum=1,i;
    printf("计算n的阶乘");
    scanf("%d",&n);
    for(i=1;i<n+1;i++)
    {
        sum=sum*i;
    }
    printf("n的阶乘是%d",sum);
    return 0;
}
```

