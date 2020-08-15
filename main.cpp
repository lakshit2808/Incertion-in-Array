#include <iostream>
using namespace std;

int main()
{
	int size;
	int arr[size] , i , num , pos;
	cout << "Enter the Size of Array: ";
	cin >> size;
	for(i= 0; i < size ; i++)
	{
		cout <<"Enter the Element [" << i << "] =";
		cin >> arr[i];
	}
	
	cout <<"Your Input is = {"; 
	for(i = 0; i < size ; i++)
	{
		cout <<arr[i] << "," ;
	}
	cout<<"}; \n \n";
	
	
	//Incertion at specifice position
	cout <<"Enter the Number to Insert: ";
	cin >> num;
	cout <<"Enter the Position where you want to Insert: ";
	cin >> pos;
	if(pos <= 0)
	{
		cout <<"Invilid Position";
	}
	else{
	
	for(i = size; i >= pos ; i--) //here i = size means its = array and i >= pos program will change value only till position it will not change value below it
	{
		arr[i + 1] = arr[i]; // this means that for the postion i + 1 the value of i will be printed
	}
	arr[pos - 1] = num;// after the rotation of all numbers the pos index will get empty and num will be printed there 
	size++; // it means that size of array will increase after the incertion of new number
	cout << "New Array = {";
	for(i =0; i< size ; i++)
	{
		cout <<arr[i] <<",";
	}
	cout <<"};";
}
	return 0;
}
