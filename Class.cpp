#include<iostream>
using namespace std;

class task
{
    private:
        int a;
        char fn[51];
        char ln[51];
        int g;
    public:
        int get_age();
        char* get_first_name();
        char* get_last_name();
        int get_grade();
};
int task::get_age()
{
    cin>>a;
    return a;
}

char* task::get_first_name()
{
    cin>>fn;
    return fn;
}

char* task::get_last_name()
{
    cin>>ln;
    return ln;
}

int task::get_grade()
{
    cin>>g;
    return g;
}

int main()
{
    task T;
    T.get_age();
    T.get_first_name();
    T.get_last_name();
    T.get_grade();
    cout<<T.get_age()<<endl;
    cout<<T.get_last_name()<<", "<<T.get_first_name()<<endl;
    cout<<T.get_grade()<<endl;
    cout<<endl;
    cout<<T.get_age()<<","<<T.get_first_name()<<","<<T.get_last_name()<<","<<T.get_grade();

    return 0;
}
