#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int n,vector<int> &a){
        for(int i = 0; i < n; i++){
            bool sort = true;
            for(int j = 0; j < n-1-i; j++){
                if(a[j] > a[j+1]){
                    swap(a[j],a[j+1]);
                    sort = false;
                }
            }
            if(sort)
                break;
        }
}

int main(){
        int n;
        cin>> n;
        vector<int> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        bubble_sort(n,a);

        for(auto it : a)
            cout << it << " ";
}