using namespace std;

#include <iostream>
#include <cmath>

string findThatTriple(int target);

int main(){
  cout << findThatTriple(1000) << endl;
  return 0;
}

string findThatTriple(int target){
  string triple="";
  for(int a = 1; a<500;a++){
    for(int b = 1; b < 500; b++){
      int hyp = pow(a,2)+pow(b,2);
      double c = sqrt(hyp);
      if(fmod(c,1)==0){
	if(a+b+c==target){
	  triple=to_string(a)+" "+to_string(b)+" "+to_string(c);
	}
      }
    }
  }

  return triple;
}
