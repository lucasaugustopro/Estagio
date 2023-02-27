#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Ola mundo !";
    string inverted_str = ""; 
  
    for (int i = str.length() - 1; i >= 0; i--) {
        inverted_str += str[i];
    }

   
    cout << "String invertida: " << inverted_str << endl;

    return 0;
}