#include <iostream>
using namespace std;
#include<math.h>
int main() {
  int digit,ans=0,i=0,n;
  cout<<"Input the number:"<<endl;
  cin>>n;
  while(n!=0){
    digit=n%10;
    if(digit==1){
    ans=(ans+pow(2,i));
    }
      n=n/10;
    i++;
  }
  cout<<"The ans in binary form is:\n"<<ans<<endl;
}
