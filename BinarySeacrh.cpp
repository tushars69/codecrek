#include<iostream>
using namespace std;
int BinarySearch(int a[],int n,int key){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+((end-start)/2);
        if(a[mid]==key){
            return mid;
            }
            else if(a[mid]<key){
                start=mid+1;
            }
            else{
                   end=mid-1;
            }
             mid=start+((end-start)/2);         
    }
    return -1;
}
int main(){
    int even[8]={2,3,4,5,6,7,8,90};
    int odd[5]={12,45,67,89,91};
    cout<<BinarySearch(even,8,6)<<endl;
cout<<BinarySearch(odd,5,12)<<endl;    

}
