#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int n,vector<int> &a){
    for(int i = 1; i < n; i++){
        int indx = i;
        while(indx >= 1){
            if(a[indx-1] > a[indx]){
                swap(a[indx-1],a[indx]);
                indx--;
            }
            else
                break;
        }
    }
}

int main(){
        int n;
        cin>> n;
        vector<int> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        insertion_sort(n,a);

        for(auto it : a)
            cout << it << " ";
}