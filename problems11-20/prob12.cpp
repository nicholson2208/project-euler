using namespace std;

#include <iostream>
#include <map>

int numTriFactors(int num_divisors);

int main(){
  int n= 6;

  cout<< "The first triangle number with " << n <<" divisors is " << numTriFactors(n) << endl;
  return 0;
}

int numTriFactors(int num_divisors){
  //maybe create a dictionary to store all of the factors
  map<int, int> factors;
  int jump=2;
  int number=3;
  int old_num=1;

  factors.insert(pair<int,int>(1,1)); // initialize with 1
  while(factors.find(old_num)->second < num_divisors && old_num<28)
    { //this might be leq instead
    //basically go through the loop of numbers and find factors
    // but if your come across a factor you have already seen, 
    //look it up instead of recalculating it


    int num_factors =0;
    int smallest_big_factor=number;
    for(int i=1; i<smallest_big_factor; i++)
      {
	int curr = number;
	if(curr%i==0 && curr!=i)
	  { //you have found a factor pair
	    curr=curr/i; //so now curr and i are the factors
	    smallest_big_factor=curr;

	    cout << "factor pair: " << curr <<" "<< i << endl;
	    if(factors.find(i) != factors.end())
	      { //you have a workable subproblem
		num_factors=num_factors+factors.find(curr)->second + factors.find(i)->second;
		cout<<"suh dude i'm insertin" << endl;
		factors.insert(pair<int,int>(number,num_factors));
		break; 
	  
	      } else
	      { //you don't know how many factors curr has
	 
		num_factors=num_factors+2;
	      }
	  }
	}
    cout <<"num factors: "<< factors.find(number)->second << endl;
    jump++;
    old_num =number;
   number=number+jump;
   cout << number << endl;
   }
  
  return old_num;
}
