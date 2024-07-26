#include <stdio.h>
void arraytraversal(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\n");

}

void bubblesort(int arr[],int size)
{
    int temp;
    int issorted=0;
    for (int i=0;i<size-1;i++)  //for number of passes
    {
        printf("working on pass number %d\n",i+1);
        issorted=1;
        for(int j=0;j<size-i-1;j++)  //for number of comparisons
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                issorted=0;
            }
        }
        if(issorted)
        {
            break;
        }
    }
}
int main()
{
    int arr[]={1,2,3,4};
    int size=4;
    arraytraversal(arr,size);
    bubblesort(arr,size);
    printf("array after sorting\n");
    arraytraversal(arr,size);
}