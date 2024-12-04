#include <iostream>
#include <vector>
#include <cmath>
#include<algorithm>
using namespace std;

void vvod(vector<int>& vec){
    vector <int>::iterator iter = vec.begin();
    for (; iter != vec.end(); iter++)
    {
        *iter=rand()%16;
    }
    
}
int vivod(vector<int>& vec){
    int sum = 0;
    vector <int>::iterator iter = vec.begin();
    for (; iter != vec.end(); iter++)
    {
        cout << *iter << '\t';
        sum++;
    }
    return sum;
}

int main(){
    vector<int>vec(50);
    vector<int>vec2;
    vvod(vec);
    cout << "Элементы массива" << '\n';
    vivod(vec);
    cout << "================="<<endl;
    srav(vec,vec2);
    cout<<"осталось элементов " << '\t' <<vivod(vec2);
    vec.clear();
    vec2.clear();
}