#include<bits/stdc++.h>
using namespace std;
class Data{
    public:
    string nm;
    string cls;
    string s;
    int id;
    int math_marks;
    int eng_marks;
};
bool cmp(Data a, Data b){
    
    if(a.math_marks+a.eng_marks== b.math_marks+b.eng_marks){
       return a.id<b.id;
    }



    return a.math_marks+a.eng_marks> b.math_marks+b.eng_marks;
    

}

int main(){
    int n;
    cin>>n;
    Data students[n];
    for(int i=0; i<n; i++){
       
        cin>>students[i].nm>>students[i].cls>>students[i].s>>students[i].id>>students[i].math_marks>>students[i].eng_marks;

        cin.ignore();
   
    }
    
    sort(students, students+n,cmp);
    for(int i=0; i<n; i++){
        cout<<students[i].nm<<" "<<students[i].cls<<" "<<students[i].s<<" "<<students[i].id<<" "<<students[i].math_marks<<" "<<students[i].eng_marks<<endl;
    }



    return 0;
}