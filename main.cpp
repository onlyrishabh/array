#include <iostream>
using namespace std;
bool find (int arr[],int size, int key){
    for( int i =0; i<size; i++){
        if (arr[i]== key)
        return true;
    }
    return false;
}

int main() {
    
int arr [5] ={1,1,3,5,7,};
int size =5;
cout <<" entre key" << endl;
int key ;
cin >> key;
if ( find( arr , size , key)){
    cout << "foud " << endl;
}else{
    cout << "not found " << endl;
}
  

    return 0;
}

