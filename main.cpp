#include <iostream>
using namespace std;

class MyNumberRepo{
public:
    static consteval int get_value(int value){
        return value;
    }
    static string get_name(string value){
        return value;
    }
};


int main() {
    string name;
    cout << "Type in Name:" <<endl;
    cin >> name ;
    for(int i=0; i<10;i++){
       std::cout<< to_string(i+1) + "."+ MyNumberRepo::get_name(name)<<endl;
    }
    return 0;
}
