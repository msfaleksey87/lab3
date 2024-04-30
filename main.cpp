//#define lab3_1
//#define lab3_2
//#define lab3_3
//#define lab3_4
//#define lab3_5
//#define lab3_6
#define lab3_7

#include <iostream>

//����� 1----------------------------------------------------------------------------------------------------------------------------------------
#ifdef lab3_1
//���⪠ ���� cin
#define BUFF_CLEAR std::cin.ignore(10000, '\n')

using namespace std;

//�㭪�� ���䨪�樨 �����
void inputVerification(double &input)
{
    while (cin.fail() || input < 0)
    {
        cin.clear();
        BUFF_CLEAR;
        cout<<"������ ������⥫�� �᫮�� ���祭�� "<<endl;
        cin>>input;
    }
}

double cube(double number)
{
    return number * number * number;
}

int main()
{
    double number;
    cout<<"������ �᫮\n";
    cin>>number;
    inputVerification(number);
    cout<<"��᫮ � �㡥 = "<<cube(number);

    return 0;
}
#endif
//---------------------------------------------------------------------------------------------------------------------------------------------------

//����� 2-------------------------------------------------------------------------------------------------------------------------------------------
#ifdef lab3_2
using namespace std;

void print_char(char ch)
{
    cout<<ch<<"\n"<<static_cast<int>(ch);
}
int main()
{
    char ch;
    cout<<"������ ᨬ���\n";
    cin>>ch;
    print_char(ch);
    return 0;
}
#endif
//---------------------------------------------------------------------------------------------------------------------------------------------------

//����� 3-------------------------------------------------------------------------------------------------------------------------------------------
#ifdef lab3_3
#include <limits>
using namespace std;

auto int_Value() -> void;
auto bool_Value() -> void;
auto cyar_Value() -> void;
auto long_Value() -> void;

auto int_Value() -> void
{
    int iValue = 563;
    cout<<"�������� ���祭�� ⨯� int = "<<numeric_limits<int>::min()<<" - "<<numeric_limits<int>::max()<<"\n";
}

auto bool_Value() -> void
{
    bool cValue(true);
    cout<<"�������� ���祭�� ⨯� bool = "<<numeric_limits<bool>::min()<<" - "<<numeric_limits<bool>::max()<<"\n";
}

auto cyar_Value() -> void
{
    char cValue{108};
    cout<<"�������� ���祭�� ⨯� char = "<<static_cast<int>(numeric_limits<char>::min())<<" - "<<static_cast<int>(numeric_limits<char>::max())<<"\n";
}

auto long_Value() -> void
{
    long lValue{2147483645};
    cout<<"�������� ���祭�� ⨯� long = "<<numeric_limits<long>::min()<<" - "<<numeric_limits<long>::max()<<"\n";
}

int main()
{
    int_Value();
    bool_Value();
    cyar_Value();
    long_Value();
    return 0;
}
#endif
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//����� 4------------------------------------------------------------------------------------------------------------------------------------------------------------------
#ifdef lab3_4
int x{1}; // ������쭠� ��६�����
int main()
{
 int x{2}; // �����쭠� ��६�����
 std::cout << "global x: " << ::x << "\n";
 std::cout << "local x: " << x << "\n";
 return 0;
}

#endif
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//����� 5---------------------------------------------------------------------------------------------------------------------------------------------------
#ifdef lab3_5
void printChar(int a='a', char b='b', char c='c', char d='d')
{
    std::cout<<a<<"-"<<b<<"-"<<c<<"-"<<d<<"\n";
}

int main()
{
    printChar();
    printChar(1, 'd', 128, 87);
}

#endif
//-----------------------------------------------------------------------------------------------------------------------------------------------------------

//����� 6--------------------------------------------------------------------------------------------------------------------------------------------------
#ifdef lab3_6
#include <typeinfo.h>

void typeOut(int output)
{
    std::cout<<"��� ������ - "<<typeid(output).name()<<"\n";
    std::cout<<sizeof (output)<<" ����"<<"\n";
}
void typeOut(float output)
{
    std::cout<<"��� ������ - "<<typeid(output).name()<<"\n";
    std::cout<<sizeof (output)<<" ����"<<"\n";
}
int main()
{
    int a{5};
    float b{5.25};
    typeOut(a);
    typeOut(b);
    return 0;
}
#endif
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------

//����� 7-------------------------------------------------------------------------------------------------------------------------------------------
#ifdef lab3_7

inline int min(int a, int b)
{
    return a < b ?a : b;
}

inline int max(int a, int b)
{
    return a > b ?a : b;
}

inline int shift(int a, int b)
{
    return a<<b;
}

int main()
{
    std::cout<<min(5, 2)<<"\n";
    std::cout<<max(5,2)<<"\n";
    std::cout<<shift(2,1);
    return 0;
}
#endif
//-------------------------------------------------------------------------------------------------------------------------------------------------
