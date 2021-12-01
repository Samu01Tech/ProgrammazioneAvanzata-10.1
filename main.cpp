#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
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

int main() {
    vector<int> v(20);
    iota(v.begin(), v.end(), 0);
    for(auto& item : v){
        cout << item << " ";
    }

    //primoEsercizio();
} 