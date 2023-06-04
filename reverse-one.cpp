#include<bits/stdc++.h>
using namespace std;
class Data{
    public:
    string nm;
    string cls;
    string s;
    int math_marks;
    int eng_marks;
};

int main(){
    int n;
    cin>>n;
    Data students[n];
    for(int i=0; i<n; i++){ 
        cin>>students[i].nm>>students[i].cls>>students[i].s>>students[i].math_marks>>students[i].eng_marks;
    
    }
    int i=0;
    int j=n-1;
    while(i<j){
        swap(students[i], students[j]);
        i++;
        j--;
    }
    //output
    for(int i=0; i<n; i++){
        cout<<students[i].nm<<" "<<students[i].cls<<" "<<students[i].s<<" "<<students[i].math_marks<<" "<<students[i].eng_marks<<endl;
    }
    
  
    



    return 0;
}