#include <stdio.h>
void add(int a, int b)
{
    printf("Addition is %d\n", a+b);
}
void subtract(int a, int b)
{
    printf("Subtraction is %d\n", a-b);
}


int main()
{
    // fp_arr is an array of function pointers
    void (*fp_arr[])(int, int) = {add, subtract};
    unsigned int ch, a = 15, b = 10;

    printf("Enter Choice: 0 for add and 1 for subtract\n");
    scanf("%d", &ch);

    if (ch > 1)
    return 0;

    (*fp_arr[ch])(a, b);

    return 0;
}
