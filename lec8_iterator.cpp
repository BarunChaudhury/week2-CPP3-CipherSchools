#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main () {
    vector<string> solar_sys = { "mer","venus","earth","mars","jupiter","saturn","uranus","neptune"};
    
    vector<string>::iterator shiv = solar_sys.begin();
    vector<string>::iterator vansh = solar_sys.begin();
    
    cout<<*next(shiv,5)<<endl;
    
    cout<<"Distance from Shiv"<<distance(vansh, shiv)<<endl;
  
    return 0;
}