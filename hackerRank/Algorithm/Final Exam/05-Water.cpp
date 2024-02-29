// Problem Statement

// You are given an array
// representing the heights of vertical lines positioned at equally spaced intervals along a two-dimensional plane. The -th line's height is represented by the integer where

// and the height will be unique.

// You need to find the two lines, such that together with the x-axis forms a container that can hold the most water in term of height.

// Note: Print the left index first, then the right index.

// Input Format

//     First line will contain

// , the number of test cases.
// First line of each test case will contain
// .
// Second line of each test case will contain the array

//     .

// Constraints

// Output Format

//     Ouptut two integers, the index of those two lines that can contain the most water in term of height.

// Sample Input 0

// 2
// 9
// 1 8 3 4 0 7 6 5 2
// 5
// 5 2 1 6 3

// Sample Output 0

// 1 5
// 0 3

// Explanation 0

// In the first test case, you can choose index 1 and 5 that can hold the most water in height which is 7.

// image

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int arr[N];
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    int left = 0, right = n - 1;
    int max = INT_MIN;
    int ai = 0, aj = 0;

    while (left < right)
    {
      long long int ans = min(arr[left], arr[right]);
      if (ans > max)
      {
        max = ans;
        ai = left;
        aj = right;
      }
      if (arr[left] < arr[right])
      {
        left++;
      }
      else
      {
        right--;
      }
    }

    cout << ai << " " << aj << endl;
  }
  return 0;
}
