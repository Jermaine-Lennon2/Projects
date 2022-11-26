// Program to Find Leader Number In An Array

// Jermaine T Lennon

#include <iostream>

using namespace std;

int main(){
    int n;
    
    cout << "Enter the number of elements of in arrary: " << endl;
    scanf("%d", &n);
    
    int A[n];
    
    cout << "Enter a number: " << endl;
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &A[i]);
        
    }

    for (int i=0; i<n; i++){
        int key=A[i];
        int count = 0;
        for (int j=i+1; j<n; j++){
            if(key<A[j])
                count++;
        }
        
        if (count==0)
            printf("%d",A[i]);
    }
    
    
    return 0;
}
