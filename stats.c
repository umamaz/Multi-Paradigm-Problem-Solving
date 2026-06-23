#include <stdio.h>


// Sorting function
void sort(int arr[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}



// Mean
double mean(int arr[], int size)
{
    int sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return (double)sum / size;
}



// Median
double median(int arr[], int size)
{
    int copy[100];


    for(int i = 0; i < size; i++)
    {
        copy[i] = arr[i];
    }


    sort(copy, size);


    if(size % 2 == 0)
    {
        return (copy[size/2 - 1] + copy[size/2]) / 2.0;
    }


    return copy[size/2];
}



// Mode(s)
void mode(int arr[], int size)
{
    int maxCount = 0;


    for(int i = 0; i < size; i++)
    {
        int count = 0;


        for(int j = 0; j < size; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }


        if(count > maxCount)
            maxCount = count;
    }



    if(maxCount == 1)
    {
        printf("Mode: No mode\n");
        return;
    }



    printf("Mode(s): ");


    for(int i = 0; i < size; i++)
    {
        int alreadyPrinted = 0;


        for(int j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
                alreadyPrinted = 1;
        }


        if(alreadyPrinted)
            continue;



        int count = 0;


        for(int j = 0; j < size; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }


        if(count == maxCount)
            printf("%d ", arr[i]);

    }

    printf("\n");

}



// Range
int calculateRange(int arr[], int size)
{
    int min = arr[0];
    int max = arr[0];


    for(int i = 1; i < size; i++)
    {
        if(arr[i] < min)
            min = arr[i];

        if(arr[i] > max)
            max = arr[i];
    }


    return max - min;
}



// Square root without math library
double squareRoot(double value)
{
    double guess = value / 2.0;


    for(int i = 0; i < 20; i++)
    {
        guess = (guess + value / guess) / 2.0;
    }


    return guess;
}



// Standard Deviation
double standardDeviation(int arr[], int size)
{
    double avg = mean(arr,size);

    double sum = 0;


    for(int i = 0; i < size; i++)
    {
        sum += (arr[i]-avg)*(arr[i]-avg);
    }


    return squareRoot(sum/size);
}


int main()
{

    int numbers[] = {1,1,2,2,3};

    int size = sizeof(numbers)/sizeof(numbers[0]);


    printf("Numbers: ");

    for(int i = 0; i < size; i++)
        printf("%d ", numbers[i]);

    printf("\n\n");


    printf("Mean: %.2f\n", mean(numbers,size));

    printf("Median: %.2f\n", median(numbers,size));

    mode(numbers,size);

    printf("Range: %d\n", calculateRange(numbers,size));

    printf("Standard Deviation: %.2f\n",
           standardDeviation(numbers,size));


    return 0;
}
