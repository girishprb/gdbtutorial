#include<iostream>
using namespace std;


int main()
{
	int a[10],i,j, temp, min;
	for(i=0; i<10; i++)
	{
		a[i] = 10 - i;
	}
        for(i=0; i<9; i++)
        {
	    min = i;
	    for(j=i+1;j<10;j++)
		if(a[i] > a[j])
		    min = j;
		
	    temp = a[min];
	    a[i] = a[min];
	    a[min] = temp;
        }
        
        for(i = 0; i < 10; i++)
          cout<<a[i]<<endl;

	return 0;
}
