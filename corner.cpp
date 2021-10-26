#include <iostream>
using namespace std;

int main() {
    float s1,s2,s3,so;
    char ans;

    do{ //using do-while loop to enable ask-repeat function
    cout<<"Angle I: ";cin>>s1;
    cout<<"Angle II: ";cin>>s2;
    cout<<"Angle III: ";cin>>s3;

    so = s1+s2+s3;

    if (so > 180)
    {cout<<"ERROR: Not a triangle, a triangle require not more than 180 degrees total corner"<<endl;}
        else if (so < 180)
        {cout<<"ERROR: Not a triangle, a triangle require not less than 180 degrees total corner"<<endl;}
            else if (s1 == 90 || s2 == 90 || s3 == 90)
                {cout<<"Right Triangle"<<endl; //segitiga siku- siku
                    }else if (s1 > 90 || s2 > 90 || s3 > 90)
                        {cout<<"Obtuse Triangle"<<endl; //segitiga tumpul
                            }else{cout<<"Acute Triangle"<<endl;} //segitiga lancip

    cout<<"Do you want to do it again ? [Y/N]";cin>>ans;
    }while(ans == 'Y' || ans == 'y');
    cout<<"Thank you for using this app!"<<endl;
    
    system("pause");
}

//Copyright Galvin @ 2021 - Kalbis Institute