#include<bits/stdc++.h>
using namespace std;

void selection_sort(int n,vector<int> &a){
    for(int i = 0; i < n-1; i++){
        int min = i;
        for(int j = i + 1; j < n; j++){
            if (a[j] < a[min]){
                min = j;
            }
        }
        swap(a[i],a[min]);
    }
}
int main(){
        int n;
        cin>> n;
        vector<int> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        selection_sort(n,a);

        for(auto it : a)
            cout << it << " "; 


}