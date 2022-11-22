#include <iostream>
using namespace std;
double num1, num2, sum, dif, pro, quo;
char cho, y, n;
int rest;

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
    cout << "Basic Arithmetic!"<<endl;
    cout << "Enter 1st Number: ";
    cin >> num1;
    cout << "Enter 2nd Number: ";
    cin >> num2;
    cout << endl;
}

int main ()
{
    char op;
    inp();
    cout<<"Enter Operation either + or - or / or * : ";
    cin >> op;
    switch (op)
    {
    case '+':
        add();
        break;
    case '-':
        subt();
        break;
    case '/':
        divi();
        break;
    case '*':
        mult();
        break;
    default:
        cout << "Error 404";
        break;
    }

cout<< endl <<"try again [y/n]?: ";
cin>>cho;
    if (cho == 'y'){
        cout << endl;
        return main ();
    }
    if (cho == 'n'){
        cout<< "\nprogram shutting down!!!!!!" << endl;
        return 0;
    }
    else{
    cout << "Invalid Character, Shutting Down Program!" << endl;
    return 0;
    }     

}
