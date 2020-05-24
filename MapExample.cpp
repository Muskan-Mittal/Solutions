#include <iostream>
#include <map>
using namespace std;
int main ()
{
  map<char,int> mymap;
  map<char,int>::iterator it;

  mymap['a']=50;
  mymap['b']=100;
  mymap['c']=150;
  mymap['a']=200;

  it = mymap.find('a');
  if (it != mymap.end())
    mymap.erase (it);

  // print content:
  cout << "elements in mymap:" << '\n';
  cout << "a => " << mymap.find('a')->second << '\n';
  cout << "c => " << mymap.find('b')->second << '\n';
  cout << "a => " << mymap.find('c')->second << '\n';

  return 0;
}
