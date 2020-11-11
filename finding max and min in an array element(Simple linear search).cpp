#include<iostream>
using namespace std;

struct Pair
{
  int max; 
  int min;
};

struct Pair getminmax(int ar[], int n)
{
  struct Pair minmax;
  //if number of t elements in an array is one
  if (n ==1)
  {
    minmax.max = ar[0];
    minmax.min = ar[0];
    return minmax;
  }
  //if number of elements is one or two in an elements in an array
  if(ar[0] > ar[1])
  {
    minmax.max = ar[0];
    minmax.min = ar[1];
  }
  else{
    minmax.max = ar[1];
    minmax.min = ar[0];
  }
  //if the array elements is more than two
  for(int i = 2; i<n; i++)
  {
    if(ar[i] > minmax.max)
    {
      minmax.max = ar[i];
    }
    else if(ar[i] < minmax.min)
    {
      minmax.min = ar[i];
    }
  }
  return minmax;
}
//this is driver code

int main()
{
  int ar[] ={100, 2000, 1, 5, 4, 300};
  int n = sizeof(ar)/ sizeof(0);
  struct Pair minmax = getminmax(ar, n);

  cout<<"Maximum value is:"<<minmax.max<<"\n";
  cout<<"Minimum value is:"<<minmax.min<<"\n";
  return 0;

}
