#include<bits/stdc++.h>
using namespace std;
class Data{
    public:
    string nm;
    string cls;
    string s;
    int id;
    
};

int main(){
    int n;
    cin>>n;
    Data students[n];
    for(int i=0; i<n; i++){ 
        cin>>students[i].nm>>students[i].cls>>students[i].s>>students[i].id;
    
    }
    int i=0;
    int j=n-1;
    while(i<j){
        swap(students[i].id, students[j].id);
        i++;
        j--;
    }
    //output
    for(int i=0; i<n; i++){
        cout<<students[i].nm<<" "<<students[i].cls<<" "<<students[i].s<<" "<<students[i].id<<endl;
    }
    
  
    



    return 0;
}