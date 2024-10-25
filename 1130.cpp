#include <iostream>

using std::cin;
using std::cout;

class C {
public:
    int x=0;
    inline static int sx=0;
    static const int scx=0;
};

/*int main(){
    cout<<C::sx<<" "<<C::scx<<"\n";
    C::sx=1;
    cout<<C::sx<<" "<<C::scx<<"\n";
    C c1,c2;
    c1.x=42;
    c2.x=17;
    c2.sx=13;
    cout<<c1.x<<" "<<c1.sx<<" "<<c1.scx<<"\n";
    cout<<c2.x<<" "<<c2.sx<<" "<<c1.scx<<"\n";

    return 0;
}*/
