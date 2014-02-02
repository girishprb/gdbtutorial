#include<iostream>
using namespace std;


int main()
{
	int a[10],i;
	for(i=0; i<10; i++)
	{
		a[i] = 10 - i;
	}
        for(i=0; i<10; i++)
        {
                cout<<a[i]<<endl;
        }

	return 0;
}
