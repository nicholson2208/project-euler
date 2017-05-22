using namespace std;

#include <iostream>
#include <string>


string maxAdjProd(long num, int run_length);
int multListElements(int arr[], int size);

int main(){
  //lol I think this number is too big 
  string best_string = maxAdjProd(30420752963450,4);
  cout<<"the best is "<< best_string<<endl;
  return 0;
}

string maxAdjProd(long num, int run_length){

  string s=to_string(num);
  int all_nums[s.length()];
  int best_nums[run_length];


  for(int i =0; i<s.length(); i++){
    all_nums[i]=(int)s[i]-48; //something about ascii
    cout << all_nums[i] << endl;
  }

  int iter=0;
  int max_product=0;
  string best = "";

  while(iter< s.length()-run_length+1){
    int nums[run_length];
    cout << "the iter is "<< iter << endl;
    for(int ii=0; ii<run_length; ii++){
      nums[ii]=all_nums[ii+iter];
    }
    iter++;
    
    int product = multListElements(nums, run_length);

    if(product > max_product){
      cout << "product is now "<<product << "and max is "<<max_product << endl;
      max_product=product;
      for(int i=0; i< run_length; i++){ //idk if this part works
	best+=to_string(nums[i])+" ";
      }
    }
  }


  return best;
}

int multListElements(int arr[], int size){ //have a helper variable to make life ez
  cout <<"the first element of nums is " << arr[0] <<"and size is " << size<< endl;
  int product=1;
  for(int i; i<size; i++){
    product = product  * arr[i];
  }
  cout << "the product I am returning is "<< product << endl;
  return product;
}
