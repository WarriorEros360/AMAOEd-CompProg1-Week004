#include <iostream>
#include <vector>

using namespace std;
int main (){

//Format: vector<DataType> nameOfVector();
//myVector.push_back(value) ==> adds element to the end of the vector, also resizes it.
//myVector.at(index) https://www.youtube.com/watch?v=Cq1h1KPoGBU

vector<int> myVector;

myVector.push_back(1);
myVector.push_back(7);
myVector.push_back(7);
myVector.push_back(0);
myVector.push_back(1);
myVector.push_back(3);


cout<< "Vector: ";

for (unsigned int i = 0; i < myVector.size(); i++)
{
    cout << myVector[i] << " ";
}

return 0;
}