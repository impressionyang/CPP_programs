# include <iostream >
using namespace std ;

/** \brief
�����ʲô��ԱӦָ��Ϊ���õ�(��Ա����)��ʲô��ԱӦָ��Ϊ˽�е�(���ݳ�Ա)��
ʲô������÷������ж���(���캯��)��ʲô������������ⶨ�壿
 *
 * \param
 * \param
 * \return
 *
 */

class Time                           //����Time��
{
private:                       //���ݳ�ԱΪ���õ�
    int hour ;
    int minute ;
    int sec ;
public:
    Time();
    void display();
};
Time::Time(){
        cin>>hour>>minute>>sec; //�����趨��ʱ��
    }
 void Time::display(){
        cout<<hour<<":"<<minute<<":"<<sec<<endl;      //���ʱ��
    }


int main ( )
{
    Time tl ; 							//����t1ΪTime�����
    tl.display();

    return 0;
}