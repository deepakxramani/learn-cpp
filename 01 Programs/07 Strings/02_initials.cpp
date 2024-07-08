#include <iostream>
using namespace std;
void findNameInitials(const string& name) {
   cout<<(char)toupper(name[0]);
   for (int i = 0; i < name.length() - 1; i++)
      if(name[i] == ' ' || name[i] == '\n')
   cout << " " << (char)toupper(name[i + 1]);
}
int main() {
   string name = "ram kisan\nsaraswat";
   cout<<"The initials of the name are ";
   findNameInitials(name);
   return 0;
}