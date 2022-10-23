#include<iostream>
using namespace std;
void printArray(int arr[],int n){
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}cout<<endl;
}
void swapAlternate(int arr[],int size){
for(int i=0;i<size;i+=2){
    if(i+1<size){
        swap(arr[i],arr[i+1]);
    }
}
}
int main(){
int even[10]={56,57,58,59,60,51,52,53,54,55};
int odd[5]={7,11,13,17,19};
swapAlternate(even,10);
swapAlternate(odd,5);
printArray(even,10);
printArray(odd,5);
return 0;
}
