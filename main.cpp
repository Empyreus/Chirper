#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
  string chirp;

  do
  {

    cout<<"Please enter your Chirp:"<<endl;
    getline(cin,chirp);

    if( chirp.length() > 100 )
    {
      cout<<"Sorry, Chirps must be under 100 characters.\n";
      cout<<"Yours was "<<chirp.length()-100<<" too long!\n";
    }
  }while( chirp.length() > 100 );

  cout<<"Thank you for sharing your chirp:\n"<<chirp<<endl;
  cout<<"Have a nice day!\n";  

  return 0;
}
