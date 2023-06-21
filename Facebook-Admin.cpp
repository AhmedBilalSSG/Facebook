#include <iostream>
#include <string.h>
#include <windows.h>
#include <fstream>
using namespace std;
void Display(){
cout<<"                                ************************************************************************************************************* "<<endl;
cout<<"                                |                                                                                                           | "<<endl;
cout<<"                                |     |||||||||    |||||||     |||||||||   |||||||||      |||||||||    |||||||||   |||||||||   ||    //     | "<<endl;
cout<<"                                |     ||          ||     ||   ||           ||              ||     ||   ||     ||   ||     ||   ||   //      | "<<endl;
cout<<"                                |     ||||||      |||||||||   ||           ||||||||        ||||||||    ||     ||   ||     ||   ||||||       | "<<endl;
cout<<"                                |     ||          ||     ||   ||           ||              ||     ||   ||     ||   ||     ||   ||   ||      | "<<endl;
cout<<"                                |     ||          ||     ||    |||||||||   |||||||||      |||||||||    |||||||||   |||||||||   ||    ||     | "<<endl;
cout<<"                                |___________________________________________________________________________________________________________| "<<endl;
cout<<"                                                                                                                                              "<<endl;
}

void admin_Menu(){
cout<<"                                                                                                                       "<<endl;  
cout<<"                                                        |-----------------------------------------------------------|  "<<endl;                    
cout<<"                                                        | _________________________________________________________ |  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|         -----Adminstrative Control Center-----        |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|            1. Give live chat answer (to user)         |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|            2. Read Reports    (Given by user)         |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|            3. Read suggestion (Given by user)         |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|            4. Send additional notification to user    |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|            5. Exit                                    |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|||||||||||||||||||||||||||||||||||||||||||||||||||||||||-|  "<<endl;
cout<<"                                                        |-----------------------------------------------------------|  "<<endl;
}
void admin_account(){
cout<<"                                                                                                                       "<<endl;  
cout<<"                                                        |-----------------------------------------------------------|  "<<endl;                    
cout<<"                                                        | _________________________________________________________ |  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|         -----Adminstrative Control Center-----        |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|            1. Create Administrator                    |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|            2. Login Adminstrator                      |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|||||||||||||||||||||||||||||||||||||||||||||||||||||||||-|  "<<endl;
cout<<"                                                        |-----------------------------------------------------------|  "<<endl;
}
void loading(int r){
    system("color 9");
    char a = 177, b = 219;
    cout<<"\n";
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t" "          |Loading|         \n\n");
    printf("\t\t\t\t\t\t\t\t\t ");
    for (int i = 0; i < 27; i++)
        printf("%c", a);
    printf("\r");
    printf("\t\t\t\t\t\t\t\t\t ");
    for (int i = 0; i < 27; i++) {
        printf("%c", b);
        Sleep(50);
    }
}

class admin{
    private:
    string admin_id;        // Id can be no or Letters
    string admin_password;

    public:
    Admin(int b , string c){   // to acess private members
        admin_id = b;
        admin_password = c;
    }
    
    void get_admin(){
        mn:
        ofstream admid;
        admid.open("Admin_id.txt");
        cout<<"Enter 4 number Id Alloted : "<<endl;
        cin>>admin_id;
        int lengt = admin_id.length();
        if(lengt == 4){
        admid<<admin_id<<endl;
        }
        else{
            cout<<"Enter only 4 Characters"<<endl;
            Sleep(1000);
            goto mn;
        }
        admid.close();
        qw:
        cout <<"Enter password which must contain :"<<endl;
        cout<<"8 or more than 8 characters."<<endl;
        cout<<"1 upper case , lower case character and 1 digit."<<endl;
        cout <<endl << "Your Password is Weak " << endl<<"Retype a strong Password : ";
        ofstream admpass;
        admpass.open("Admin_password.txt"); 
        cin>>admin_password;
    int lem = admin_password.length();
     for(int i=1; i<=lem; i++){     // to print * 
        cout<<"*";
    }
     int n = admin_password.length();      
    bool hasLower = false, hasUpper = false, hasDigit = false; 
    for (int i = 0; i < n; i++) { 
        if (islower(admin_password[i])) 
            hasLower = true; 
        if (isupper(admin_password[i])) 
            hasUpper = true; 
        if (isdigit(admin_password[i])) 
            hasDigit = true; 
    } 
    if ( hasUpper && hasDigit && hasLower && (n >= 8)) {
        cout<<endl<<"Strong"<<endl;
        admpass<<admin_password<<endl;
        admpass.close();
    }
    else if ((hasLower || hasUpper) && hasDigit && (n >=8)){ 
        cout << "Your Password is Moderate" << endl<<"Retype a strong Password"; 
            goto qw;
    }
    else{
        cout <<"Enter password which must contain :"<<endl;
        cout<<"8 or more than 8 characters."<<endl;
        cout<<"1 upper case , lower case character and 1 digit."<<endl;
        cout <<endl << "Your Password is Weak " << endl<<"Retype a strong Password : "; 
          goto qw;
    }     
    admpass.close();
    }

    void adm_create(){
            Sleep(1000);
            loading(5);
            system("cls");
            Display();
            cout<<"                                                                       ===Connection Scucessful ==="<<endl;
            cout<<"                                                            Enter Admin Information Provided by Facebook "<<endl;
            get_admin();
            loading(5);
            system("cls");
            Display();
            cout<<"                                                                    ==Account Created Scucessfully==";
            Sleep(1000);
    }

    void adm_account(){              // Account Check

        string check_adm1;
        string check_adm2;
        string check_adm3[10];
        string check_adm4[10];

        ifstream admid;
        admid.open("Admin_id.txt",ios::binary);
        ifstream admpass;
        admpass.open("Admin_password.txt", ios::binary); 

        string o , m;

        int i = 0 , j = 0;

        while(admid >> o && i<10){
            check_adm3[i] = o;
                i++;
            }

        while(admpass >> m && j<10){
            check_adm3[j] = m;
                j++;
            }
        admpass.close();
        cout<<"                                                                                Enter Admin id : ";
        cin>>check_adm1;
        cout<<"                                                                             Enter Admin Password : ";
        cin>>check_adm2;

        for(int x=0; x<=10; x++){
            for(int y=0; y<=10; y++){
                if(check_adm3[x] == check_adm1  && check_adm4[y] == check_adm2){   
                cout<<"                                               Please wait connecting to server for admin access "<<endl;
                Sleep(2000);
                cout<<"                                                                  -----Connected-----"<<endl;
                Sleep(1000);
                loading(5);
                system("cls");
                Display();
                }
        
            }
        } 
    }
    void choice(){          // Menu Execution
        yt:
        admin_Menu();
        int y;
        cout<<"                                                                           Enter a option From the Menu : ";
        cin>>y;

        if (y == 1){
            string c[1000];
            string b;
            int v = 0;
            cout<<"                                                                           ===|User Live Chat|==="<<endl; 
            ifstream readlive;
            readlive.open("message.txt",ios::binary | ios::app);

            while(readlive >> b && v < 300){
                c[v] = b;
                v++;
            }

            cout<<"                                                                              User Message : ";
            for(int i = 0; i<=300; i++){ 
                cout<<c[i];
            }
            readlive.close();
        }

        else if(y == 2){
            string d[1000];
            string z;
            int e = 0;
            cout<<"                                                                           ===|Read Reports|==="<<endl;
            ifstream problem1;
            problem1.open("Problem.txt",ios::binary | ios::app);

            while (problem1 >> z && e < 300){
                d[e] = z;
                e++;
            }

            cout<<"                                                                              User Report : ";  
            for(int i = 0; i<=300; i++){
                cout<<d[i];
            }
            problem1.close();
        }

        else if(y == 3){
        cout<<"                                                                             ===|Read Suggestion|==="<<endl;

        string h[1000];
        string j;
        int f = 0;

        ifstream problem2;
        problem2.open("Suggestion.txt",ios::binary | ios::app);

        while (problem2 >> j && f < 300){
                h[f] = j;
                f++;
            } 

        cout<<"                                                                                User Suggestion : ";  
        for(int i = 0; i<=300; i++){
            cout<<h[i];
        }     
    }

        else if(y == 4){
        string notif_txt;
        cout<<"                                                                         ===|Additional Notifications|==="<<endl;
        string l[1000];
        string x;
        int n = 0;

        ofstream problem3;
        problem3.open("notification.txt" , ios::binary | ios::app);

        cout<<"                                                                               Enter Notification : "; 
        cin.ignore();
        getline(cin,notif_txt);
        problem3 << notif_txt <<endl;

        problem3.close();
    }
        else{
            cout<<"                                                                       You entered a wrong Option"<<endl;
            Sleep(999);
            goto yt;
        }
    }
};
int main(){
    system("Color 6");
    admin a;
    Display();
    int d;
    re:
    admin_account();

    ofstream objadm;                                      // Storing Object 
    objadm.open("Object_admin.txt", ios::binary | ios::app);
    objadm.write(reinterpret_cast<char*>(&a), sizeof(a));

    cout<<"                                                                                 Enter a number from Menu : ";
    cin>>d;
    switch(d){

    case 1:
        a.adm_create();
        goto re;
        break;

    case 2:
        a.adm_account();
        loading(5);
        system("cls");
        Display();
        a.choice();
        system("cls");
        Display();
        break;

    default:
        cout<<"                                                                You Choose a wrong Option"<<endl;
        Sleep(2000);
        goto re;
        break;
    }
}