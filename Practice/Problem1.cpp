//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

//Find the sum of all the multiples of 3 or 5 below 1000.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int sum(int n);

int main(){
    int n = 1000;
    
    cout << sum(n-1) << endl;
    
    system("pause");
    return 0;
}
int sum(int n){
    int count = 0;
    if(n == 1)
        return 0;
    else{
        if(n % 3 == 0 || n % 5 == 0)
            count += n;
    }
    
    return count + sum(n-1);
}
