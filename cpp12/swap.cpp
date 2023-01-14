// swap
#include<iostream.h>
#include<conio.h>
void swap_v(int x, int y)        //pass by value
{
    int t = x;
    x = y;
    y = t;
}
void swap_r(int &x, int &y)      //pass by reference
{                                //pass by reference
    int t = x;
    x = y;
    y = t;
}
void swap_a(int *x, int *y)       //pass by address or pointer
{
    int t = *x;
    *x = *y;
    *y = t;
}
void main()
{
    clrscr();
    int a, b, n;
    char ch;
    do
    {
	cout << "Press 1 for pass by value" << endl;
	cout << "Press 2 for pass by reference" << endl;
	cout << "Press 3 for pass by address or pointer" << endl;
	cout << "Enter your choice" << endl;
	cin >> n;
	switch(n)
	{
	    case 1:
		cout << "Enter two numbers" << endl;
		cin >> a >> b;
		cout << "a = "<< a << " and b =" << b << endl;
		swap_v(a, b); //invokes pass by value
		cout << "After swapping values are a "<< a << " and b = "<< b << endl;
		break;
	    case 2:
		cout << "Enter two numbers" << endl;
		cin >> a >> b;
		cout << "a = " << a << " and b =" << b << endl;
		swap_r(a, b);           //invokes pass by reference
		cout << "After swapping values are a "<< a << " and b = "<< b << endl;
		break;
	    case 3:
		cout << "Enter two numbers" << endl;
		cin >> a >> b;
		cout << "a = " << " and b = " << b << endl;
		swap_a(&a ,&b);          //invokes pass by add or pointer
		cout<<"After swapping values are a = " << a << " and b = " << b << endl;
		break;
	    default:
		cout << "Invaild input " << endl;
	}
	cout << "Do you want to continue?" << endl;
	cin >> ch;
    }
    while(ch == 'y');
    cout << "Bye";
    getch();
}
/*
Output:
Press 1 for pass by value
Press 2 for pass by reference
Press 3 for pass by address or pointer
Enter your choice
3
Enter two numbers
5 9
a =  and b = 9
After swapping values are a = 9 and b = 5
Do you want to continue?
Y
Press 1 for pass by value
Press 2 for pass by reference
Press 3 for pass by address or pointer
Enter your choice
2
Enter two numbers
5 9
a = 5 and b =9
After swapping values are a 9 and b = 5
Do you want to continue?
N
Bye
*/