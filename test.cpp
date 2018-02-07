//Paul Huske
//Demonstrating Merge on Github

#include <iostream>
using std::cout;
using std::endl;

int Square( int num)
{
    return  num*num;
}

int main() {
    cout << "Carpe Diem!\n";
   cout<< " Paul wants to add a new line of code"<< endl;
    
 for( int i = 1; i<10; i++)
 {
  cout<< Square(i) << "   ";   
 }
    return 0;
 }
