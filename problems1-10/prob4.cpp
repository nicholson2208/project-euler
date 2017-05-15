using namespace std;

#include <iostream>

// I don't want to make a header file, so I think I can declare stuff here?

int max(int a, int b);
string reverse_string(string s);


int main(){
  int best=0;
  int best_pair[]={0,0};

  int x=9000;
  while(x<10000){
    int y=9000;
    while(y<10000){
      int product=x*y;
      string sprod = to_string(product);
      if(sprod.compare(reverse_string(sprod))==0){
	if(product>best){
	  best=product;
	  best_pair[0]=x;
	  best_pair[1]=y;
	  x = max(x,y);
	}
      }
      y++;
    }
    x++;
  }

  cout << "the best pair is " << best_pair[0]<<" , "<< best_pair[1] << endl;
  cout <<"and the product is " << best << endl;
  return 0;
}

int max(int a, int b){

  if(a>=b){
    return a;
  }
  return b;
}

string reverse_string(string s){
  string rev_s=s;
  int iter=0;

  for(int i=s.length()-1; i>=0; i--){
    rev_s[iter]  = s[i];
    iter++; 
  }
  
  return rev_s;
}
