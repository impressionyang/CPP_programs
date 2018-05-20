# include <iostream >
using namespace std ;

/** \brief
请分析什么成员应指定为公用的(成员函数)？什么成员应指定为私有的(数据成员)？
什么函数最好放在类中定义(构造函数)？什么函数最好在类外定义？
 *
 * \param
 * \param
 * \return
 *
 */

class Time                           //定义Time类
{
private:                       //数据成员为公用的
    int hour ;
    int minute ;
    int sec ;
public:
    Time();
    void display();
};
Time::Time(){
        cin>>hour>>minute>>sec; //输入设定的时间
    }
 void Time::display(){
        cout<<hour<<":"<<minute<<":"<<sec<<endl;      //输出时间
    }


int main ( )
{
    Time tl ; 							//定义t1为Time类对象
    tl.display();

    return 0;
}
