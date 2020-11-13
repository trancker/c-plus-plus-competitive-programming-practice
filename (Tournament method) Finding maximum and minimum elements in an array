#include<iostream>

using namespace std;

struct Check
{
  int max;
  int min;
};

struct Check findminmax(int ar[], int low, int high)
{
  int mid;
  struct Check minmax, mnl, mnr;
  //now check if low is same as high
  if(low == high)
  {
    minmax.max = ar[low];
    minmax.min = ar[low];
    return minmax; 
  }
  // for more than one and equal to 0+1
  if(high == low+1)
  {
    if(ar[low] > ar[high])
    {
      minmax.max = ar[low];
      minmax.min = ar[high];
    }
    else{
      minmax.max = ar[high];
      minmax.min = ar[low];
    }
    return minmax;
  }
  mid = (low + high)/2;
  mnl = findminmax(ar, low, mid);
  mnr = findminmax(ar, mid+1, high);
  if(mnl.min < mnr.min)
    minmax.min = mnl.min;
  else
    minmax.max = mnr.min;

  if(mnl.max > mnr.max)
    minmax.max = mnl.max;
  else
    minmax.max = mnr.max;
  return minmax;
}

void printarray(int ar[], int n)
{
  cout<<"The entered value is\n";
  for(int i =0; i < n; i++){
    cout<<ar[i]<<" ";
  }
  
}

int counting(int ar[], int n)
{
  int count = 0;
  for(int i =0; i<n; i++)
  {
    count++;
  }
  return count;
}

int main()
{
  int ar[] = {500, 5, 2, 10, 70, 800};
  int size = sizeof(ar)/ sizeof(ar[0]);
  struct Check minmax = findminmax(ar, 0, size-1);
  printarray(ar, size);
  cout<<endl;
  
  cout<<"Minimum value is: "<<minmax.min<<endl;
  cout<<"Maximum value is: "<<minmax.max<<endl;
  int size1 = counting(ar, size);
  cout<<"The counted value is "<<size1<<endl;
  return 0;
}
