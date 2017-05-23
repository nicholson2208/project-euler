using namespace std;

#include <iostream>

long sumPrimes(int n);

int main(){
  cout << sumPrimes(10) << endl;
  return 0;
}

long sumPrimes(int n){
  long sum = 0;
  int num_primes=0;
  int number = 2;

  while(number < n){
    for(int i=2; i< number+1 ; i++){
      if(number%i==0){
	if(number != i){
	  break;
	} else {
	  num_primes++;
	  sum+=number;
	}
      }
    }
    number+=1;
  }


  return sum;
}
