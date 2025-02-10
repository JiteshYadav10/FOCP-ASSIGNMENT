#include <iostream>
#include <string>
using namespace std;
int main() {
    string string_of_characters,n;

    cout<<"Enter set of random characters :";
    getline(cin,string_of_characters);
    cout<<"\n"<<"You entered : "<<string_of_characters<<endl;
    cout<<"Length of your entered string : "<<string_of_characters.length()<<endl;
    string m=string_of_characters;
  
    for (int i=m.length()-1;i>=0;i=i-1) {
        n=n+string_of_characters[i];
    }
    cout<<"Entered string in reverse order : "<<n<<endl;

    for(int i=0;i<m.length();i=i+1) {
        m[i]=toupper(m[i]);
        n[i]=toupper(n[i]);
    }

    cout<<"Coversion of forward string to upper case letters : "<<m<<endl;
    cout<<"Coversion of reverse string to upper case letters : "<<n<<endl;

    if (n==m) {
        cout<<"Palindrome"<<endl;
    }
    else {
        cout<<"Not Palindrome"<<endl;
    }

    
    

}