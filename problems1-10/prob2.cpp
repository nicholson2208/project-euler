using namespace std;

#include <iostream>

int main(){
  int oldold=0;
  int old=1;
  int new_num=2;
  int sum=0;

  while(new_num<4000000){
    if(new_num%2==0){
      sum+=new_num;
    }
    int temp=new_num;
    new_num=new_num+old;
    oldold=old;
    old=temp;

 }
  cout << "The sum at the end on the day is "<< sum << endl;

 return 0;
}
