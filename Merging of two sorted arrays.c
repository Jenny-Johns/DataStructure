#include<stdio.h>
int main()
{

    int n,a[10],b[10],c[20],i,j,k,p,n1,s,t,temp,temp1;

    printf("\nEnter the size of the first array:\n");
    scanf("%d",&n);
    printf("\nEnter the elements for first array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nElements in the first array: ");

        for(i=0;i<n;i++)
        {
            printf("\t%d",a[i]);
        }
         printf("\nEnter the size of the second array:\n ");
    scanf("\t%d",&n1);
    printf("\nEnter the elements for second array :\n");
    for(j=0;j<n1;j++)
    {
        scanf("%d",&b[j]);
    }
    printf("\nElements in the second array: ");

        for(j=0;j<n1;j++)
        {
            printf("\t%d",b[j]);
        }
        for(i=0;i<n;i++)
        {
        for(s=i+1;s<n;s++)
        {
            if(a[i]>a[s])
            {
                temp=a[i];
                a[i]=a[s];
                a[s]=temp;
            }
        }
        }
        printf("\n\nSorted form of first array:");
        for(i=0;i<n;i++)
        {
      printf("\t%d",a[i]);
        }

        for(j=0;j<n1;j++)
        {
        for(t=j+1;t<n1;t++)
        {
            if(b[j]>b[t])
            {
                temp1=b[j];
                b[j]=b[t];
                b[t]=temp1;
            }
        }
        }
        printf("\nSorted form of second array:");
        for(j=0;j<n1;j++)
        {
      printf("\t%d",b[j]);
        }
        p=n+n1;
        for(i=0;i<n;i++)
        {
           c[k]=a[i];
            k++;
        }
        for(j=0;j<n1;j++)
        {
            c[k]=b[j];
            k++;
        }
        for(j=0;j<p;j++)
        {
        for(t=j+1;t<p;t++)
        {
            if(c[j]>c[t])
            {
                temp1=c[j];
                c[j]=c[t];
                c[t]=temp1;
            }
        }
        }
        printf("\nSorted form of merged array:");
        for(k=0;k<p;k++)
        {
            printf("\t%d",c[k]);
        }
return 0;
}
