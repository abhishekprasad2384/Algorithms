#include <iostream.h>
using namespace std;

int median(int ar1[], int ar2[], int n){
	int i = 0; 
	int j = 0; 
	int count;
	int m1 = -1, m2 = -1;
	for (count = 0; count <= n; count++)
	{
		if (i == n)
		{
			m1 = m2;
			m2 = ar2[0];
			break;
		}
		else if (j == n)
		{
			m1 = m2;
			m2 = ar1[0];
			break;
		}
		if (ar1[i] <= ar2[j])
		{
			m1 = m2; 
			m2 = ar1[i];
			i++;
		}
		else
		{
			m1 = m2; 
			m2 = ar2[j];
			j++;
		}
	}

	return (m1 + m2)/2;
}

int main(){
	int arr1[] = {1, 12, 15, 26, 38};
	int arr2[] = {2, 13, 17, 30, 45};

	int n1 = sizeof(arr1) / sizeof(arr1[0]);
	int n2 = sizeof(arr2) / sizeof(arr2[0]);

	if (n1 == n2)
		cout<<median(arr1, arr2, n1) ;
	else
		cout<<"Unequal size of Array";
        
	return 0;
}
