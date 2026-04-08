#include <iostream>
using namespace std;

void intercambiar(int* p, int* q) {

  
    int temp = *p;
    *p = *q;
    *q = temp;
}


int main() {
    int a = 10;
    int b = 20;

    cout << "Antes: a = " << a << ", b = " << b << endl;
    intercambiar(&a, &b);
    
 cout << "Después: a = " << a << ", b = " << b << endl;

    return 0;
}
