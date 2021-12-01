#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <list>
#include <iterator>
using namespace std;

void stampa(int &dato){ 
    //passaggio per reference modifica il dato nel vettore
    dato += 1;
    cout << dato << " ";
}

void primoEsercizio(){
    vector<int> v = {1, 5, 2, 3, 0};
    
    for_each(v.begin(), v.end(), &stampa);
    cout << endl;
    for_each(v.begin(), v.begin()+4, &stampa);// solo con i vector
}

void secondoEsercizio(){
    vector<int> v(20);
    iota(v.begin(), v.end(), 0);
    for(auto& item : v){
        cout << item << " ";
    }
    cout << endl;
    list<int> l(20); //preallocare la lista
    iota(l.begin(), l.end(), 0);
    for(auto& item : l){
        cout << item << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v(20);
    iota(v.begin(), v.end(), 0);
    for(auto& item : v){
        cout << item << " ";
    }
    cout << endl;
    list<int> l(20); //preallocare la lista
    iota(l.begin(), l.end(), 0);
    for(auto& item : l){
        cout << item << " ";
    }
    cout << endl;  
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));

    //primoEsercizio();
    //secondoEsercizio();
} 