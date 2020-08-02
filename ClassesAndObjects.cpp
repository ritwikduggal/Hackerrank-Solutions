
using namespace std;
// Write your Student class here
class Student
{
    public:
        int a,b,c,d,e;
        void input();
        int calculateTotalScore();
};

void Student::input()
{
    cin>>a>>b>>c>>d>>e;
}

int Student::calculateTotalScore()
{
    return a+b+c+d+e;
}
