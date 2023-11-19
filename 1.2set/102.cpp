

#include <iostream>
using namespace std;
#define PI 3.14

int main()
{   
    float V, r, h;
    cout << "圆锥底的半径：" << endl;
    cin >> r;
    cout<< "锥高：" << endl;
    cin >> h;
    V = (1.0/ 3) * PI * r * r * h;
    cout << "圆锥体积：" << V << endl;
    return 0;

}

