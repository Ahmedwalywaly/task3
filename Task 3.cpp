#include <iostream>

using namespace std;

class BigDecimalInt{

string number1;
string number2;

public:
         BigDecimalInt (string no1, string no2)
        {
            no1=number1;
            no2=number2;
        };
        void set_number1(string no1)
        {
            number1=no1;

        };
        void set_number2(string no2)
        {
            number2=no2;

        };
string get_number1()
        {
            return number1;
        };
        string get_number2()
        {
            return number2;
        };


BigDecimalInt (string decStr){
} // Initialize from string and rejects bad input
BigDecimalInt (int decInt){
} // Initialize from integer


BigDecimalInt operator+ (const BigDecimalInt& anotherDec){
    BigDecimalInt num;
         num.num1 = this->num1 + n.num1;
        num.num2 = this->num2 + n.num2;
         return num;
}
BigDecimalInt operator= (const BigDecimalInt& anotherDec){
    BigDecimalInt num;
         num.num1 = this->num1;
        num.num2 = this->num2;
         return num;
}


int size(){
    for(int i=0;i<number1;i++)
    {
        cout<<i<<endl;

    }
    //or
    cout<<number1.size()<<endl;

for(int j=0;j<number2;j++)
    {
        cout<<j<<endl;

    }
    //or
    cout<<number2.size()<<endl;
}

friend ostream& operator << (ostream& out,const BigDecimalInt& b)
{
return os;
}


};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
