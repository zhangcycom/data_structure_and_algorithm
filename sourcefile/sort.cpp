#include <iostream>
#include <vector>
using namespace std;



void heapify(vector<int>& a, int cur, int unsortedLen){
    int largestIndex=cur;
    int left=2*cur+1,right=2*cur+2;

    if(left<unsortedLen && a[left]>a[largestIndex]){
        largestIndex=left;
    }
    if(right<unsortedLen && a[right]>a[largestIndex]){
        largestIndex=right;
    }
    if(cur!=largestIndex){
        swap(a[cur],a[largestIndex]);
        heapify(a, largestIndex, unsortedLen);
    }

}

void heapSort(vector<int>& a){
    int n=a.size();
    for(int i=n/2-1;i>=0;i--){
        heapify(a,i,n);
    }
    for(int i=n-1;i>0;i--){
        swap(a[0],a[i]);
        heapify(a, 0, i);
    }
}

void quickSort(vector<int>& a, int left, int right){
    if(left<right){
        int pivot=a[left];
        int i=left, j=right;
        while(i<=j){
            while(a[i]<pivot) i++;
            while(a[j]>pivot) j--;
            if(i<=j){
                swap(a[i++],a[j--]);
            }
        }
        quickSort(a,left,j);
        quickSort(a,i,right);
    }
}

void coutArray(vector<int>& a){
    if(!a.empty()){
        for(int i=0;i<a.size()-1;i++){
            cout<<a[i]<<" ";
        }
        cout<<a.back()<<endl;
    }
}

int main(){
    vector<int> a={0,-3,45,23423,124,456,11333};
    coutArray(a);
    // quickSort(a,0,a.size()-1);
    heapSort(a);
    coutArray(a);
}