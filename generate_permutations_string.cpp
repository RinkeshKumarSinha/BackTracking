#include<iostream>
using namespace std;
//recursive way to generate permutations of a string
void permute(string str,int l,int r){
     
     if(l==r){
        if(str.find("ab")==string::npos){
           
             cout<<str<<" ";
        return;
 
        }
      
     }

    for(int i=l;i<=r;i++){
        swap(str[i],str[l]);
        permute(str,l+1,r);
        swap(str[i],str[l]);
    }
}

int main()
{
    string str;
    cin>>str;
    permute(str,0,str.length()-1);
    return 0;
}
