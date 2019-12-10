
#include <iostream>
#include <cmath>
using namespace std;
int counter = 0;
int goby = 1;
void bubblesort(int arr[], int arraySize) {			//BubbleSort Decending
	int swap;
	for (int j = 0; j < arraySize; j++) {
		for (int i = 0; i < arraySize; i++) {
			int y = i + 1;
			if (arr[y] > arr[i]) {
				swap = arr[i];
				arr[i] = arr[y];
				arr[y] = swap;
			}
		}
	}
	for (int i= 0; i < arraySize; i++) {
		cout << "\t" << arr[i];
	}
}
void array1d() {
	int arr1[5] = {};
	cout << "Please enter 5 Values for your array";
	for (int i = 0; i < 5; i++) {
		cin >> arr1[i];
	}
	int largest = -9999;
	for (int i = 0; i < 5; i++) {
		if (largest <= arr1[i]) {
			largest = arr1[i];
		}
	}
	cout << "The largest number is :  " << largest;
	// 3,2,5,9,11
	for (int i = 0; i < 5; i++) {
		cout << arr1[i] << "\t";
	}

}
int sum(int x,int y) {
	return x + y;
}
int sub(int x, int y) {
	return x - y;
}
int mult(int x, int y) {
	return x * y;
}
int div(int x, float y) {
	int z = x / y;
	return z;
}
void calculator() {
	int f, s;
	char op;
	cout << "Please enter The First number \n";
	cin >> f;
	cout << "Please enter the Operation\n";
	cin >>op;
	cout << "Please enter the second number\n";
	cin >> s;
	int result = 0;
	switch (op) {
	case('+'):
		cout << f + s;
		//result = sum(f, s);
		break;
	case('-'):
		cout << f - s;
		//result = sub(f, s);
		break;
	case('*'):
		cout << f * s;
		//result = mult(f, s);
		break;
	case('/'):
		cout << f / s;
		//result = div(f, (float)s);
		break;
	default:
		cout << "Error";
	}
	//cout << "result is  : "<< result;

}
void printarr(int arr[10][10], int a , int b) {
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void Arrays2d() {
	int arr2d[10][10];
	cout << "Enter the dimentions of the array(Upto 10 x 10";
	int a = 0, b = 0;
	cin >> a, b;
	for (int i = 0; i < a; i++) {
		cout <<" Enter the the reg number and marks of : " << "Student Number " << i + 1 << "\t";
		for (int j = 0; j < b; j++) {
			cin >> arr2d[i][j];
		}
	}
	printarr(arr2d , a, b);
}
bool primefind(int x) {								//Logic for finding prime numbers
	int ans = 0;
	if (x == 2 || x == 3 || x == 5)
		return !ans;
	for (int i = 2; i < x -1; i++) {
		if ((x % i) != 0) {
			ans = 1;
		}
		else {
			ans = 0;
			break;
		}
	}
	return ans;

}
int rec(int x) {										// recurtion 
	goby = goby * x;
	x--;
	if (x <= 1)
		return goby;
	rec(x);
}
void star() {											//Printing a star
	int x = 1, y = 2;
	for (int row = 0; row < 3; row++)
	{
		for (int space = 0; space < y; space++)
		{
			cout << " ";
		}
		for (int star = 0; star < x; star++)
		{
			cout << "*";
		}
		cout << endl;
		y = y - 1;
		x = x + 2;
	}
	int j=1,k=3;
	for (int lines = 0; lines < 2; lines++)
	{
		for (int pace = 0; pace < j; pace++)
		{
			cout << " ";
		}
		for (int tars = 0; tars < k;  tars++)
		{
			cout << "*";
		}
		cout << endl;
		j = j + 1;
		k = k - 2;
	}
}
int swap(int x , int y) {					//Swaping with two variables
	x = x + y;
	y = x - y;
	x = x - y;
	cout << x << "\t " << y<< endl;
	return 0;
}
void even_print() {							//Print all even numbers from 1-100 and ending line after 5 numbers
	int x = 0;
	for (int i = 0; i < 50; i++) {
		x = x + 2;
		cout << x << "\t";
		if (x%10 ==0)
			cout << endl;
	}
}
void pyramid() {							//Basic Pyramid Function
	int x = 1;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < x; j++) {
			cout << "*";
		}
		cout << endl;
		x++;
	}
	int y = 5;
	for (int i = 0; i < 5; i++) {

		for (int j = 0; j < y; j++) {

			cout << "*";
		}
		cout << endl;
		y--;
	}
}
inline void print() {										//Simple Print function
	cout <<endl<< "Program ending";
}
void Login(int pass) {
	cout << "please enter your 4 Digit Security pin\n";		//input password
		for (int i = 3; i > 0; i--) {
			counter++;
			cin >> pass;
			if (pass <= 9999 && pass >= 1000) {				//Checking for Inrange value
				if (pass == 1234) {							//Password check
					cout << "The Pasword is correct. Logging in...\n";
					break;
				}
				else
					cout << "Incorrect Passwrod. You have " << i-1 << " Attempt(s) Left\n";
			}
			else
				cout << "Please enter a four digit PIN " << i-1 << " Attempt(s) Left\n";
		}
		if (counter == 3)
			cout << "Locking Computer..\n Exiting Program...";

}
int greaterornot(int a= 0,int b = 0) {		//Function for checking greater value //Testing Switch
	if (a > b)
		cout << "A is greater than b";
	else if (b > a)
		cout << "B is bgreater than A";
	else
		cout << "A is Equal to B";
	cout << "Enter a letter\n";
	//---------------------------------------------------------------------------------------------------------------//
	return 0;
}
void reverse(long int a =1234) {				//Revering and Number.
	while (a != 0) {
		int y;
		y = a % 10;
		cout << y;
		a = a / 10;
	}
}
int main()
{
	//calculator();
	//Arrays();
	//star();
	//int a, b;
	//Arrays2d();
	//int  pass = 0;
	//int arr1[10] = { 2,1,3,4,7,6,5,9,8,10 };
	bubblesort(arr1, 10);
	//cout << primefind(a);
	//primefind(a);
	//cout << "Enter two numbers";
	//cin >> a >> b;
	//cout << endl;
	//Login(pass);
	//pyramid();
	//even_print();
	//greaterornot(a, b);
	//reverse(a);
	//swap(a, b);
	//star();
	//a = rec(a);
	//cout << a;
	//print();
	//int i = 0;
	//for (i = 1; i <= 10; i++);
	//system("pause");
	//int x = pow(2, 5);
}

//Feel Free to test all the functions out. Remember to use the Correct parameters.