

// CPP program to determine if array arr[] 
// can be split into three equal sum sets. 
#include <iostream> 
using namespace std; 
  
// Returns split point. If not possible, then 
// return -1. 
int findSplitPoint(int arr[], int n) 
{ 
    int leftSum = 0 ; 
  
    // traverse array element 
    for (int i = 0; i < n; i++) 
    { 
        // add current element to left Sum 
        leftSum += arr[i] ; 
  
        // find sum of rest array elements (rightSum) 
        int rightSum = 0 ; 
        for (int j = i+1 ; j < n ; j++ ) 
            rightSum += arr[j] ; 
  
        // split point index 
        if (leftSum == rightSum) 
            return i+1 ; 
    } 
  
    // if it is not possible to split array into 
    // two parts 
    return -1; 
} 
  
// Prints two parts after finding split point using 
// findSplitPoint() 
void printTwoParts(int arr[], int n) 
{ 
    int splitPoint = findSplitPoint(arr, n); 
  
    if (splitPoint == -1 || splitPoint == n ) 
    { 
        cout << "Not Possible" <<endl; 
        return; 
    } 
    for (int i = 0; i < n; i++) 
    { 
        if(splitPoint == i) 
            cout << endl; 
        cout << arr[i] << " " ; 
    } 
} 
  
// Driver code 
int main() 
{ 
    const size_t max_size = 100;
	int numbers[max_size] {};
	std::cout << "Enter integers('q' to end the arrays)\n";
	size_t size = 0;

	
	while(std::cin >> numbers[size++] && size < max_size)
		; //Empty loop body
	std::cin.clear(); //Clear failed state
	std::cin.ignore(); //Discard first symbol in stream (our X) 
	
	int n = sizeof(numbers)/sizeof(numbers[0]);
	printTwoParts(numbers, n); 
   
	 //cout << "Size " << size ;

	 //cout << "The numbers are: ";

	 //  print array elements
     //for (int n = 0; n < size; n++) {
         //cout << numbers[n] << "  ";
	 //}

	return 0;
}

	

