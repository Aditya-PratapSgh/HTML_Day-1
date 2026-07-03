#include<iostream>
using namespace std;

class User{
    private:
    int id;
    string password;
    public:
    string username;
    User(int id){
        this->id=id;
    }

    void setpass(string password){
        this->password=password;
    }
    string getpass(){
        return password;
    }
    
};

int main(){
    User U1(101);
    
    U1.username="Tushar Chauhan";
    U1.setpass("123tus");

    cout<<"Username : "<< U1.username<<endl;
    cout<<"password : "<<U1.getpass();

    return 0;


}