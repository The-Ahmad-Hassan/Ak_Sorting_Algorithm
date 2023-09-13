#include<iostream>
using namespace std;



void Sort(int *arr , int size){
int swap_i=0;
int swap_j=size-1;
int i1=0; 
int j=size-1;

for(int i=0; i<(size/2); i++){
  int min_i=i1;
int max_j=j;
  
    while (i1<size  && j>=0)
 //max && min index ko find karo
{

if(arr[j]>arr[max_j]){
max_j=j;
}
  
  else if(arr[min_i]>arr[i1]){
    min_i=arr[i1];
    i1++;
  }
   j--;

}


while (i1<size)
{
 if(arr[min_i]>arr[i1])
    min_i=i1;
      
      i1++;
}

if(max_j==swap_i){
    max_j=min_i;
}

//i1 & j ko re-initizaile kardo
i1=swap_i+1;
j=swap_j-1;


//ab smallest aur larger number ko exact no par pounchte ayoo
swap(arr[swap_i++],arr[min_i]);
swap(arr[swap_j--],arr[max_j]);

}



}



int main(){


int arr[]={1,2,2,4,3,3,4,5,6,6,6,7,8,9,5,4,3};
int n=sizeof(arr)/sizeof(int);

Sort(arr,n);

for(auto i:arr){
    cout<< i <<" ";
}

}