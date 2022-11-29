#include <iostream>
using namespace std;
int pangkat (int x, int y);
int main (){
  int x, y;
  cout << "MENGHITUNG PANGKAT DENGAN FUNGSI REKURSIF" << endl;
  cout << "Msukan nilai x = ";
  cin >> x;
  cout << "Masukan nilai y = ";
  cin >> y;
  cout << "Pangkat " << x << " dari " << y << " adalah " << pangkat(x,y) << endl;
}
int pangkat (int x, int y){
  if (y==0)
    return 1;
  else
    return x*pangkat(x, y-1);
}