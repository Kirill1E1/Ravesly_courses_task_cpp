#include <iostream>

using namespace std;

int main()
{
 int N;
  cout << "Vvedite nomer mesyatca: ";
  cin >> N;

  if(N <= 0 || N > 13) cout << "Nevernij nomer mesytca!!!";
  else {
       if ((N>=0 && N < 3) || N == 12) cout << "Zima";
       if (N>=3 && N < 6) cout << "Vesna";
       if (N>=6 && N < 9) cout << "Leto";
       if (N>=9 && N <= 11) cout << "Osen";
      }

  return 0;
  
}
