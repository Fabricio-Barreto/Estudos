#include<stdio.h>
int ans;
void merge(int a[] , int left , int mid , int right)
{
    int temp[200000];
    int i=left, j=mid+1 , k=0;

    while((i<=mid)&&(j<=right))
    {
        if(a[i]<=a[j])
            temp[k++]=a[i++];

        else
        {
            ans=ans+mid-i+1;
            temp[k++]=a[j++];
       }
    }

    while(i<=mid)
        temp[k++]=a[i++];

    while(j<=right)
        temp[k++]=a[j++];

    for(i=0;i<k;i++)
        a[left+i]=temp[i];
}

void merge_sort(int a[],int left,int right)
{
    int mid;

    if(left>=right)
        return;

    else
    {
        mid=(left+right)/2;
        merge_sort(a,left,mid);
        merge_sort(a,mid+1,right);
        merge(a,left,mid,right);
    }
}


int main()
{
    int a[200000];
    int t,n,i;
    scanf("%d",&t);
    while(t--)
    {
        ans=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        merge_sort(a,0,n-1);
        printf("%d\n",ans);
    }
    return 0;
}
