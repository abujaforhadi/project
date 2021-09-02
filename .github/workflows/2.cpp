#include<bits/stdc++.h>
#include<cmath>
#include<windows.h>
#include<conio.h>
using namespace std;

void pa05(int f)
{
    Sleep(500);

    cout<<"\n\t\tPrice ="<<f*.95<<endl;
}
void pa10(int f)
{
    Sleep(500);
    cout<<"\n\t\tPrice ="<<f*.90<<endl;
}
void pa15(int f)
{
    Sleep(500);
    cout<<"\n\t\tPrice ="<<f*.85<<endl;
}

void buy(int d)
{
    cout<<"\t\tUse Promo code to get discount\n"
        <<"\t\tGet 5% discount (AHC05)\n"
        <<"\t\tGet 10% discount (AHC10)\n"
        <<"\t\tGet 15% discount (AHC15)\n";
    string pro;
    cout<<"\n\t\tPromo code : ";
    cin>>pro;
    system("CLS");
    if(pro== "AHC05") pa05(d);
    else if(pro== "AHC10") pa10(d);
    else if(pro== "AHC15") pa15(d);
    else cout<<"\n\t\tRegular price ="<<d<<endl;

}

void samsung()
{
sam:
    cout<<"\t\t1. Samsung Galaxy M32\n"
        <<"\t\t2. Samsung Galaxy A22\n"
        <<"\t\t3. Samsung Galaxy A52\n"
        <<"\t\t4. Samsung Galaxy S21+\n"
        <<"\t\t5. Samsung Galaxy M02\n";

    int p;
    cout<< "\n\t\t Choose : ";
    cin>>p;
    switch(p)
    {
    case 1:
    {
        cout<< "\t\tPrice : 22,999/-"<<endl<<"\n\n\t\t1.Buy\n\t\t2.exit"<<endl;;
        int j;
        cout<< "\t\t Choose : ";

        cin>>j;
        if(j==1)
            buy(22999);
        else
              exit(0);
        break;
    }
    case 2:
    {
        cout<< "\t\tPrice : 21,999/-"<<endl<<"\t\t1.Buy\n\t\t2.exit"<<endl;;
        int j;
        cout<< "\t\t Choose : ";

        cin>>j;
        if(j==1)
            buy(21999);
        else exit(0);
        break;
    }

    case 3:
    {
        cout<< "\t\tPrice : 33,999/-"<<endl<<"\t\t1.Buy\n\t\t2.exit"<<endl;;
        int j;
        cout<< "\t\t Choose : ";

        cin>>j;
        if(j==1)
            buy(33999);
        else exit(0);
        break;
    }

    case 4:
    {
        cout<< "\t\tPrice : 122,999/-"<<endl
            <<"\t\t1.Buy\n\t\t2.exit"<<endl;;
        int j;
        cout<< "\n\t\t Choose : ";

        cin>>j;
        if(j==1)
            buy(122999);
        else exit(0);
        break;
    }
    case 5:
    {
        cout<< "\t\tPrice : 9,599/-"<<endl<<"\t\t1.Buy\n\t\t2.exit"<<endl;;
        int j;
        cout<< "\t\t Choose : ";

        cin>>j;
        if(j==1)
            buy(9599);
        else exit(0);
        break;
    }
    default :
        cout<<"\n\t\tWRONG !!"<<endl;
        goto sam;

    }
}
void xiaomi()
{
mi:
    cout<<"\t\t1. Xiaomi Mi 11 Lite \n"<< "\t\t2. Xiaomi Redmi Note 8 2021\n"
        <<"\t\t3. Xiaomi Redmi Note 10pro max\n"<<"\t\t4. Xiaomi Poco M2 Pro (5G)\n"
        <<"\t\t5. Xiaomi Poco M3 \n"
        << "\t\t6. Xiaomi Redmi 9power\n";

    int p;
    cout<< "\t\t Choose : ";
    cin>>p;
    switch(p)
    {
    case 1:
    {
        cout<< "\t\tPrice : 29,999/-"<<endl<<"\t\t1.Buy\n\t\t2.exit"<<endl;;
        int j;
        cout<< "\t\t Choose : ";

        cin>>j;
        if(j==1)
            buy(29999);
        else exit(0);
        break;
    }
    case 2:
    {
        cout<< "\t\tPrice : 17,999/-"<<endl<<"\t\t1.Buy\n\t\t2.exit"<<endl;;
        int j;
        cout<< "\t\t Choose : ";

        cin>>j;
        if(j==1)
            buy(17999);
        else exit(0);
        break;
    }

    case 3:
    {
        cout<< "\t\tPrice : 30,999/-"<<endl<<"\t\t1.Buy\n\t\t2.exit"<<endl;;
        int j;
        cout<< "\t\t Choose : ";

        cin>>j;
        Sleep(500);
        if(j==1)
            buy(30999);
        else exit(0);
        break;
    }

    case 4:
    {
        cout<< "\t\tPrice : 14,999/-"<<endl<<"\t\t1.Buy\n\t\t2.exit"<<endl;;
        int j;
        cout<< "\t\t Choose : ";

        cin>>j;
        if(j==1)
            buy(14999);
        else exit(0);
        break;
    }
    case 5:
    {
        cout<< "\t\tPrice : 14,999/-"<<endl<<"\t\t1.Buy\n\t\t2.exit"<<endl;;
        int j;
        cout<< "\t\t Choose : ";

        cin>>j;
        if(j==1)
            buy(14999);
        else exit(0);
        break;
    }
    case 6:
    {
        cout<< "\t\tPrice : 18,999/-"<<endl<<"\t\t1.Buy\n\t\t2.exit"<<endl;;
        int j;
        cout<< "\t\t Choose : ";

        cin>>j;
        if(j==1)
            buy(18999);
        else exit(0);
        break;
    }
    default :
        cout<<"\n\t\tWRONG !!"<<endl;
        goto mi;

    }

}
void Realme()
{

    cout<<"\t\t1. Realme 8 5G\n"<< "\t\t2. Realme C20A \n"<<"\t\t3. Realme C25s\n"<<"\t\t4. Realme 8 Pro \n"
        <<"\t\t5. Realme Narzo 30A\n"
        << "\t\t6. Realme 8 \n";
R:
    int p;
    cout<< "\t\t Choose : ";
    cin>>p;
    switch(p)
    {
    case 1:
    {
        cout<< "\t\tPrice : 24,990/-"<<endl<<"\t\t1.Buy\n\t\t2.exit"<<endl;;
        int j;
        cout<< "\t\t Choose : ";

        cin>>j;
        if(j==1)
            buy(24990);
        else exit(0);
        break;
    }
    case 2:
    {
        cout<< "\t\tPrice : 8,990/-"<<endl<<"\t\t1.Buy\n\t\t2.exit"<<endl;;
        int j;
        cout<< "\t\t Choose : ";

        cin>>j;
        if(j==1)
            buy(8990);
        else exit(0);
        break;
    }

    case 3:
    {
        cout<< "\t\tPrice : 14,990/-"<<endl<<"\t\t1.Buy\n\t\t2.exit"<<endl;;
        int j;
        cout<< "\t\t Choose : ";

        cin>>j;
        if(j==1)
            buy(14490);
        else exit(0);
        break;
    }

    case 4:
    {
        cout<< "\t\tPrice : 22,999/-"<<endl<<"\t\t1.Buy\n\t\t2.exit"<<endl;;
        int j;
        cout<< "\t\t Choose : ";

        cin>>j;
        if(j==1)
            buy(22999);
        else exit(0);
        break;
    }
    case 5:
    {
        cout<< "\t\tPrice : 12,990/-"<<endl<<"\t\t1.Buy\n\t\t2.exit"<<endl;;
        int j;
        cout<< "\t\t Choose : ";

        cin>>j;
        if(j==1)
            buy(12990);
        else exit(0);
        break;
    }
    case 6:
    {
        cout<< "\t\tPrice : 22,990/-"<<endl<<"\t\t1.Buy\n\t\t2.exit"<<endl;;
        int j;
        cout<< "\t\t Choose : ";

        cin>>j;
        if(j==1)
            buy(22990);
        else exit(0);
        break;
    }
    default :
        cout<<"\n\t\tWRONG !!"<<endl;
        goto R;

    }
}
void walton()
{

    cout<<"\t\t1. Walton Primo RX8 Mini \n"<< "\t\t2. Walton Primo ZX4\n"
        <<"\t\t3. Walton Primo NF5\n"<<"\t\t4. Walton Primo S7 Pro\n"<<"\t\t5. Walton Primo RX7 Mini\n"
        << "\t\t6. Walton Primo HM6 \n";
w:
    int p;
    cout<< "\t\t Choose : ";
    cin>>p;
    switch(p)
    {
    case 1:
    {
        cout<< "\t\tPrice : 12,999/-"<<endl<<"\t\t1.Buy\n\t\t2.exit"<<endl;;
        int j;
        cout<< "\t\t Choose : ";

        cin>>j;
        if(j==1)
            buy(12999);
        else exit(0);
        break;
    }
    case 2:
    {
        cout<< "\t\tPrice : 26,999/-"<<endl<<"\t\t1.Buy\n\t\t2.exit"<<endl;;
        int j;
        cout<< "\t\t Choose : ";

        cin>>j;
        if(j==1)
            buy(26999);
        else exit(0);
        break;
    }

    case 3:
    {
        cout<< "\t\tPrice : 9,969/-"<<endl<<"\t\t1.Buy\n\t\t2.exit"<<endl;;
        int j;
        cout<< "\t\t Choose : ";

        cin>>j;
        if(j==1)
            buy(9969);
        else exit(0);
        break;
    }

    case 4:
    {
        cout<< "\t\tPrice : 19,499/-"<<endl<<"\t\t1.Buy\n\t\t2.exit"<<endl;;
        int j;
        cout<< "\t\t Choose : ";

        cin>>j;
        if(j==1)
            buy(19499);
        else exit(0);
        break;
    }
    case 5:
    {
        cout<< "\t\tPrice : 9,599/-"<<endl<<"\t\t1.Buy\n\t\t2.exit"<<endl;;
        int j;
        cout<< "\t\t Choose : ";

        cin>>j;
        if(j==1)
            buy(9599);
        else exit(0);
        break;
    }
    default :
        cout<<"\n\t\tWRONG !!"<<endl;
        goto w;

    }

}


int main()
{
    cout<<"\n\n\t\t *** WELCOME TO OUR ONLINE SHOP ***\n"<<endl<<"\t\t * * * JHR MOBILE SHOP * * * \n\n";
    string username,password,location,mobile;

    cout<<"\n\n\n\t\t*** Create Account ***\n\n"<<endl;

    cout<<"\t\tEnter new username: ";

    cin>>username;

    cout<<"\t\tEnter new password: ";

    cin>>password;
    cout<<"\t\tEnter your Mobile number: ";
    cin>>mobile;
    cout<<"\t\tEnter your location: ";
    cin >> location;

    cout<<"\t\tYour new id is creating please wait";


    for(int i=0; i<6; i++)

    {

        cout<<".";

        Sleep(500);

    }

    cout<<"\n\t\tYour id created successfully";

    Sleep(1500);
    system("CLS");
start:



    string username1,password1;


    cout<<"\n\n\n\t\t   *** LOGIN ***\n\n"<<endl;

    cout<<"\t\tEnter username: ";

    cin>>username1;

    cout<<"\t\tEnter password: ";

    cin>>password1;
    cout<<"\n\t\tLogging .";
    for(int i=0; i<6; i++)

    {

        cout<<".";

        Sleep(500);

    }


    if((username==username1)&& password == password1)
    {
        system("CLS");

        cout<<"\n\n\t\t *** WELCOME TO OUR ONLINE SHOP ***\n"<<endl
            <<"\t\t* * * * Online MOBILE SHOP* * * *\n\n";


menu:
        cout<<"\t\t* * * * Company List* * * *\n\n"<<
            "\t\t1. SAMSUNG Bangladesh\n"<<
            "\t\t2. Xiaomi Mobile Bangladesh\n"<<
            "\t\t3. Realme Mobile Bangladesh\n"<<
            "\t\t4. Walton Mobile Bangladesh\n"
            << "\n\n\t\tChoice your option : ";
        int a;

        cin>>a;
        system("CLS");
        cout<< "\n\t\tWhich Mobile  Mobile Do You Want to Buy ?\n\n";
        switch(a)
        {
        case 1:
        {
            samsung();
            break;
        }



        case 2:
        {
            xiaomi();

            break;
        }




        case 3:
        {
            Realme();

            break;
        }

        case 4:
        {
            walton();

            break;
        }
        default :
            cout<<"\n\t\tWRONG !!"<<endl;
            goto menu;

        }
        cout<<"\n\n\t\t\tPurchase Confirm\n\t\t1.  Yes  \n\t\t2.  No \n\t\t";
        int str;
        cout<<"\n\t\tChoose : ";
        cin>>str;
        system("CLS");
        if(str==1)
        {
            cout<<"\n\t\tcustomer Info: \n\t\tName : "<<username<<"\n\t\tlocation: "<<location<<"\n\t\tMobile No: "<<mobile;

            Sleep(1500);
            cout<<"\n\tThank You for Purchased Product from us You will get your Product within 3 to 10 working days.";
        }
        else
        {
            Sleep(1500);
            cout<<"\n\t\t ***** THANKS *****\n\n\t\t*** Stay With Us ***";
            exit(0);
        }
        cout<<"\n\n\n\t\t *** Stay With Us ***";

        getch();
    }
    else
    {
        cout<< "\t\tTry again";
        goto start;
    }


}
