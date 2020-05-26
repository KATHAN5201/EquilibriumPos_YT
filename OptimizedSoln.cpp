#include <iostream>
using namespace std;
int equilibrium(int * a,int size,int total)
{
    int left_sum = 0;
    for(int j = 0;j<size;j++)
    {
        //total holds the right_sum
        total = total - a[j];
        if(total == left_sum)
            return j+1;
        left_sum += a[j];
    }
    return -1;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int size,total = 0;
	    cin>>size;
	    int a[size];
	    for(int i = 0;i<size;i++)
	        {
	            cin>>a[i];
	            total += a[i];
	        }
	   cout<<equilibrium(a,size,total)<<endl;
	}
	return 0;
}


//[1,4,3,6,4,3,1] 

//[4,9]
//[6]

//Brute force solution O(n^2)