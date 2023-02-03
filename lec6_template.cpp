#include <iostream>
#include<bits/stdc++.h>


using namespace std;

template <typename T>

T sum(vector<T>&v, T def = 0) {
    T s = def;
 
   T a;
   for(int i =0; i<v.size(); i++) {
       s +=v[i];
   }
    return s;
}

int main()
{
    vector<int>v = {1,2,3,4,5,6,7,8,9};
    vector<double>v2 = {1.15,2.25,3.35,4.45,5.55,6.65,7.75,8.85,9.95};
    vector<string>vs = {"templates", ", ","are",",","magical.!"};
    
    cout << sum<double>(v2) <<endl;
    cout << sum<int>(v) <<endl;
     cout << sum<string>(vs," ") <<endl;
    
    return 0;
}