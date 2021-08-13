// find largest number in n elements using pointers
#include<stdio.h>
void main()
{
    int i, n, arr[20], large = -32768, pos = 0;
    int *pn = &n, *parr = arr, *plarge = &large, *ppos = &pos;
    printf("\n Enter the number of elements in array: ");
    scanf("%d",pn);
    for(i=0;i<*pn;i++)
    {
        printf("\n Enter the number: ");
        scanf("%d",parr + i);
    }

    for(i=0;i<*pn;i++)
    {
        if(*(parr + i) > *plarge)
        {
            *plarge = *(parr + i);
            *ppos = i;
        }
    }
    printf("\n The numbers you entered are: ");
    for(i=0;i<*pn;i++)
        printf("%d",*(parr + i));
    printf("\n the largest of these numbers is: %d",*plarge);
    printf("\n the position of the largest number in the array is: %d",*ppos);
}
