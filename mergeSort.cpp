#include<iostream>
using namespace std;
void MergeSort(int *a, int *b, int low, int high);
void MergeJoin(int *a, int *b, int low, int pivot, int high);

void MergeSort(int *a, int *b, int low, int high)
{
    int pivot;
    if(low <high)
    {
      //Middle index
      pivot = (low+high)/2;
      
      //Recursively split into two halves
      MergeSort(a,b, low, pivot);
      MergeSort(a,b, pivot+1, high);
      
      //Recursivley merge two halves
      MergeJoin(a,b, low, pivot, high);
    }
}

void MergeJoin(int *a, int *b, int low, int pivot, int high)
{
  int i,j,k,h;
  h = low;
  i = low;
  j = pivot+1;
  
  //In a loop compare the values between the two halves
  while((h<=pivot)&&(j<= high))
  {
      if(a[h] < a[j])
	b[i++] = a[h++];
      else
	b[i++] = a[j++];
  }
  //If the first half is assigned, add all the rest in the second half to temp array b
  if(h>pivot)
      for(k=j;k<=high;k++, i++)
	b[i] = a[k];
  //If the second half is assigned, add all the rest in the first half to temp array b
  else
      for(k=h;k<=pivot;k++, i++)
	b[i] = a[k];  
  
  //Copy values from temp array to primary array b
  for(k=low; k<= high; k++)
    a[k] = b[k];
}

int main()
{
	int a[10],i,j, temp, min;
	for(i=0; i<10; i++)
	{
		a[i] = 10 - i;
	}
        int length = sizeof(a)/sizeof(int);
	int b[length];
	
	//Call for mergesort
	MergeSort(a, b, 0, length-1);
        
        for(i = 0; i < 10; i++)
          cout<<a[i]<<endl;

	return 0;
}
