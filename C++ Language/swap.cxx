#include <iostream>
using namespace std;
void SwapValue(int A, int B) {
   int t = A;
   A= B;
   B= t;
}
int main() {
   int a, b;
   cout<<"Enter value of a :";
   cin>>a;
   cout<<"\nEnter value of b : ";
   cin>>b;
   SwapValue(a, b);
   printf("\nAfter swapping, the values are: a = %d, b = %d", a, b);
   return 0;
}