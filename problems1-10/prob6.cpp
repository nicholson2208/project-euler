using namespace std;

#include <iostream>
#include <cmath>

int main(){
  int sum_nums=0;
  int sum_squares=0;

  for(int i=1; i<=100; i++){
    sum_squares+=pow(i,2);
    sum_nums+=i;
  }

  int diff= pow(sum_nums,2) - sum_squares;

  cout<<"The difference between the sum of the squares of the the 100 natural numbers and the square of the sum is "<< diff << endl;
  return 0;
}

