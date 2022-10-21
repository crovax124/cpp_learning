#include <iostream>
using namespace std;

class MyNumberRepo{

    ///just tryout to build classes with methods and properties
public:
    int number1 = 15;//decimal
    int number2 = 017;//Octal
    int number3 = 0x0f;//hexadecimal
    int number4 = 0b00001111; //binary

//constructor syntax
    explicit MyNumberRepo(int number1,int number2, int number3, int number4) : number1(number1), number2(number2),number3(number3),number4(number4) {}

    static consteval int get_value(int value){
        return value;
    }
    static void printNameTenTimes(){
        string name;
        cout << "Type in Name:" <<endl;
        cin >> name ;

        for(int i=0; i<10;i++){
            std::cout<< to_string(i+1) + "."+ get_name(name)<<endl;
        }
    }
private:
    static string get_name(string value){
        return value;
    }
};


int main() {
MyNumberRepo::printNameTenTimes();
    return 0;
}
