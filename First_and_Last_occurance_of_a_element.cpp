#include<iostream>
using namespace std;
int FirstOcc(int a[],int n, int key){
    int s=0;
    int e=n-1;
    int mid=s+((e-s)/2);
    int ans=-1;
    while(s<=e){
        if(a[mid]==key){
            
             ans=mid;
            e=mid-1;
            
        }
        else if(a[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s/2);
    }
    return ans;
}
int LastOcc(int a[],int n, int key){
    int s=0;
    int e=n-1;
    int mid=s+((e-s)/2);
    int ans=-1;
    while(s<=e){
        if(a[mid]==key){
           ans=mid;
          s=mid+1;
        
        }
        else if(a[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+((e-s)/2);
    }
    return ans;
}
int main(){
    int a[9]={34,56,78,90,90,90,90,90,97};
    cout<<"First occurance of 90 is at index "<<FirstOcc(a,9,90)<<endl;
    cout<<"Last occurance of 90 is at index "<<LastOcc(a,9,90)<<endl;
    return 0;

}
