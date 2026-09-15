#include<iostream>
using namespace std;

int* getManyIntegers(int& count)
{
	int arr[100];
	int i = 0;
	while (i < 100 && arr[i] != -999)
	{
		i++;
		cout << "Enter an integer: ";
		cin >> arr[i];
		count++;
	}
	int* numbers = new int[count];
	for (int i = 1; i <  count; i++)
	{
		numbers[i] = arr[i];
	}
	return numbers;
}

int main()
{
	int count = 0;
	int* outputArray = getManyIntegers(count);
	for (int i = 1;i < count;i++)
	{
		cout << outputArray[i] << endl;
	}
	delete []outputArray;
	outputArray = NULL;
	return 0;
}