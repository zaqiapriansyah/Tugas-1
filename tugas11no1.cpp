#include <iostream>
using namespace std;
int main(){
  int A[3] = {200,201,200};
  int*B;
  B = &A[0];
  cout << *B << " ";
  B = B+1; // menemukan Array ke berapa //
  cout << *B << " ";
  B = B-1; // menemukan Array ke berapa //
  cout << *B << endl;

  return 0;
}