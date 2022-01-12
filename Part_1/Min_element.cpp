
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
vector <int> Nums = {3,2,3,9,8};


  sort (Nums.begin(), Nums.end());

  cout << "Minimalnoe chislo v posledovatelnosti: "<< Nums[0];

  return 0;

}
