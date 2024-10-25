#include <iostream>
#include <list>

using std::cout;
using std::cin;

class logger {
private:
    int id=0;
public:
    inline static int count=0;
    logger() {
       // std::cout<<"+Logger():"<<id<<"\n";
        count++;
      //  std::cout<<"Count classes:"<<count<<"\n";
    }
    logger(int x) {
        id=x;
      //  std::cout<<"+Logger(int):"<<id<<"\n";
        count++;
        // std::cout<<"Count classes:"<<count<<"\n";
    }
    logger(const logger & other) {
        id=other.id;
        std::cout<<"+CopyLogger():"<<id<<"\n";
        count++;
        std::cout<<"Count classes:"<<count<<"\n";
    }
    ~logger() {
      //  std::cout<<"-Logger():"<<id<<"\n";
        count--;
       // std::cout<<"Count classes:"<<count<<"\n";
    }
    logger (logger&& other):id(++count) {
        cout<<"Logger&&:"<<id<<"\n";
    }
    logger& operator=(logger&& other) {
        cout<<"&&:"<<id<<"\n";
    }
    logger& operator=(const logger& other) {
        id=other.id;
        std::cout<<"operator =\n";
        return *this;
    }
};
void f(const logger& x) {
    cout<<"void f\n";
}
void f(logger&& x) {
    cout<<"voide f temp\n";
}
int main() {
    /*logger x;
    logger c(52);
    {
        logger x2(34);
    }
    std::cout << "Hello, World!" << std::endl;
    logger* ptr=new logger(1);
    logger* ptr2=new logger(5);
    delete ptr2;
    delete ptr;
    std::list<logger> loggers(2);
    loggers.pop_front();
    loggers.pop_back();
    logger x1;
    logger x2{2};
    std::cout<<logger::count;
    x2=x1;*/
    f(logger());
    cout<<"Hello\n";
    logger x;
    f(x);
    cout<<"Bye!";
    return 0;
}
