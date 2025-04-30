#include "exercises.h"
#include <stdio.h>
// -------------------------------
// Functions that return a single value
// -------------------------------

int calcSum(int arr[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {sum = sum + arr[i];}

    return sum;
}

int findMax(int arr[], int n)
{   if(n==0){return 0;}
    int max = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > max)
        {max = arr[i];}

        

    }
    return max;

}

float calcAverage(int arr[], int n)
{   if(n==0){return 0;}
    int  total = 0;
    for(int i = 0; i < n; i++)
    {
        total = total + arr[n];

    }

    int average = total/n;

    return average;
    
}

int countEvens(int arr[], int n)
{
    int evens = 0;
   
    for(int i = 0; i < n; i++)
    {
        if(arr[i] %2 == 0)
        {evens ++;}

        

    }
    return evens;
}

int sumFirstLast(int arr[], int n)
{
    if(n!=0){
    int first_last = arr[0] + arr[n-1];

    return first_last;
    }
    
    else {
  
    return 0; }
}

int findMin(int arr[], int n)
{   if(n==0){return 0;}
    int min = arr[0];

    for(int i = 0; i < n; i++)
    {
        if(arr[i] < min)
        {min = arr[i];}

        

    }
    return min;
}

int subtractArraysSum(int a[], int b[], int n)
{
        int substract = 0;
        int sum = 0;
    for (int i = 0; i < n; i++) {
        substract = a[i] - b[i];
        sum = sum + substract;

    }

    return sum;
}

int mergeArraysSum(int a[], int n1, int b[], int n2)
{ if(n1==0||n2==0){return 0;}
    
    int c[n1 + n2];
    
    for (int i = 0; i < n1; i++) {
        c[i] = a[i];
    }

    for (int i = 0; i < n2; i++) {
        c[n1 + i] = b[i];
    }

    int sum = 0;
    for (int i = 0; i < n1 + n2; i++) {
        sum = sum + c[i];
    }

    return sum;
}

int productArray(int arr[], int n)
{
    if(n==0){return 0;}
    int  product = 1;
    for(int i = 0; i < n; i++)
    {
        product = product * arr[i];

    }

    return product;
}

// -------------------------------
// Function that returns multiple values via pointer
// -------------------------------

void calcSumAverage(int arr[], int n, int *sum, float *average)
{   if(n==0){return 0;}
    *sum = 0;

    for (int i = 0; i < n; i++) {
        *sum += arr[i];
    }

    *average = (float)(*sum) / n;

}
