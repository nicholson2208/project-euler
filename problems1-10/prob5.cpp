using namespace std;

#include <map>
#include <iostream>
#include <cmath>


int lcm(int n);
map<string,int> prime_factorization(int number);

int main(){
  int n=20;
  int least_com_mult=lcm(n);

  cout << "The least common multiple of the first "<<n <<" natural numbers is " <<least_com_mult << endl;

  return 0;
}

int lcm(int n){
  map<string,int> distinct_factors;
  distinct_factors.clear();  
  int product=1;

  for(int num=2; num<n+1; num++){
    map<string,int> pf=prime_factorization(num);

    for(map<string,int>::iterator it = pf.begin(); it !=pf.end(); ++it){
      cout << "I'm trying v hard to output the first key " << it->first <<endl;
      if(distinct_factors.find(it->first) == distinct_factors.end()){
	//if the factor isn't in the dictionary yet
	distinct_factors.insert({it->first, 1});
      } else {
	//the factor is in the dictionary
	if(pf[it->first]>=distinct_factors[it->first]){
	  distinct_factors[it->first]=pf[it->first];
	}

      }
    }
  }
  for(map<string, int>::iterator it = distinct_factors.begin(); it != distinct_factors.end(); ++it){
    product*=pow(stoi(it->first),distinct_factors[it->first]);
  }
  

  return product;
}


map<string,int> prime_factorization(int number){
  map <string, int> factors;
  
  for(int i=2;i<= 2*number; i++){
    if(number==1){
      break;
    }
    while(number%i==0){
      number/=i;

      if(factors.find(to_string(i)) == factors.end()){
	factors[to_string(i)]=1;
      } else {
	factors[to_string(i)]+=1;
      }
    }


  }
  return factors;

}
