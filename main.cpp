#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
char *passgen(int N){//���� ������� ��������� ������
char * password = new char[N];//������ � �������
for (int i = 0; i < N; i++)// ���� ��� ��������� ������
{
switch(rand() % 4)//�������� ��������� ��� ������ �������
{
case 0:
password[i] = 33 + rand() % 16;//��������� ������ �� ������� ASCII
break;
case 1:
password[i] = 47 + rand() % 11;
break;
case 2:
password[i] = 64 + rand() % 27;
break;
case 3:
password[i] = 96 + rand() % 27;
break;
}
}
password[N] = '\0';
cout << "��� ������: ";
return password;
}
int main(){
setlocale(LC_ALL, "Russian");//����������� ��������
metka://����� ��� ��������
srand(time(NULL));//��� ���� ���� ������ ��� ������������� ����� ����� ��������
int N;//���������� ��� ������ ������
int F;//���������� ��� ������ �������� ����� ��������� ������
cout<<"\n������� ����� ������? ��� ��������� ������� ����:  ";
cin>>N;
if (N<=0)
    N = 8 + rand() % 32;
cout<<"����� ������ ������: "<< N << endl;
cout << passgen(N);
cout<<"\n������������� ������ ��� ���?(1 - ��; 0 - ���): ";
cin>>F;
switch(F)
{
case 1:
    goto metka;
case 0:
    return 0;
}
}
