#include<iostream>
using namespace std;

class table {
public:
    int length = 0;
    int bredth = 0;
    int height = 0;
    string tableTopMaterial;

    static void Mobile() {
        cout<<"It is Moveable"<<endl;
    }
};

int main() {

    table table1,table2;
    cout<<"Define Table 1";
    cin>>table1.length;
    cin>>table1.bredth;
    cin>>table1.height;
    getline(cin,table1.tableTopMaterial);
    table::Mobile();

    cout<<"Define Table 2";
    cin>>table2.length;
    cin>>table2.bredth;
    cin>>table2.height;
    getline(cin,table2.tableTopMaterial);
    table::Mobile();

    for (int i=1; i<=2; i++) {
        cout<<"Table "<<i<<" Details:";
        cout<<"Table Length : "<<table1.length;
        cout<<"Table Length : "<<table1.bredth;
        cout<<"Table Length : "<<table1.height;
        cout<<"Table Top Material is : "<<table;
    }

    return 0;
}