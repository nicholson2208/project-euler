using namespace std;

#include <iostream>
#include <string>


sting maxAdjProd(long num, int run_length);
int multListElements(int, int size);

int main(){
  string best_string = maxAdjProd(1111000,4);
  cout<<"the best is "<< best_string<<endl;
  return 0;
}

string maxAdjProd(long num, int run_length){

  string s=to_string(num);
  int all_nums[s.length()];
  int best_nums[run_length];


  for(int i =0; i<best_nums.size(); i++){
    all_nums[i]=stoi(s[i]);
  }

  int iter=0;
  int max_product=0;
  string best = "";

  while(iter< s.length()-run_length+1){
    int nums[run_length];

    for(int ii=0; ii<run_length; ii++){
      nums[ii]=all_nums[ii+iter];
    }
    iter++;
    
    int product = multListElements(nums, run_length);

    if(product > max_product){
      max_product=product;
      for(int i=0; i< run_length; i++){ //idk if this part works
	best+=to_string(nums[i])+" ";
      }
    }
  }


  return best;
}

int multListElements(int arr[], int size){ //have a helper variable to make life ez

  int product=1;
  for(int i; i<size; i++){
    product*=arr[i];
  }

  return product;
}
