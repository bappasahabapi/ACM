// g++ -std=c++11 01-patterns.cpp -o code && ./code
#include <iostream>
using namespace std;

void pattern2(int n){

    int k=1 ;
    int spc;
    
    for(int i =1; i <=n; i++){
        
        for(int j=1; j<=k;j++)  cout<<"* ";
        cout<<endl;
        k++;
    }
}
void pattern3(int n){

    int k=1 ;
    int spc;
    
    for(int i =1; i <=n; i++){
        
        for(int j=1; j<=k;j++)  cout<<j;
        cout<<endl;
        k++;
    }
}
void pattern4(int n){

    int k=1 ;
    int spc;
    
    for(int i =1; i <=n; i++){
        
        for(int j=1; j<=k;j++)  cout<<k;
        cout<<endl;
        k++; // 2,
    }
}
void pattern5(int n){

    int k=n ;
    int spc;
    
    for(int i =1; i <=n; i++){
        
        for(int j=1; j<=k;j++)  cout<<"* ";
        cout<<endl;
        k--; // 2,
    }
}
void pattern7(int n){

    int star=1  ; // 1
    int space=n-1;
    
    for(int i=1; i<=n;i++){
        //space
        for(int j=1; j<=space; j++){
            cout<<" ";
        }
        //star
        for(int k=1; k<=star;k++){
            cout<<"*";
        }
        for(int j=1; j<=space; j++){
            cout<<" ";
        }
        cout<<endl;
        space--;
        star+=2;

    }
}
void pattern8(int n){

    int star =2*n-1;
    int space =0;

    for(int i =1; i<=n; i++){

        for(int k=1 ; k<=space; k++){
            cout<<" ";
        }

        for(int j=1; j<=star; j++){
            cout<<"*";
        }
      
        cout<<endl;
        star-=2;
        space++;
    }

}

int main() {
	int n=4; 
    pattern7(n);
    pattern8(n);
}