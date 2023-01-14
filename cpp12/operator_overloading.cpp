//operator overloading
#include<iostream.h>
#include<conio.h>

class complex
{
    private:
        int real,imag;
    public:
        complex()
        {
            real=0;
            imag=0;
        }
        complex(int real1,int imag1)
        {
            real = real1;
            imag = imag1;
        }
        complex operator+(complex c1)
        {
            complex temp;
            temp.real = real+c1.real;
            temp.imag = imag+c1.imag;
            return temp;
        }
        complex operator/(complex c2)
        {
            complex tem;
            tem.real = (real*c2.real)+(imag*c2.imag)/(c2.real*c2.real)+(c2.imag+c2.imag);
            tem.imag = (c2.real*imag)-(real*c2.imag)/(c2.real*c2.real)+(c2.imag+c2.imag);
            return tem;
        }
        void display()
        {
            cout<<real<<"+i"<<imag<<endl;
        }
};
void main()
{
    clrscr();
    complex a,b;
    int p,q,r,i;
    cout<<"Enter real part of first complex number: ";
    cin>>p;
    cout <<p <<endl;
    cout<<"Enter imag part of first complex number: ";
    cin>>q;
    cout << q << endl;
    cout<<"Enter real part of second complex number: ";
    cin>>r;
    cout << r << endl;
    cout<<"Enter imag part of second complex number: ";
    cin>>i;
    cout << i << endl;
    cout<<"The first complex number is: ";
    a = complex (p, q);
    a.display();
    cout<<"The second complex number is: ";
    b=complex(r,i);
    b.display();
    complex c;
    complex d;
    c = a + b;
    d = a / b;
    cout << "Addition is: ";
    c.display();
    cout<<"Division is: ";
    d.display();
    getch();

}