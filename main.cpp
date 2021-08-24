#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
char *passgen(int N){//сама функция генерации пароля
char * password = new char[N];//строка с паролем
for (int i = 0; i < N; i++)// цикл для генерации пароля
{
switch(rand() % 4)//оператор ветвления для выбора символа
{
case 0:
password[i] = 33 + rand() % 16;//рандомный символ из таблицы ASCII
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
cout << "Ваш пароль: ";
return password;
}
int main(){
setlocale(LC_ALL, "Russian");//подключение русского
metka://метка для перехода
srand(time(NULL));//для того чтоб каждый раз генерировался новый набор символов
int N;//переменная для длинны пароля
int F;//переменная для выбора действия после генерации пароля
cout<<"\nВведите длину пароля? для случайной введите ноль:  ";
cin>>N;
if (N<=0)
    N = 8 + rand() % 32;
cout<<"Длина вашего пароля: "<< N << endl;
cout << passgen(N);
cout<<"\nСгенерировать пароль ещё раз?(1 - да; 0 - нет): ";
cin>>F;
switch(F)
{
case 1:
    goto metka;
case 0:
    return 0;
}
}
