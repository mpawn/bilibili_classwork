#include <stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9}；
//下标         0 1 2 3 4 5 6 7 8
    int sz=sizeof(arr)/sizeof(arr[0]);//计算数组大小
    int left=0;//左下标
    int right=sz-1;//右下标
    int mid;
    int k;//要找的数字

    printf("请输入你想查找的数字：>");
    scanf("%d",&k);

    while(left<=right)
    {
        mid=(left+right)/2;//计算中间下标
        if(arr[mid]>k)
        {
            right--;
        }
        else if(arr[mid]<k)
        {
            left++;
        }
        else if(arr[mid]==k)
        {
            printf("找到了，%d的下标为%d",k,mid);
            break;
        }
    }
    if(left>right)
    {
        printf("没找到")
    }
    return 0;
}
