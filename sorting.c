#include <stdio.h>

#define MAX_SIZE 100

/* Function declaration */
void inputArray(int * arr, int size);
void printArray(int * arr, int size);

/* Sort function declaration */
int sortAscending(int * num1, int * num2);

void sort(int * arr, int size, int (* compare)(int *, int *));



int main()
{
    int arr[MAX_SIZE];
    int size;

    /*
     * Input array size and elements.
     */
    printf("Enter array size: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    inputArray(arr, size);


    printf("\n\nElements before sorting: ");
    printArray(arr, size);


    // Sort and print sorted array in ascending order.
    printf("\n\nArray in ascending order: ");
    sort(arr, size, sortAscending);
    printArray(arr, size);




    return 0;
}


void inputArray(int * arr, int size)
{
    // Pointer to last element of array
    int * arrEnd = (arr + size - 1);


    // (arr++) Input in current array element and move to next element.
    // Till last array element (arr <= arrEnd)
    while(arr <= arrEnd)
        scanf("%d", arr++);
}
void printArray(int * arr, int size)
{
    // Pointer to last element of array
    int * arrEnd = (arr + size - 1);


    while(arr <= arrEnd)
        printf("%d, ", *(arr++));
}
int sortAscending(int * num1, int * num2)
{
    return (*num1) - (*num2);
}
void sort(int * arr, int size, int (* compare)(int *, int *))
{
    // Pointer to last array element
    int * arrEnd  = (arr + size - 1);

    // Pointer to current array element
    int * curElem = arr;
    int * elemToSort;


    // Iterate over each array element
    while(curElem <= arrEnd)
    {
        elemToSort = curElem;
       while(elemToSort <= arrEnd)
        {
            if(compare(curElem, elemToSort) > 0)
            {
                *curElem    ^= *elemToSort;
                *elemToSort ^= *curElem;
                *curElem    ^= *elemToSort;
            }

            elemToSort++;
        }


        curElem++;
    }
}
