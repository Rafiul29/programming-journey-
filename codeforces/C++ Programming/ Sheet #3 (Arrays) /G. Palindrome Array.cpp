// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {

  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int i = 0;
  int j = n - 1;
  int flag = 1;
  while (i <= j) {
    if (arr[i] != arr[j]) {
      flag = 0;
      break;
    }
    i++;
    j--;
  }

flag==1? cout<<"YES":cout<<"NO";

  return 0;
}