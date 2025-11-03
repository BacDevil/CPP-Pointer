#include <iostream>
#include <string>

using namespace std;

int main() {
  std::string box;
std::string *ptr;
std::cout << "enter your name: ";
std::cin >> box;


std::cout << "Do you want to modify this name?";
std::cin >> box << std::endl;
std::cout << "Modified name: " << box << std::endl;


return 0;

}





