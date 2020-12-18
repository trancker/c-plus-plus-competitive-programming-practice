#Finding maximum and minimum element in an array
# method 3: Compare in Paris


#include <iostream>

using namespace std;

struct Check
{
    int max;
    int min;
};

struct Check findmaxmin(int ar[], int n)
{

    struct Check minmax;
    int i;
    //if number is odd then check and print the number whether it is maximum or minimum
    if(n%2 == 0)
    {

        if(ar[0] > ar[1])
        {
            minmax.max = ar[0];
            minmax.min = ar[1];
        }
        else
        {
            minmax.max = ar[1];
            minmax.min = ar[0];
        }
        i = 2;
    }
    else{
        minmax.min = ar[0];
        minmax.max = ar[0];
        i = 1;
    }
    while(i < n-1)
    {
        if(ar[i] > ar[i+1])
        {
            if(ar[i] > minmax.max)
                minmax.max = ar[i];
            if(ar[i+1] < minmax.min)
                minmax.min = ar[i+1];
        }
        else
        {
            if(ar[i+1] > minmax.max)
                minmax.max = ar[i+1];
            if(ar[i] < minmax.min)
                minmax.min = ar[i];
        }
        i+=2;
    }
    return minmax;
};

int main()
{
    int ar[] = {500, 5000, 20, 30, 54};
    int size = 5;
    Check minmax = findmaxmin(ar, size-1);

    //The output of the following maximum and minimum
    cout<<"Maximum value is: "<<minmax.max;
    cout<<"\n"<<"Minimum value is: "<<minmax.min;

    return 0;
}
