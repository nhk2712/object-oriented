#include <iostream>
#include <string>
using namespace std;

class Staff{
    public:
    string name;
    int dob;
    int salary;
    int kpi;

    void setKpi(){
        cin >> kpi;
    }

    void showSalary(){

    }
};

class Clerical : public Staff{
    public:
    void showSalary(){
        salary=kpi*100000;
        cout << salary << endl;
    }
};

class Produce : public Staff{
    public:
    int basic;

    public:
    void showSalary(){
        cin >> basic;
        salary=basic+kpi*50000;
        cout << salary << endl;
    }
};

int main(){
    Clerical vp;
    Produce sx;

    vp.setKpi();
    vp.showSalary();

    sx.setKpi();
    sx.showSalary();

    return 0;
}