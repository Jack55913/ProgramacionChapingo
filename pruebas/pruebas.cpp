#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = { 10, 45, 60, 78, 23, 21, 3,83,24,69,13,44,55 }, v1;
  
    int i;
    v1 = v;
    vector<int>::iterator ip;
  
    // Using std::partial_sort
    std::partial_sort(v.begin(), v.begin() + 2, v.end());
  
    // Using std::sort()
    std::sort(v1.begin(), v1.begin() + 2);
  
    cout << "v = ";
    for (i = 0; i < 5; ++i) {
        cout << v[i] << " ";
    }
  
    cout << "\nv1 = ";
    for (i = 0; i < 5; ++i) {
        cout << v1[i] << " ";
    }
  
    return 0;
}