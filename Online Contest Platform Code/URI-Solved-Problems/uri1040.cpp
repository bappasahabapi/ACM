#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,c,d;
    cin>>a>>b>>c>>d;

   float x;


    float avg =((a*2)+(b*3)+(c*4)+(d*1))/10;


    cout<<setprecision(1)<<fixed<<endl;
    cout<<"Media: "<<avg<<endl;

    if(avg>=5.0 && avg<=6.9)
    {
        cout<<"Aluno em exame."<<endl;
        cin>>x;
        cout<<"Nota do exame: "<<x<<endl;
        cout<<"Aluno aprovado."<<endl;
        cout<<"Media final: "<<(avg+x)/2<<endl;
    }
    else if(avg<5.0)
    {
        cout<<"Aluno reprovado."<<endl;
    }
    else
        {
         cout<<"Aluno aprovado."<<endl;
        }
        return 0;
}
