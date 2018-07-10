//Assignment math 2 D\ abdel hady
// By ans saber ahmed  20170391     and       reda abdelmaqsoud  20160101
#include <iostream>
#include <iomanip>
using namespace std;

const double pi = 3.141592654;
long double sin, cos, arcsin, arccos, arctan, exp, ln, x, y, z, s;
long long int j = 2,j2 = 2, k2 = 1,  b,k = 1, m, n = 2;
int choice,ch, val = -1;

void sin_fun(long double _x)
{
    cout<< "(Note : limit of factorial [0:65])\n\nPlease enter the number of factorial : " ;
    cin>> m ;
    y = _x;
    sin = _x;
    while (n<=m)
    {
        if ( n%2 != 0)
        {
            for (int i =2 ; i<= n ; ++i)
            {
                y*=_x;
                k*=i;
            }
            z= y/k*val;
            sin+=z;
            y=_x;
            k=1 ;
            val*=(-1);
        }
        n++ ;
    }
    cout << "sin ( "<< s << " ) = " <<setprecision(25) << fixed <<sin << endl ;
}
void cos_fun(long double _x)
{
    cout<< "(Note : limit of factorial [0:65])\n\nPlease enter the number of factorial : " ;
    cin>> m ;
    y = _x;
    cos = 1;
    while (n<=m)
    {
        if ( n%2 == 0)
        {
            for (int i =2 ; i<= n ; ++i)
            {
                y*=_x;
                k*=i;
            }
            z= y/k*val;
            cos+=z;
            y=_x;
            k=1 ;
            val*=(-1);

        }
        n++ ;
    }
    cout << "cos ( "<< s << " ) = " <<setprecision(25) << fixed <<cos << endl ;
}
void tan_fun(long double _x)
{
    cout<< "(Note : limit of factorial [0:65])\n\nPlease enter the number of factorial : " ;
    cin>> m ;
    y = _x;
    sin = _x;
    cos = 1;
    while (n<=m)
    {
        if ( n%2 == 0)
        {
            for (int i =2 ; i<= n ; ++i)
            {
                y*=_x;
                k*=i;
            }
            z= y/k*val;
            cos+=z;
            y=_x;
            k=1 ;
            val*=(-1);
        }
        n++ ;
    }
    n=2;
    val = -1;
    while (n<=m)
    {
        if ( n%2 != 0)
        {
            for (int i =2 ; i<= n ; ++i)
            {
                y*=_x;
                k*=i;
            }
            z= y/k*val;
            sin+=z;
            y=_x;
            k=1 ;
            val*=(-1);
        }
        n++ ;
    }
    cout << "tan ( "<< s << " ) = " <<setprecision(25) << fixed <<sin / cos << endl ;

}
void exp_fun(long double _x)
{
    cout<< "(Note : limit of factorial [0:65])\n\nPlease enter the number of factorial : " ;
    cin>> m ;
    y = _x;
    exp = 1+_x;

    while (n <= m)
    {
        for (int i =2 ; i<=n ; ++i)
        {
            y*=_x;
            k*=i;
        }
        z = y/k ;
        exp +=z;
        y=_x;
        k=1;
        n++ ;
    }
    cout << "e^"<< s << " = " <<setprecision(25) << fixed <<exp << endl ;

}
void ln_fun(long double _x)
{
    if (_x > 1 || _x<-1)
        cout << "Error : The value must be at limit [-1:1] \n";
    else
    {
        cout<<"1- ln(1+x)\n2- ln(1-x)\n\nEnter your choice : ";
        cin>>ch;
        if(ch==1)
        {
            cout<< "Please enter the number of factorial : ";
            cin>> m ;
            y = _x  ;
            ln = _x ;
            while(n<=m)
            {
                for (int i=2 ; i<=n ; i++)
                {
                    y*=_x ;
                }
                z=_x/n*val ;
                ln+=z ;
                y=_x;
                val*=(-1);
                n++ ;
            }
            cout << "ln (1+"<<s<< ") = "<<setprecision(20) << ln << endl ;
        }
        else if(ch==2)
        {
            cout<< "Please enter the number of factorial : \n" ;
            cin >> m ;
            y = _x ;
            ln = (-_x) ;
            while (n <= m)
            {
                for (int i =2 ; i<=n ; ++i)
                {
                    y*=_x;
                }
                z = y/n ;
                ln +=z;
                y=_x;
                n++ ;
            }
            cout << "ln(1-"<< s << ") = " << setprecision(20) << ln << endl;
        }
    }
}
void arcsin_fun(long double _x)
{
    n = 1 ;
    y = _x ;
    arcsin = _x ;
    while (n<= m)
    {
        b = 2* n ;
        y *= _x ;
        for (int i = 2 ; i <= b; ++i )
        {
            j *= j2 ;
            y *= _x ;
            k2*=i ;
        }
        for (int i = 1; i<=n ; ++i)
        {
            k*=i ;
        }
        z=(1.00/j)*(k2/(k*k))*(y/(b+1));
        arcsin+=z ;
        j=2;
        y= _x;
        k2=1;
        k=1;
        n++;
    }
    arcsin = (arcsin *180)/(pi);
    if (_x == 1)
        arcsin = 90 ;
    if (_x == -1)
        arcsin = -90 ;
    cout <<"arcsin ( " << s << " )="<<setprecision(16)<<fixed<<arcsin<<endl;
}
void arccos_fun(long double _x)
{
    cout<< "(Note : limit of factorial [1:30])\n\nPlease enter the number of factorial : " ;
    cin>> m ;
    n = 1 ;
    y = _x ;
    arcsin = _x ;
    while (n<= m)
    {
        b = 2* n ;
        y *= _x ;
        for (int i = 2 ; i <= b; ++i )
        {
            j *= j2 ;
            y *= _x ;
            k2*=i ;
        }
        for (int i = 1; i<=n ; ++i)
        {
            k*=i ;
        }
        z=(1.00/j)*(k2/(k*k))*(y/(b+1));
        arcsin+=z ;
        j = 2;
        y = _x;
        k2 = 1;
        k = 1;
        n++;
    }
    arcsin = (arcsin *180)/(pi);
    if (_x == 1)
        arcsin = 90 ;
    else if(_x == -1)
        arcsin = -90 ;
    if (arcsin <= 90 )
        arccos = 90- arcsin ;
    else if (arcsin  > 90  )
        arccos = 90+ arcsin ;
    cout << "arccos ( "<< s << " ) = "<<setprecision(25)<<fixed<<arccos<<endl;
}
void arctan_fun(long double _x)
{
    cout<< "Please enter the number of factorial : \n" ;
    cin >> m ;
    val =1;
    y = _x ;
    n = 1 ;
    arctan = 0 ;
    while (n<=m)
    {
        if ( n%2!= 0)
        {
            for (int i =2 ; i<= n ; ++i)
            {
                y*= _x;
                k+=1;
            }
            z= (y/k)*val;
            arctan+=z;
            y = _x;
            k = 1 ;
            val*=(-1);
        }
        n++ ;
    }
    arctan =(arctan *180)/(pi) ;
    cout <<"arctan ( " << s << " ) = "<<setprecision(25)<< fixed <<arctan << endl ;
}

int main()
{
    cout<<"1- sin.\n2- cos.\n3- tan.\n4- arcsin.\n5- arccos.\n6- arctan.\n7- exponential.\n8- ln.\n\n";
    cout<<"Please choose the function you want : ";
    cin>>choice;
    system("cls");
    cout<<"Please enter the number to evaluate with : ";
    cin>>x;
    s=x;
    system("cls");

    if(choice==1 || choice==2 || choice==3)
    {
        while(x>180)
        {
            x = x-180;
        }
        while(x<0)
        {
            x = x+180;
        }
        x = (x / 180)*(pi) ;
    }
    if(choice == 1)
        sin_fun(x);
    else if(choice == 2)
        cos_fun(x);
    else if(choice == 3)
        tan_fun(x);
    else if (choice==4 || choice==5 || choice==6)
    {
        if (x > 1 || x< -1)
        {
            cout << "Error : The value must be at limit [-1:1] \n";
            return 0;
        }
        if(choice == 4)
            arcsin_fun(x);
        else if(choice == 5)
            arccos_fun(x);
        else if(choice == 6)
            arctan_fun(x);
    }
    else if(choice == 7)
        exp_fun(x);
    else if(choice == 8)
        ln_fun(x);

    return 0;
}
