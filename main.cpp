#include <iostream>
using namespace std;
float a=0, b=0, x=0, y=0, z=0;
    cout << "inserire i valori di a, b, x, y" << endl;
    cin >> a >> b >> x >> y;
    if (x<0 && y>0){
        z = (a*x) - (b*y);
    }
    else if (x>=0 && y<=0){
        z=(a*(x*x)) - (b*y);
    }
    else {
        z=(a*x) + (b*(y*y));
    }
    cout << z;
   return 0;
int main() {
   return 0;
}
