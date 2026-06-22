
#include<bits/stdc++.h>
using namespace std;
void sss(char *in,char *out, int i, int j){
    if(out[0]=='\0'){
        cout<<" void "<<endl;
        return;
    }
    if(in[i]=='\0'){
        out[j]='\0';
        cout<< out <<endl;
        return;
    }
    sss(in, out, i+1, j);
    out[j]=in[i];
    sss(in, out, i+1, j+1);
}
int main(){
    char j[100];
    int n;
    cout<<"Enter n ";
    cin >> n;
    cin.ignore();      
    while (n--){
    string s;
    getline(cin, s); 
    }
    sss(s,j,0,0);

    return 0;

}
