#include <cs50.h>
#include <stdio.h>

#define MAX 65536
void sort(int values[], int n);

int main(void)
{
    int n = get_int("Number of elements: ");
    if (n < 1 || n > MAX)
    {
        return 1;
    }

    int values[n];
    for (int i = 0; i < n; i++)
    {
        values[i] = get_int("element %i: ", i);
    }

    sort(values, n);

    print_array(values, n);
}


void sort(int values[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (values[j] > values[j + 1])
            {
                int temp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = temp;
            }

