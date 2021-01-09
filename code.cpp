#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Podaj liczbe n:  ";
  cin >> n;
  
  int tablica[n];
  
  cout << "Podaj n liczb:   ";
  for(int i = 0; i < n; i++) {
    cin >> tablica[i];
  }
  
  cout << "Liczby od konca: ";
  for(int i = n - 1; i >= 0; i--) {
    cout << tablica[i] << ' ';
  }
  cout << endl;
  
  return 0;
}