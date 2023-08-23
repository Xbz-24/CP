#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
int main()
{
  int t;
  std::cin >> t;
  //std::system("clear");
  while(t--){
    std::string s;
    std::cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    if(s == "YES") std::cout <<"YES"<< std::endl;
    else std::cout << "NO" << std::endl;
  }
  return 0;
}