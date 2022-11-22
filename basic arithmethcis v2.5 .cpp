#include <iostream>
using namespace std;
double num1, num2, sum, dif, pro, quo;
char cho, y, n, op;

double add()
{
sum=num1+num2;
cout << "The Sum is: " << sum << endl;
cout << endl;
}
double subt()
{
dif=num1-num2;
cout << "The Difference is: " << dif << endl;
cout << endl;
}
double mult()
{
pro=num1*num2;
cout << "The Product is: " << pro << endl;
cout << endl;
}
double divi()
{
quo=num1/num2;
cout << "The Quotient is: " << quo << endl;
cout << endl;
}
double inp()
{
    cout << "Basic Arithmetic!"<< endl;
    cout << "Enter 1st Number: ";
    cin >> num1;
    cout << "Enter 2nd Number: ";
    cin >> num2;
    cout << endl;
}
double select ()
{
    cout<<"\n*****************************************";
    cout<<"\n** SELECT YOUR OPERATION **";
    cout<<"\n** [*] Multiplication **";
    cout<<"\n** [/] Division **";
    cout<<"\n** [+] Addition **";
    cout<<"\n** [-] Subtraction **";
    cout<<"\n*****************************************"; 
    cout<<"\nInput the operation you want to perform: ";
    cin >> op;
    switch (op)
    {
    case '+':
        cout<<"\nPerform Addition\n";
        add();
        break;
    case '-':
        cout<<"\nPerform Subtraction\n";
        subt();
        break;
    case '/':
        cout<<"\nPerform Division\n";
        divi();
        break;
    case '*':
        cout<<"\nPerform Multiplication\n";
        mult();
        break;
    default:
        cout<<"\nInvalid input\n";
        break;
    }
}
int main ()
{
    inp();
    select();
   
cout<< endl <<"try again [y/n]?: ";
cin>>cho;
    if (cho == 'y'||cho=='Y')
    {
        cout << endl;
        return main ();
    }
    if (cho == 'n'||cho == 'N')
    {
        cout<< "\nprogram shutting down!!!!!!" << endl;
        return 0;
    }
    else{
    cout << "Invalid Character, Shutting Down Program!" << endl;
    return 0;
    }     
}