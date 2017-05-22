using namespace std;

#include <iostream>

long findNthPrime(int n);

int main(){
  findNthPrime(10001);

  return 0;
}

long findNthPrime(int n){
  int number_primes = 0;

  for(long number=2; number < 10000000; number++){
    for(int i=2; i<number+1; i++){
      if(number%i==0){
	if(number != i){
	  break;
	} else {
	  number_primes++;
	  cout << "Found prime number " << number_primes << "! : " << number << endl;
	  if(number_primes==n){
	    return number;
	  }
	}
      }
    }
  }

}
