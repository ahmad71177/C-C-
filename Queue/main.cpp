#include <iostream>

using namespace std;

class saff{
    char a[32];
    int front, rear;
public:
    void set(void);
    void insert(char ch);
    char remove(void);
};
void saff::set(void){
front = 0;
rear=0;
}
void saff:: insert(char ch){
    if (rear ==32)
    {
        cout<<"full";
        return;

    }
    rear++;
    a[rear]=ch;

}

char saff:: remove(){
    if(front==rear)
    {
        cout<<"empty";
        return 0;
    }
    front++;
    return a[front];
}

int main()
{
    saff ab;
    ab.set();
    ab.insert('A');
    ab.insert('B');

    cout << ab.remove() << endl;
    cout << ab.remove() << endl;
    cout << ab.remove() << endl;
    return 0;
}
