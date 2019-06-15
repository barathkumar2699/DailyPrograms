#include <iostream>
using namespace std;
int main(){
    int count=0,i=0;
    char s[10000];
    while((cin>>s[i])>0){
            if(s[i]=='\0')
            {
                break;
            }
    if(s=="The"||s=="A"||s=="An"||s=="the"||s=="an"||s=="a"||s=="The."||s=="The,"||s=="A,"||s=="A."||s=="An."||s=="An,"||s=="the."||s=="the,"||s=="an."||s=="an,"||s=="a,"||s=="a.")
      count++;
      }
    cout<<count;
    return 0;

}
