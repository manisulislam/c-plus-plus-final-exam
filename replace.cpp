#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string s;
    string x;   
     cin>>s;
     cin>>x;
  

     int t= s.find(x);
        while(s.find(x)!=-1){
            s.replace(s.find(x),x.length(),"$");
           

        }
         cout<<s<<endl;
    

    }
          return 0;
    
     

    }
   
    

    
        
    
   
    
