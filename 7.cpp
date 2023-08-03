#include <iostream>
using namespace std;
class student
{
    int reg, age;
    char name[50];

public:
    void getsdata()
    {
        cout << "\nEnter name of student: ";
        cin >> name;
        cout << "\nEnter regestration no.: ";
        cin >> reg;
        cout << "\nEnter age: ";
        cin >> age;
    }
    int giveage()
    {
        return age;
    }
};
class ugstudent : public student
{
    int sem;
    float fee, sti;

public:
    void getugdata()
    {
        getsdata();
        cout << "\nEnter Sem: ";
        cin >> sem;
        cout << "\nEnter fee: ";
        cin >> fee;
        cout << "\nEnter stipend: ";
        cin >> sti;
    }
    int givsem()
    {
        return sem;
    }
};
class pgstudent : public student
{
    int sem;
    float fee, sti;

public:
    void getpgdata()
    {
        getsdata();
        cout << "\nEnter Sem: ";
        cin >> sem;
        cout << "\nEnter fee: ";
        cin >> fee;
        cout << "\nEnter stipend: ";
        cin >> sti;
    }
    int givsem()
    {
        return sem;
    }
};
int main()
{
    int m, n, i, s;
    cout << "\nEnter the no. of UG student: ";
    cin >> m;
    ugstudent ug[m];
    for (i = 0; i < n; i++)
        ug[i].getugdata();
    for (s = 1; s <= 8; s++)
    {
        int flag = 0, count = 0, sum = 0;
        for (i = 0; i < n; i++)
        {
            if (ug[i].givesem() == s)
            {
                sum = sum + ug[i].giveage();
                flag = 1;
                count++;
            }
        }
        if (flag == 1)
        {
            cout << s << " sem avg. age is: " << sum / cou;
        }
    }
    cout << "\nEnter the no. of PG student: ";
    cin >> n;
    ugstudent pg[n];
    for (i = 0; i < n; i++)
        pg[i].getpgdata();
    for (s = 1; s <= 8; s++)
    {
        int flag = 0, count = 0, sum = 0;
        for (i = 0; i < n; i++)
        {
            if (pg[i].givesem() == s)
            {
                sum = sum + pg[i].giveage();
                flag = 1;
                count++;
            }
        }
        if (flag == 1)
        {
            cout << s << " sem avg. age is: " << sum / cou;
        }
    }
    return 0;
}
