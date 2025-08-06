#include<iostream>
using namespace std;
int main()
{
    string a,b,c;
    cin>>a>>b>>c;

    if(a=="vertebrado")
    {
        if(b=="ave")
        {
           if(c=="carnivoro")
              {
                 cout<<"aguia"<<endl;
              }

           else if(c=="onivoro")
             cout<<"pomba"<<endl;
        }
        if(b=="mamifero")
        {
           if(c=="herbivoro")
          {
              cout<<"vaca"<<endl;
          }

          else if(c=="onivoro")
             cout<<"pomba"<<endl;
        }

    }


      if(a=="invertebrado")
    {
        if(b=="inseto")
        {
           if(c=="hematofago")
             {
               cout<<"pulga"<<endl;
             }

           else if(c=="herbivoro")
           {
              cout<<"lagarta"<<endl;

           }

        }
        if(b=="anelideo")
        {
           if(c=="hematofago")
            {
              cout<<"sanguessuga"<<endl;
            }

           else if(c=="herbivoro")
           {
              cout<<"lagarta"<<endl;

           }

        }






    }
}
