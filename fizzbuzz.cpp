#include <iostream>
#include<cmath>
using namespace std;

int main(){

int n;
cout<<"Enter Max Number ";
cin>>n;
//set i to 1 because initially i=0 will be true and print fizz buzz
for(int i=1;i<n;i++){
  if(i%15==0){
    cout<<"FizzBuzz"<<endl;
  }
  else if (i%3==0) {
    cout<<"Fizz"<<endl;

  }
  else if (i%5==0) {
    cout<<"Buzz"<<endl;

  }
  else
  cout<<i<<" "<<endl;
}
cout<<endl;

}
