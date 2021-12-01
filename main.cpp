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

int prodotto(int x, int y){
    return x * y;
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

void terzoEsercizio(){
    vector<int> v(20);
    iota(v.begin(), v.end(), 0);
    for(auto& item : v){
        cout << item << " ";
    }
    cout << endl;
    list<int> l(20);
    iota(l.begin(), l.end(), 0);
    for(auto& item : l){
        cout << item << " ";
    }
    cout << endl;  
    //copy
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
}

void quartoEsercizio(){
    vector<int> v = {1, 5, 5, 6, 7};

    auto trova = find(v.begin(), v.end(), 5);
    if(trova != v.end()) cout << *trova << endl;//necessario operatore ==
    //vector only
    cout << distance(v.begin(), trova) << " posizione distante" << endl;
}

void quintoEsercizio(){
    vector<int> v = {1, 5, 5, 6, 7};
    cout << accumulate(v.begin(), v.end(), 0); //somma
    cout << endl;
    cout << accumulate(v.begin(), v.end(), 1, prodotto);//prodotto
}

void sestoEsercizio(){
    vector<int> v = {8, 5, 5, 1, 7};

    sort(v.begin(), v.end());
    for (auto& item : v){
        cout << item << " ";
    }
    cout << endl;

    sort(v.rbegin(), v.rend());
    for (auto& item : v){
        cout << item << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v = {8, 5, 5, 1, 7};

    sort(v.begin(), v.end());
    for (auto& item : v){
        cout << item << " ";
    }
    cout << endl;

    sort(v.rbegin(), v.rend());
    for (auto& item : v){
        cout << item << " ";
    }
    cout << endl;

    //primoEsercizio();
    //secondoEsercizio();
    //terzoEsercizio();
    //quartoEsercizio();
    //quintoEsercizio();
} 