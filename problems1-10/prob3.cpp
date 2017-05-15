using namespace std;

#include <iostream>

int main(){
  long og_num=600851475143; //too big for an int
  long num=og_num;
  int i=0;
  for(i = 2; i < 50000; i++){
    //in some sense the stop condition is arbitrary, it just needs to be bigger than the largest prime factor

    while( num % i == 0 && num != i){
      num/=i;
      cout << "i is currently "<< i << " and num is " << num<< endl;
    }
  }
  cout << "The prime largest factor of "<< og_num << " is "<< num << endl;

  return 0;
}
