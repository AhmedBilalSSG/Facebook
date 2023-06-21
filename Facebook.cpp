#include <iostream>
#include <string.h>
#include <windows.h>
#include <fstream> 
#include <algorithm>
#include <ctime>
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

void Developer(){
    cout<<"                                            Developer : Ahmed Bilal Bhatti        SID : F2021376088                Section : Y1         "<<endl;
    cout<<"                                                                                                                                        "<<endl;
}

void Welcome(){
cout<<"                                                                                                                                               "<<endl;
cout<<"                                                                               PRESENTING YOU                                                  "<<endl;
cout<<"                                                                                                                                               "<<endl;
}

void menu(){
cout<<"                                                                                                                       "<<endl;  
cout<<"                                                        |-----------------------------------------------------------|  "<<endl;                    
cout<<"                                                        | _________________________________________________________ |  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|                1. Login to Facebook                   |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|                2. Create a free account               |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|                3. Forgot Password                     |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|                4. Exit                                |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|||||||||||||||||||||||||||||||||||||||||||||||||||||||||-|  "<<endl;
cout<<"                                                        |-----------------------------------------------------------|  "<<endl;
}

void menu2(){
cout<<"                                                                                                                       "<<endl;
cout<<"                                                        |-----------------------------------------------------------|  "<<endl;
cout<<"                                                        | _________________________________________________________ |  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|                1. See Your Profile                    |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|                2. Create Post / Add Other info        |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|                3. Notifications                       |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|                4. Go Live                             |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|                5. Settings                            |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|                6. Exit                                |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|||||||||||||||||||||||||||||||||||||||||||||||||||||||||-|  "<<endl;
cout<<"                                                        |-----------------------------------------------------------|  "<<endl;
}

void setting_menu(){
cout<<"                                                                                                                       "<<endl;  
cout<<"                                                        |-----------------------------------------------------------|  "<<endl;                    
cout<<"                                                        | _________________________________________________________ |  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|              -----Facebook Settings-----              |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|                1. Edit Personal Info                  |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|                2. Help Center                         |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|                3. LogOut                              |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|                4. Exit                                |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|||||||||||||||||||||||||||||||||||||||||||||||||||||||||-|  "<<endl;
cout<<"                                                        |-----------------------------------------------------------|  "<<endl;
}

void Problem_Menu(){
cout<<"                                                                                                                       "<<endl;  
cout<<"                                                        |-----------------------------------------------------------|  "<<endl;                    
cout<<"                                                        | _________________________________________________________ |  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|                 -----Help Center-----                 |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|                1. Contact us                          |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|                2. Report a Problem                    |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|                3. Give a Suggestion                   |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|                4. Exit                                |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|||||||||||||||||||||||||||||||||||||||||||||||||||||||||-|  "<<endl;
cout<<"                                                        |-----------------------------------------------------------|  "<<endl;
}

void menu3(){
cout<<"                                                                                                                       "<<endl;
cout<<"                                                        |-----------------------------------------------------------|  "<<endl;
cout<<"                                                        | _________________________________________________________ |  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|                 -----Edit Center-----                 |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|                1. Delete & Add New user name          |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|                2. Delete & Add new Bio                |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|                3. Delete Date of Birth                |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|                4. Edit Gender                         |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|                5. Delete all Post                     |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|                6. Clear Notifications                 |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|                7. Delete & Add New Hobbies            |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|                8. Delete & Add Professional info      |-|  "<<endl;
cout<<"                                                        |-|                                                       |-|  "<<endl;
cout<<"                                                        |-|                9. Exit                                |-|  "<<endl;
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

void one(){
cout<<"                    ||       "<<endl;
cout<<"                  ||||       "<<endl;      
cout<<"                 || ||       "<<endl;        
cout<<"                    ||       "<<endl;          
cout<<"                    ||       "<<endl;
cout<<"                 ||||||||    "<<endl;
} 
void two(){
cout<<"                   |||||     "<<endl;
cout<<"                  ||   ||    "<<endl;      
cout<<"                      ||     "<<endl;        
cout<<"                    |||      "<<endl;          
cout<<"                   ||        "<<endl;
cout<<"                  ||||||||   "<<endl;
}
void three(){
cout<<"                  ||||||||   "<<endl;
cout<<"                        ||   "<<endl;      
cout<<"                        ||   "<<endl;        
cout<<"                     |||||   "<<endl;          
cout<<"                        ||   "<<endl;
cout<<"                        ||   "<<endl;
cout<<"                  ||||||||   "<<endl;
}

void Loading2(int v){
    for(int i=0; i<=5; i++){
        for(int j=0; j<=v; j++){
            cout<<" *";
        }
        cout<<endl;
        Sleep(1400);
    }
}

void loading3(){
        for(int i=0; i<=100; i++){
        cout<<"                                                                      Loading ";
        cout<<i;
        cout<<" %";
        system("cls");
        }
}

// Start of main Program 
// class 1
class Hobbies {
public:
    int s;
    char ty;
    string h1 = "Listening to Music";
    string h2 = "Travelling";
    string h3 = "Reading";
    string h4 = "Driving";
    string h5 = "Going to the GYM";
    string h6 = "Audio Production";
    string h7 = "Eating";
    string h8 = "Cooking";
    string h9 = "Basketball";
    string h10 = "Swimming";
    string h11 = "Painting";
    string h12 = "Photography";
    string h13 = "Gardening";
    string h14 = "Playing Video Games";
    string h15 = "Writing";
    string custom_hobby;

    void display_hobb() {
        cout << "                                                                 " << "---Add Hobbies---                           " << endl;
        cout << "                                  " << "What do you love to do? Choose from the popular hobbies below or add others." << endl;
        cout << "                                                                                                                 " << endl;
        cout << "                                                                 " << "1. " << h1 << endl;
        cout << "                                                                 " << "2. " << h2 << endl;
        cout << "                                                                 " << "3. " << h3 << endl;
        cout << "                                                                 " << "4. " << h4 << endl;
        cout << "                                                                 " << "5. " << h5 << endl;
        cout << "                                                                 " << "6. " << h6 << endl;
        cout << "                                                                 " << "7. " << h7 << endl;
        cout << "                                                                 " << "8. " << h8 << endl;
        cout << "                                                                 " << "9. " << h9 << endl;
        cout << "                                                                 " << "10. " << h10 << endl;
        cout << "                                                                 " << "11. " << h11 << endl;
        cout << "                                                                 " << "12. " << h12 << endl;
        cout << "                                                                 " << "13. " << h13 << endl;
        cout << "                                                                 " << "14. " << h14 << endl;
        cout << "                                                                 " << "15. " << h15 << endl;
        cout << "                                                                                                                  " << endl;
        cout << "                                                                 " << "16. " << "Type Custom Hobby" << endl;
    }

    void add_hobby() {
        ofstream hobby;
        hobby.open("Hobby.txt", ios::binary | ios::app);
    xc:
        display_hobb();
        cout << "                                                                                                 " << endl;
        do {
            cout << "                                                           " << "Enter a hobby from the menu by selecting a number: ";
            cin >> s;
            if (s == 1) {
                hobby << h1 << endl;
            }
            else if (s == 2) {
                hobby << h2 << endl;
            }
            else if (s == 3) {
                hobby << h3 << endl;
            }
            else if (s == 4) {
                hobby << h4 << endl;
            }
            else if (s == 5) {
                hobby << h5 << endl;
            }
            else if (s == 6) {
                hobby << h6 << endl;
            }
            else if (s == 7) {
                hobby << h7 << endl;
            }
            else if (s == 8) {
                hobby << h8 << endl;
            }
            else if (s == 9) {
                hobby << h9 << endl;
            }
            else if (s == 10) {
                hobby << h10 << endl;
            }
            else if (s == 11) {
                hobby << h11 << endl;
            }
            else if (s == 12) {
                hobby << h12 << endl;
            }
            else if (s == 13) {
                hobby << h13 << endl;
            }
            else if (s == 14) {
                hobby << h14 << endl;
            }
            else if (s == 15) {
                hobby << h15 << endl;
            }
            else if (s == 16) {
                cout << "Enter your custom hobby here: ";
                cin.ignore();
                getline(cin, custom_hobby);
                hobby << custom_hobby << endl;
            }
            else {
                cout << "Select the right option" << endl;
                Sleep(2000);
                goto xc;
            }
            cout << "Do you want to enter another hobby? (Y/N): ";
            cin >> ty;
        } while (ty == 'Y' || ty == 'y');
    }

    void show_hobby() {
        cout << "                                                                                             " << endl;
        cout << "                                                                        " << " ===|Hobbies|=== " << endl;
        cout << "                                                                                             " << endl;
        ifstream hobby;
        hobby.open("Hobby.txt", ios::binary);
        hobby.seekg(0);
        while (getline(hobby, h1)) {
            cout << "                                                                " << h1 << endl;
        }
    }
};

// Inherited Class 2
class professional : public Hobbies{
    private:
    string prof_info;

    public:
    Professional(string prof_info){
        this->prof_info = prof_info;
    }

    ~ professional(){}         // Destructor

    void profession_info(){
        ofstream profesh;
        profesh.open("Professional_profile.txt" , ios::binary | ios::app);
        cout<<"Enter profession Details here: ";
        cin.ignore();
        getline(cin,prof_info);
        profesh << prof_info <<endl;
        profesh.close();
    }

    void show_profession(){
        ifstream profesh;
        profesh.open("Professional_profile.txt" , ios::binary);
        cout<<"                                                                                              "<<endl;
        cout<<"                                                                  "<<  "  ===|Professional Info|===                         "<<endl;
        cout<<"                                                                                              "<<endl;
        profesh.seekg(0);
        while(getline(profesh,prof_info)){
            profesh >> prof_info;
            cout<<"                                                                          "<<prof_info<<endl;
        }
        profesh.close();  
    }
};

// Inherited Class 3
class notification : public professional {
public:
    string n1 = "Your account is created. Welcome to Facebook";
    string n2 = "You started a live Video";
    string n3 = "You logged out of your Account";
    string n4 = "You accessed Help Center";
    string n5 = "Your New Password was saved";
    string n6 = "You logged into your account";
    string n7 = "Thank you for sending a suggestion";
    string n8 = "We are sorry you faced a problem. Your Report was sent";
    string n9 = "Your Previous Posts were deleted";
    string n10 = "Your Username was removed and updated";
    string n11 = "Your Bio was removed and updated";
    string n12 = "Your Date of Birth was removed and updated";
    string n13 = "Your Gender was updated";
    string n14 = "Your Hobbies were removed and updated";
    string n15 = "Professional Information was removed and updated";

    void save_notification(const string& message) {
        time_t currentTime = time(0);
        char* dt = ctime(&currentTime);
        dt[strlen(dt) - 1] = '\0';  // Remove the newline character
        
        ofstream notify("notification.txt", ios::app);
        if (notify.is_open()) {
            notify << "[" << dt << "] " << message << " ";
            notify.close();
        } else {
            cout << "Error saving the notification." << endl;
        }
    }

    void acc_cre() {
        save_notification(n1);
    }

    void live_start() {
        save_notification(n2);
    }

    void log_out() {
        save_notification(n3);
    }

    void help_center() {
        save_notification(n4);
    }

    void new_pass_noti() {
        save_notification(n5);
    }

    void logged_in() {
        save_notification(n6);
    }

    void send_sugges() {
        save_notification(n7);
    }

    void send_report() {
        save_notification(n8);
    }

    void del_post_not() {
        save_notification(n9);
    }

    void del_username() {
        save_notification(n10);
    }

    void del_bio() {
        save_notification(n11);
    }

    void del_Date_of_birth() {
        save_notification(n12);
    }

    void del_Gendar() {
        save_notification(n13);
    }

    void del_Hobbies() {
        save_notification(n14);
    }

    void del_Prof_info() {
        save_notification(n15);
    }

    void show_notif() {
        ifstream notify("notification.txt");
        if (notify.is_open()) {
            string notification;
            while (getline(notify, notification)) {
                cout << "                                                  " << notification << endl;
            }
            notify.close();
        } else {
            cout << "Error opening the notification file." << endl;
        }
    }
};


// Inherited Class 4
class post : public notification{
    public:
    int j;
    int g;
    int h;
    string main_heading;
    string title;
    string title1;
    string title2;
    string posttxt;  

    void type_post(){
    
        cout<<"Press Enter when you are done writing post"<<endl;
        cout<<"Write your post here:";
        ofstream post;
        post.open("posts.txt" , ios::binary | ios::app);
        cin.ignore();
        getline(cin,posttxt);
        post << posttxt <<endl;
        post.close();
        loading3();
        cout<<"-------- Post Creation Scucessful --------"<<endl;
        Sleep(999);
        system("cls");
        Display();
    }

void show_post() {
    ifstream post;
    post.open("posts.txt");

    if (!post.is_open()) {
        cout << "Error opening the file." << endl;
        return;
    }

    cout <<"                                                                   "<< "=======| POSTS |=======" << endl;
    string posttxt;
    bool hasPosts = false;

    while (getline(post, posttxt)) {
        cout << posttxt << endl;
        hasPosts = true;
    }

    if (!hasPosts) {
        cout <<"                                                          "<< "There are no posts. Your post will appear here." << endl;
    }

    post.close();
}


void create_graph() {
    ofstream gpost("graph.txt");

    if (!gpost) {
        cout << "Error creating the graph." << endl;
        return;
    }

    cout << "=== Create your graph in post ===" << endl;
    cout << "Enter a main name for your graph: ";
    cin >> main_heading;
    gpost << main_heading << endl;

    cout << "Enter name of your graph: ";
    cin >> title;

    int g;
    do {
        cout << "Enter percentage to show via Graph" << endl;
        cout << "Your graph would range between 0 to 100" << endl;
        cout << "Note: Percentage must be smaller or equal to 100" << endl;
        cin >> g;
    } while (g > 100);

    gpost << title << endl;
    gpost << g << endl;

    cout << "Enter name of your 2nd graph: ";
    cin >> title1;

    int h;
    do {
        cout << "Enter percentage to show via Graph" << endl;
        cout << "Your graph would range between 0 to 100" << endl;
        cout << "Note: Percentage must be smaller or equal to 100" << endl;
        cin >> h;
    } while (h > 100);

    gpost << title1 << endl;
    gpost << h << endl;

    cout << "Enter name of your 3rd graph: ";
    cin >> title2;

    int j;
    do {
        cout << "Enter percentage to show via Graph" << endl;
        cout << "Your graph would range between 0 to 100" << endl;
        cout << "Note: Percentage must be smaller or equal to 100" << endl;
        cin >> j;
    } while (j > 100);

    gpost << title2 << endl;
    gpost << j << endl;

    gpost.close();

    cout << "=== Your post is Created ===" << endl;
    Sleep(1999);
}

void show_graph() {
    ifstream gpost("graph.txt");

    if (!gpost) {
        cout << "There is no graph information." << endl;
        return;
    }

    cout <<"                                                                   "<< "=========================" << endl;

    string main_heading;
    if (getline(gpost, main_heading)) {
        cout<<"                                                                  " << "|===|" << main_heading << "|===|" << endl;
    }

    string title;
    int g;
    if (gpost >> title >> g) {
        cout <<"                                   "<< title << "  " << g << "     ";
        for (int i = 0; i <= g; i++) {
            cout << "*";
            Sleep(30);
        }
        cout << endl;
    }

    string title1;
    int h;
    if (gpost >> title1 >> h) {
        cout<<"                                    " << title1 << "   " << h << "     ";
        for (int i = 0; i <= h; i++) {
            cout << "*";
            Sleep(30);
        }
        cout << endl;
    }

    string title2;
    int j;
    if (gpost >> title2 >> j) {
        cout <<"                                   "<< title2 << "   " << j << "     ";
        for (int i = 0; i <= j; i++) {
            cout << "*";
            Sleep(30);
        }
        cout << endl;
    }

    gpost.close();
}
};

// Inherited class 5
class bio : public post{               // Bring it on class for Profile
  public:
  string biotxt;
  string biotxt2;
  int rr;

  void get_bio(){                // To get User Input
  do{
  cout<<"                                                                              Enter Your Bio"<<endl;
  cout<<"                                       "<<endl;
    ofstream bio;            // Creating File to Store Data 
    bio.open("bio_profile.txt",ios::binary |ios::app);
  // Line 1
  cout<<"                                                                              Enter Line :";
    cin.ignore();
    getline(cin,biotxt);
    bio << biotxt <<endl;
    bio.close();
    cout<<"                                                                            Enter 1 to enter Bio again or Enter Any key to exit"<<endl;
    cin>>rr;
  }while(rr == 1);
  cout<<"                                                                              Your bio was Saved"<<endl;
  Sleep(2000);
} 

  void show_bio(){           // To show Bio in Profile
    ifstream bio;            // Opening file in Reading File to Store Data 
    bio.open("bio_profile.txt",ios::binary);
    cout<<"                                                                                               "<<endl;
    cout<<"                                                                        "<<"--------Bio--------"<<endl;
    cout<<"                                                                                               "<<endl;
    bio.seekg(0);
    while (getline(bio,biotxt)){
    cout<<"                                                                           "<<biotxt<<endl;
    }    
  }
};

// inherited Class 6
class new_account : public bio{
    private:
    string mobile_no_email;
    string Password;
    string Question;

    public:
    string First_Name;
    string Last_Name;
    int Date;       // using unsigned int so user can only add + values
    int Month;
    int year;
    bool Gender;             // Male == True ,  Female == False 

    New_account(string a , string b , string c){      // using constructor to acess private members only in class
     mobile_no_email = a;
     Password = b;
     Question = c;
    }

    void get_password(){   // Password
    ofstream passf;
    passf.open("Password.txt", ios::binary | ios::app);
    retry:
    cout<<"                                                                           8 or more than 8 characters."<<endl;
    cout<<"                                                                           1 upper case , lower case character and 1 digit."<<endl;
    cout<<"                                                                           Enter password which must contain :";
    cin>>Password;
    cout<<"                                                                                       "<<endl;
   
    system("cls");
    Display();
    int len=Password.length();
    for(int i=1; i<=len; i++){
        cout<<"*";
    }
    int n = Password.length();      
    bool hasLower = false, hasUpper = false, hasDigit = false; 
    for (int i = 0; i < n; i++) { 
        if (islower(Password[i])) 
            hasLower = true; 
        if (isupper(Password[i])) 
            hasUpper = true; 
        if (isdigit(Password[i])) 
            hasDigit = true; 
    } 
    if ( hasUpper && hasDigit && hasLower && (n >= 8)) {
        cout<<endl<<"                                             "<<                                       "--- Strong Password ---"<<endl;
        passf<<Password<<endl;
    }
    else if ((hasLower || hasUpper) && hasDigit && (n >=8)){ 
        cout << "Your Password is Moderate" << endl<<"Retype a strong Password"; 
            goto retry;
    }
    else{
        cout <<"Enter password which must contain :"<<endl;
        cout<<"8 or more than 8 characters."<<endl;
        cout<<"1 upper case , lower case character and 1 digit."<<endl;
        cout <<endl << "Your Password is Weak " << endl<<"Retype a strong Password : "; 
          goto retry;
    }
    passf.close();
    }

    void get_username(){   // User name
        ofstream username;
        username.open("User_name.txt",ios::binary | ios::app);
        cout<<"                                                                           Enter First name : ";
        cin>>First_Name;
        username<<First_Name<<endl;
        cout<<"                                                                           Enter Last name : ";
        cin>>Last_Name;
        username<<Last_Name<<endl;
        username.close();
        }

    bool isChar(char c){
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
    }

    bool is_valid(string mobile_no_email){

    int At = -1, Dot = -1;

     if (!isChar(mobile_no_email[0])) {
        return 0;
    }

    for (int i = 0;
         i <= mobile_no_email.length(); i++) {
        if (mobile_no_email[i] == '@') {
  
            At = i;
        }
        else if (mobile_no_email[i] == '.') {
            Dot = i;
        }
    }
    if (At == -1 || Dot == -1)
        return 0;
  
    if (At > Dot)
        return 0;
  
    return !(Dot >= (mobile_no_email.length() - 1));
}

    void get_email(){    // Gmail
        bk:
        ofstream mail;
        mail.open("Gmail.txt",ios::binary | ios::app);
        yu:
        cout<<"                                                                       Enter phone number /  Email Address: ";
        cin.ignore();
        getline(cin,mobile_no_email);

    bool ans = is_valid(mobile_no_email);
  
    if (ans) {
        mail<<mobile_no_email<<endl;
    }
    else {
        cout << mobile_no_email << " : " << "invalid Email" << endl;
        Sleep(999);
        goto bk;
    }
}


bool aisChar(char c){
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
    }

    bool ais_valid(string Question){
    int At = -1, Dot = -1;

     if (!aisChar(Question[0])) {
        return 0;
    }

    for (int i = 0;
         i <= Question.length(); i++) {
        if (Question[i] == '@') {
  
            At = i;
        }
        else if (Question[i] == '.') {
            Dot = i;
        }
    }
    if (At == -1 || Dot == -1)
        return 0;
  
    if (At > Dot)
        return 0;
  
    return !(Dot >= (Question.length() - 1));
}

    void get_Question(){  // Birthday
    ghh:
    ofstream Quest;
    Quest.open("Question.txt",ios::binary | ios::app); 
    cout<<"                                                                            Enter Recovery Email Adress : ";
    cin>>Question;
    bool ans = is_valid(Question);
  
    if (ans) {
        Quest<<Question<<endl; 
    }
    else {
        cout<<"                                                               " << Question << " : " << "invalid Email" << endl;
        Sleep(999);
        goto ghh;
    } 
}

    void get_Birthday(){
    ofstream birthday;
    birthday.open("Birthday.txt",ios::binary | ios::app); 
    cout<<"                                                                                                   "<<endl;
    da:
    cout<<"                                                                            Enter Date of Birth : "; 
    cout<<"                                                                                                    "<<endl;
    cout<<"                                                                              1. Date : ";
    cin>>Date;
    // Exception Handeling
    if(1<= Date <= 31 && 0<= Date){
       birthday << Date << endl;
       cout<<"                                                                           2. Month (In Numbers) : ";
    }
    else{
        cout<<"                                                                        Enter Correct Date "<<endl;;
        goto da;
    }
    mo:
    cin>>Month;

    if(Month == 1 || Month == 2 || Month == 3 || Month == 4 || Month == 5 || Month == 6 || Month == 7 || Month == 8 || Month == 9 || Month == 10 || Month == 11 || Month == 12 && 0<= Month){
       birthday <<Month <<endl;
       cout<<"                                                                           3. Year : ";
    }

    else{
        cout<<"                                                                        Invalid Month"<<Month<<endl;
        cout<<"                                                                        Enter Correct Month";
        Sleep(999);
        goto mo;
    }
    yr:
    cin>>year;
   
    if(1800 <= year <= 3000 && 0<= year){
    birthday<< year <<endl;
    }

    else{
        cout<<"                                                                        Invalid Year"<<endl;
        Sleep(999);
        cout<<"                                                                        Enter Right Year :";
        goto yr;
    }
    birthday.close();
    }

    void get_data(){    // To collect Data and store in txt file
    get_username();
    get_email();
    get_password();
    get_Question();
    get_Birthday();  
    ofstream Gendar;
    Gendar.open("Gendar.txt");
    cout<<"                                                                         "<<endl;
    cout<<"                                                                              Enter 0 for Female"<<endl;
    cout<<"                                                                              Enter 1 for Male"<<endl;
    cout<<"                                                                              Enter any other number for Custom"<<endl;
    cout<<"                                                                                                                    "<<endl;
    cout<<"                                                                              Enter a Option :";
    cin>>Gender;      
    Gendar<<Gender<<endl;
    acc_cre();
    cout<<"                                                                                ----Account Created Sucessfully----";
    Sleep(999);
    Gendar.close();
    }
    // Now creating Function to show Info

    void show_username(){
    ifstream username;
    username.open("User_name.txt",ios::binary );
        username >> First_Name >> Last_Name;
        cout<<"                                                                 "<<"User Name: "<< First_Name<<" "<< Last_Name << endl;
        username.close();   
    }

    void show_birthday(){
    ifstream birthday;
    birthday.open("Birthday.txt",ios::binary);
    birthday >> Date;
    birthday >> Month;
    birthday >> year;
    cout<<"                                                                 "<<"Date of Birth: "<<Date <<"/"<< Month <<"/"<< year << endl;  
    birthday.close();
    }

    void show_Data(){    // To show user Profile Info
    show_username();
    show_username();
    cout<<"                                                                                                                       "<<endl;
    ifstream infile;
    infile.open("newuser.txt");
    infile >> Gender;
    if (Gender == 1){
        cout<<"                                                                 "<<"Gender: "<<"Male"<<endl;
    }
    else if (Gender == 0){
        cout<<"                                                                 "<<"Gender: "<<"Female"<<endl;
    }
    else{
        cout<<"                                                                  "<<"Gender: "<<"Other"<<endl;
    }
    infile.close();
    }
};

// Inherited Class 7
class login : public new_account{

 private:
 string mobile_number_email;
 string passcode;

 public:                            
  Login(string a , string b){    // using constructor to acess private members only in class
   mobile_number_email = a;
   passcode = b;
 }

  void account_check(){         // To check for Entered Data
  char k;
  int s;
  string checklist [10];
  string checklist2 [20];
  string n , m ;
  int i=0, j=0 ;

  ifstream mail;
  mail.open("Gmail.txt",ios::binary |ios::app );
  ifstream passf;
  passf.open("Password.txt", ios::binary | ios::app);

  mail.seekg(0);
  passf.seekg(0);

  while (mail >> n && i < 10){
        checklist[i] = n;
         i++;
  }

  while ( passf >> m  && j < 15){
         checklist2[j] = m;
         j++;
      }
  cout<<"                                                                                Enter Email / Phone number : ";
  cin>>mobile_number_email;
  cout<<"                                                                                    Enter Your Password : ";
  cin>>passcode;

        for ( int y=0; y<=20; y++ ){
           for ( int z=0; z<=20; z++){
               if (( mobile_number_email == checklist[y]) && (passcode == checklist2[z])){       // Compare Email && Password 
                mai:
            system("cls");
            Display();
            menu2();
            logged_in();
            cout<<"                                                             Enter the Number of Menu you want to Execute: ";
            cin>>s;
    switch(s){ 
            // Start Menu 1
            case 1:
                    loading(5);
                    system("cls");
                    Display();
                    cout<<"                                                                    Your Profile Information"<<endl;
                show_Data(); 
                show_profession();
                show_bio();
                show_hobby();
                show_post();
                show_graph();
                rig:
cout<<"                                                                                                                "<<endl;
cout<<"                                                                                        Enter 1 to go to Main Menu";
                int ko;
                cin>>ko;
            try{
                 if(ko == 1){
                    goto mai;
                 }
                throw(ko);
            }
            catch(int yk){          // Exception Handeling
                    cout<<"                                                                      Select Right Option "<<endl;
                    cout<<"                                                                      Invalid Option "<<yk<<endl;
                    goto rig;
            }
                break;
                    
            case 2:       
                    top:
                    cout<<"1.Create Post"<<endl;
                    cout<<"2.Add Bio"<<endl;
                    cout<<"3.Add Professional Info"<<endl;
                    cout<<"4.Add hobby"<<endl;
                    int x;
                    cout<<"Enter a Number to Execute:"<<endl;
                    cin>>x;
                    if(x == 1){
                    eng:
                    cout<<"                                                   " <<"Create Post"<<endl;
                    cout<<"        Which Type of Post"<<endl;
                    cout<<"                   "<<"1. Text Post "<<endl;
                    cout<<"                   "<<"2. Graphs Representation"<<endl;
                    int io;
                    cin>>io;
                    if(io == 1){
                    type_post();
                    }
                    else if(io == 2){
                        create_graph();
                    }
                    else{
                        cout<<"Enter Right option"<<endl;
                        Sleep(999);
                        goto eng;
                    }

                        
                       }
                       else if (x == 2){
                        cout<<"Add Bio to Your Account "<<endl;
                        get_bio();
                       }
                       else if (x == 3){
                        cout<<"                                                              "<<"---|Professional Information|---"<<endl;
                        profession_info();
                       }
                       else if (x == 4){
                        add_hobby();
                       }
                       else{
                        cout<<"Enter a Appropiate Option:"<<endl;
                        Sleep(999);
                        goto top;
                       }
                       break;

            case 3:
                       cout<<"                                                                                                                       "<<endl;
                       cout<<"                                                                       ----Notifications Panel----                     "<<endl;
                       show_notif();
                       df:
                       int zx;
                        cout<<"                                                                                                                       "<<endl;
                        cout<<"                                                                        Enter 1 to go to Main Menu                     "<<endl;
                       cin>>zx;
                    try{                    // Exception Handeling
                       if(zx == 1){
                        goto mai;
                       }
                       throw(zx);
                    }
                    catch(int vb){

                    cout<<"                                                                           Select Right Option"<<endl;
                    cout<<"                                                                              Invalid Option "<<vb<<endl;
                    Sleep(999);
                    goto df;
                }
                    break;
                
            case 4:
                    loading(5);
                    system("cls");
                    Display();
                cout<<"                                                               ----Live Video Setting----                   "<<endl;
                cout<<"                                                                                                            "<<endl;
                      int h;
                      cout<<"                                                                1. Continue with 4K "<<endl;
                      cout<<"                                                                2. Continue with 1440p"<<endl;
                      cout<<"                                                                3. Continue with 1080p"<<endl;
                      cout<<"                                                                4. Continue with 720p"<<endl;
                      cout<<"                                                                5. Continue with 480p"<<endl;
                      cout<<"                                                                6. Continue with 360p(Data saver)"<<endl;
                      cout<<"                                                                7. Continue with 240p(Data Saver)"<<endl;
                      cout<<"                                                                8. Continue with 144p(Data Saver)"<<endl;
                      cin>>h;  
                      Display();
                      cout<<"  Checking Network Quality"<<endl;
                      loading3();
                      system("cls");
                      Display();
                      Sleep(999);
                      loading(5);
                    system("cls");
                    Display();
                    if(h == 1){
                        cout<<"                                                       Continuing with 4K "<<endl;
                        live_start();
                    }
                    else if(h == 2){
                        cout<<"                                                       Continuing with 1440p"<<endl;
                        live_start();
                    }
                    else if(h == 3){
                        cout<<"                                                       Continuing with 1080p"<<endl;
                        live_start();
                    }
                    else if(h == 4){
                        cout<<"                                                       Continuing with 720p"<<endl;
                        live_start();
                    }
                    else if(h == 5){
                        cout<<"                                                       Continuing with 480p"<<endl;
                        live_start();
                    }
                    else if(h == 6){
                        cout<<"                                                       Continuing with 360p"<<endl;
                        live_start();
                    }
                    else if(h == 7){
                        cout<<"                                                       Continuing with 240p"<<endl;
                        live_start();
                    }
                    else{
                        cout<<"                                                       Continuing with 144p"<<endl;
                        live_start();
                    }
                    
                    Display();
                    cout<<"                                                                 Going Live in"<<endl;
                    one(); 
                    Sleep(1000);  
                    system("cls");
                    Display();
                    cout<<"                                                                 Going Live in"<<endl;
                    two();
                    Sleep(1000);  
                    system("cls");
                    Display();
                    cout<<"                                                                 Going Live in"<<endl;
                    three();
                    Sleep(1000);
                    system("cls");  
                    cout<<"                                                          This Feature is Developed as a Test  "<<endl;  
                    cout<<"                                                This Feature require Further Development for its Working  "<<endl;
                    qw:
                    cout<<"                                                                                "<<endl;                   
                    cout<<"====== You are Live Now ======"<<endl;
                    Loading2(13);
                    system("cls");
                    Display();

                    cout<<"Do you Want to Go Live Again :"<<endl;
                    cout<<"Enter 1 to Go to Main Menu"<<endl;
                    cout<<"Enter 0 to Run Again"<<endl;
                    int i;
                    cin>>i;
                try{                // Exception Handeling
                    if(i == 0){
                    goto qw;
                    }
                    throw(i); 
                }
                catch(int fd){
                    cout<<"                                                               Going To Main Menu"<<endl;
                    Sleep(999);
                    goto mai;
                }  
                break;

                // Setting Starting of Switch 2
case 5:  sett:
         Display();
         setting_menu();
         int u;
         cout<<"                                                                Enter the Number of Menu you want to Execute: ";
         cin>>u;
         loading(5);
         switch(u){     // Switch for Settings
            
            case 1:
            hr:
            system("cls");
            Display();
            menu3();
            int k;
            cout<<"                                                                       Select a Option from the Menu : ";
            cin>>k;

            if(k == 1){      
            char se;                                                                  
            cout<<"                                                                             ===|Edit User Name|==="<<endl;
            cout<<"                                                                                                           "<<endl;
            cout<<"                                                         Do You Really want to remove previous user name and add new (Y / N) : ";
            try{                            // Exception Handeling
            if(se == 'y' || se == 'Y'){
            remove("User_name.txt");
            get_username();
            del_username();
            goto sett;
            }
            throw(se);
        }
            catch(char gc){
            cout<<"                                                                                                   Exiting";
            for(int i=0; i<=5; i++){
            cout<<".";
            Sleep(200); 
            }
        }
    }

            else if(k == 2){
            cout<<"                                                                                  ===|Add New Bio|==="<<endl; 
            string tbio;
            int ee;
            remove("bio_profile.txt");
            ofstream temp2;
            temp2.open("bio_profile.txt", ios::binary | ios::app);
            do{
                cout<<"                                                                                  Enter Bio : ";
                cin.ignore();
                getline(cin,tbio);
                temp2 << tbio << endl;
                temp2.close();
                cout<<"                                                                      Enter 1 to enter bio again or Enter any key to Exit";
                cin>>ee;
                }while(ee == 1);
                cout<<"                                                                     ---Your Bio was Saved---";
                del_bio();
                Sleep(999);
                goto hr;
            }

            else if(k == 3){
            cout<<"                                                                                  ===|Add New DoB|==="<<endl;   
            char th;     
            cout<<"                                                                        Do You Really want to remove and update your DoB (Y / N) : "; 
            cin>>th;
            if(th == 'y' || th == 'Y'){   
            remove("Birthday.txt");
            get_Birthday();
            del_Date_of_birth();
            }
            else{
            cout<<"                                                                                            Exit"<<endl;
            Sleep(999);
            goto hr;    
            }
        }

            else if(k == 4){
            cout<<"                                                                                  ===|Add New Gender|==="<<endl;
            bool tgender;
            remove("Gendar.txt");
            ofstream temp4;
            temp4.open("Gendar.txt");
            cout<<"                                                                                                           "<<endl;
            cout<<"Enter 0 for Female"<<endl;
            cout<<"Enter 1 for Male"<<endl;
            cout<<"Enter any number for Female"<<endl;
            cout<<"                                                                                                           "<<endl;
            cin>>tgender;
            temp4 << tgender << endl;
            temp4.close();
            del_Gendar();
            cout<<"                                                                        Previous Gender Removerd and Updated Scucessful"<<endl;
            Sleep(999);
            goto hr;
            }

            else if (k == 5){
            char o , v;
            int z ;
            cout<<"                                                                                  ===|Remove Posts|==="<<endl;
            cout<<"                                                                                                      "<<endl;
            cout<<"                                                                            Which type of Posts you Want to Delete"<<endl;
            cout<<"                                                                                                      "<<endl;
            cout<<"                                                                                    1. Text Posts "<<endl;
            cout<<"                                                                                    2. Graphs Posts"<<endl;
            cout<<"                                                                                    3. Go back"<<endl;       
            cout<<"                                                                                                      "<<endl;  
            cout<<"                                                                                    Enter a Option : ";
            cin>>z;
            if(z == 1){
            cout<<"                                                                        Do You Really want to remove all posts (Y / N) : ";
            cin>>o;

            if(o == 'y' || o == 'Y'){
            remove("posts.txt");
            del_post_not();
            cout<<"                                                                           === Texts Posts Removed Scucessfully === "<<endl;
            Sleep(999);
            goto hr;
            }
            else{
                cout<<"                                                                                            Exit"<<endl;
                Sleep(999);
                goto hr;
            }
        }
            else if (z == 2){
            cout<<"                                                                        Do You Really want to remove all posts (Y / N) : ";
            cin>> v;
            if (v == 'y' || v == 'Y'){
            remove("graph.txt");
            del_post_not();
            Sleep(999);
            cout<<"                                                                           === Graph Posts Removed Scucessfully === "<<endl;
            }
            else{
            cout<<"                                                                                            Exit"<<endl;
                Sleep(999);
                goto hr;   
            }
        }

            else if(z == 3){
            cout<<"                                                                                            Exit"<<endl;
                Sleep(999);
                goto hr;
            }

            else{
                cout<<"                                                                               ===Choose a Right option==="<<endl;
                Sleep(999);
                goto hr;
            }
        }  

        else if(k == 6){
            char jh;
            cout<<"                                                                                  ===|Remove Notifications|==="<<endl; 
            cout<<"                                                                                                                        "<<endl;
            cout<<"                                                                        Do You Really want to remove all Notifications (Y / N) : ";
            try{                                      // Exception Handeling
            if(jh == 'y' || jh == 'Y'){
            remove("notification.txt");
            cout<<"                                                                                              Removing Notifications";
            for(int i=0; i<=5; i++){
            cout<<".";
            Sleep(200);
            goto hr;
            }          
        }
        throw(jh);
    }
            catch(char tyo){
            cout<<"                                                                                                   Exiting";
            for(int i=0; i<=5; i++){
            cout<<".";
            Sleep(200);   
            }
        }
    }

        else if(k == 7){
            cout<<"                                                                                  ===|Remove and Add Hobbies|==="<<endl;
            char fj; 
            char ol;
            cout<<"                                                                                                                "<<endl;  
            cout<<"                                                Do You Really want to remove Your Previous hobbies and Add new (Y / N) : ";   
            cin>>ol;
            if(ol == 'y' || ol == 'Y'){
                remove("Hobby.txt");
                cout<<"                                                                                             Removing Old Hobbies";
                for(int i=0; i<=5; i++){
                cout<<".";
                Sleep(200);
            }    
            del_Hobbies();
            system("cls");
            Display();
            cout<<"                                                                                       Do You Want to Enter New Hobbies (Y / N) : ";
            cin>>fj;
            if(fj == 'Y' || fj == 'y'){
            add_hobby();
            }
            else{
            cout<<"                                                                                                  Exiting";
            for(int i=0; i<=5; i++){
            cout<<".";
            Sleep(200);   
            }  
            goto hr;
        }

    }
            else{
            cout<<"                                                                                                   Exiting";
            for(int i=0; i<=5; i++){
            cout<<".";
            Sleep(200);   
            } 
            goto hr; 
        }
    }

      else if(k == 8){
            char lk , kh;
            cout<<"                                                                                ===|Remove and Add Professional Info|==="<<endl;
            cout<<"                                                                                                                        "<<endl;
            cout<<"                                                     Do You Really want to remove Your Previous Professional Information and Add new (Y / N) : ";
            if(lk == 'y' || lk == 'Y'){
            remove("Professional_profile.txt");
            cout<<"                                                                                 Removing Previous Professional Record";
            for(int i=0; i<=5; i++){
            cout<<".";
            Sleep(200);
            }
            cout<<"                                                                            Do you Want to Enter New Information(Y / N) : ";
            cin>>kh;
            if(kh == 'y' || kh == 'Y'){
            profession_info();
            }
            else{
            cout<<"                                                                                                  Exiting";
            for(int i=0; i<=5; i++){
            cout<<".";
            Sleep(200);   
            }      
            goto hr;
            }
        }
    }

            else if (k == 9){
            cout<<"                                                                                                  Exiting";
            for(int i=0; i<=5; i++){
            cout<<".";
            Sleep(200);   
            }  
        }
            else{
            cout<<"                                                                                      Select a Right Option"; 
            Sleep(999);
            goto mai;
            }  
                 
        break;

                case 2:
                    system("cls");
                        Display();
cout<<"                                                                                                                                            "<<endl;
                         cout<<"                                                                       Welcome to Help Center "<<endl;
cout<<"                                                                                                                                            "<<endl;
                         cout<<"                                                           We are 24/7 Available here for Your Assistance"<<endl;
int j;
pro: 
Problem_Menu();
cout<<"                                                                                "<<"Enter a Number According to The Menu :";
cin>>j;
if(j == 1){
system("cls");
Display();
help_center();   
cout<<"                                                                            ----CONTACT CENTER----"<<endl;
cout<<"                                                                                                                                             "<<endl;
cout<<"                                                                                                                                  |Facebook| "<<endl;
     cout<<"                                                                                                                                        "<<endl;
     cout<<"                                                                                 This is the start of your conversation with Facebook.  "<<endl;
     cout<<"                                                                                 You can Leave your text message here our staff will    "<<endl;
     cout<<"                                                                                 contact with you when your turn will come.             "<<endl;
     cout<<"                                                                                   Note: We are sorry You may face Delay in contact with"<<endl;
     cout<<"                                                                                         our Staff due to Covid 19 restrictions.        "<<endl;
     cout<<"                                                                                            Additional |Instagram| i._.ahmedbilal_bhatti"<<endl;

     string chat_message;
     string email_adress;
     string review1;
     int d;

     cout<<"Enter Your Details and Message Below "<<endl;
     cout<<"Enter Your Email on which our staff can contact Later :"<<endl; 

     ofstream message1;
     message1.open("message.txt",ios::binary | ios::app);
     message1 <<"--CONTACT CENTER--"<<endl;

     cin>>email_adress;                                                                                                        // Enter Valid email logic===========================
     message1<<email_adress<<endl;

     cout<<"Enter your Message Here below :"<<endl;
     cout<<"NOTE : Your message should be only 200 or less than 200 words."<<endl;
     cin.ignore();
     getline(cin,chat_message);
     message1<<chat_message<<endl;
     cout<<"                                                                                                                                       "<<endl;


     cout<<"|OPTIONAL|";
     cout<<"How would you Rate our Live chat expriance /5"<<endl;
     cout<<"1. Give Review"<<endl;
     cout<<"2. Exit Without Giving Review."<<endl;
     cin>>d;
     if(d == 1){
        int a = 1 , b =2 , c = 3 , n = 4 , e = 5;
        int f;
        system("cls");
        Display();
        cout<<"                                                                                                                                    "<<endl;
        cout<<"1. Excellent    "<<endl;
        cout<<"2. Good         "<<endl;
        cout<<"3. Satisfactory "<<endl;
        cout<<"4. Bad          "<<endl;
        cout<<"5. Very Bad     "<<endl;
        cout<<"                                                                                                                                    "<<endl;  
        cout<<"Enter a Number according to Above Menu : ";  
        message1<<"Review: ";   
        cin>>f;
        if(f == 1){
        cin>>e;
        message1<<e<<endl;    
        }
        else if(f == 2){
        cin>>n;
        message1<<n<<endl;    
        }
        else if(f == 3){
        cin>>c;
        message1<<c<<endl;    
        }
        else if(f == 4){
        cin>>b;
        message1<<b<<endl;    
        }
        else{
        cin>>a;
        message1<<a<<endl;    
        }
        message1.close();
        system("cls");
        Display();
        cout<<"                                                                                                                                     "<<endl;
        cout<<"Thanks For Giving Review ."<<endl;
        goto pro;
     }
     else if(d == 2){
        goto pro;
     }
     break;
}  

     // Report Center
     else if(j == 2){
     string mail_repoRt , probl_report;
     system("cls");
     Display();
     send_report();
     ofstream problem1;
     problem1.open("Problem.txt",ios::binary | ios::app);
    cout<<"                                                                           ----REPORT CENTER----"<<endl;
     cout<<"                                                                                                                                           "<<endl;
     cout<<"                                                                                     We Highly appreciate your report.                     "<<endl;
     cout<<"                                                                                     Note: We are sorry You may face Delay in contact with "<<endl;
     cout<<"                                                                                         our Staff due to Covid 19 restrictions.           "<<endl;
     cout<<"                                                                                                                                           "<<endl;
     problem1<<"--User Repot--"<<endl;
     cout<<"Enter Your email : ";
     problem1<<"User Email: ";
     cin>>mail_repoRt;
     problem1<<mail_repoRt<<endl;
     cout<<"Enter Your Issue in text :"; 
     problem1<<"Report Issue: ";
     cin.ignore();
     getline(cin,probl_report);
     problem1<<probl_report<<endl;   
     problem1.close();  
     system("cls");
     Display();
     cout<<"                                                       "<<"We will notify you when Report action is done ( If valid Report ) "<<endl;
     Sleep(2000);
     cout<<"                                                                                                                                          "<<endl;
     goto pro;
}

     // Suggestion Center
     else if (j == 3){
     string Suggestion_prob;
     string email_sugg;
     system("cls");
     Display();
     send_sugges();
     cout<<"                                                                          ----SUGGESTION CENTER----"<<endl;
     cout<<"                                                                                                                                           "<<endl;
     cout<<"                                                                                   We Highly appreciate your Suggestions.  "<<endl;
     cout<<"                                                                                   We are Trying Our Best to create a good interface for   "<<endl;
     cout<<"                                                                                   our User"<<endl;
     cout<<"                                                                                   Your Suggestion will be helpful for us"<<endl;
     cout<<"                                                                                   Note: We are sorry You may face Delay in contact with     "<<endl;
     cout<<"                                                                                         our Staff due to Covid 19 restrictions.             "<<endl;
     cout<<"                                                                                                                                           "<<endl;
     ofstream Suggestion1;
     Suggestion1.open("Suggestion.txt",ios::binary | ios::app);   
     Suggestion1 << "--Suggestion--" <<endl;
     cout<<"                                                                                                                                           "<<endl;
     cout<<"Enter your email: ";
     Suggestion1 <<"Email: ";
     cin>>email_sugg;
     Suggestion1 <<email_sugg <<endl;
     cout<<"Enter Suggestion Here: ";
     cin.ignore();
     getline(cin,Suggestion_prob);
     Suggestion1 << Suggestion_prob <<endl;    
     cout<<"                                                                          Thanks For Giving Suggestion"<<endl;
     Sleep(2000);
     goto pro;
}

     else{
        cout<<"                                                                            "<<"Select Right Option"<<endl;
        Sleep(2000);
        goto pro;
     }        
   
     case 4: 
     cout<<"Logging out"<<endl;
     system("cls");
     log:
     Display();
     cout<<"                                                                                                                                            "<<endl;
     int po;
     cout<<"                                                        You have loged out your account you have to login again"<<endl;
     cout<<"                                                                        1. Login again "<<endl;
     cout<<"                                                                        2. exit"<<endl;
     cin>>po;
     system("cls");
     try{                                // Exception Handeling 
     if(po == 1){
        Display();
        cout<<"                                                                                                                                          "<<endl;
        account_check(); 
        logged_in(); 
     }
     else if(po == 2){
        log_out();
        Display();
        cout<<"                                                                                                                                           "<<endl;
        cout<<"                                                                               --Exited--"<<endl;
        break;
     }
     throw(po);
     }
     catch(int vc){
        cout<<"                                                               You Entered "<<vc <<" Wrong Answer"<<endl;
        cout<<"                                                               Enter a valid option from menu "<<endl;
        Sleep(550);
        goto log; 
     }

     case 5:
          cout<<"Exited"<<endl;
            Sleep(2000);
            no();
            break;

        default:
            cout<<"You Entered Wrong Option "<<endl;
            cout<<"Select a Right Option  "<<endl;
            Sleep(1000);
            goto mai;
            break;
    }
        }
            }
            else{                                  // Account check else statement if account is not found
                cout<<endl<<"                                                            You Entered Wrong Address "<<endl;
                cout<<"                                                                Do you want to Try again (Y / N) ";

                cin>>k;
                // Account Check Retry Option
                if(k == 'Y' || k == 'y' ){
                account_check();
                }
                else{
                    int gh;
                    cout<<"                                      Do you Want to go to Login menu entr 1 : ";
                    cin>>gh;
        try{                   // Exception Handeling
            if(gh == 1){
            }
            throw(gh);
                system("cls");
                Display();
                account_check();       
                }
                catch(int num){
                    cout<<"                                                   Acess Denied Your Input "<<num<<" Incorrect";
                    Sleep(2000);
                    system("cls");
                    no();
                    break;  
                    }
                }
            }
        }
    }
}

virtual void no(){
    string sd[99];
    for(int i =0; i<=100; i++){
    cin>>sd[i];
    }
}
// Forgot Pass / Reset Pass 

void Forgot_Password(){                    // Forgot pass 1
    string question_confirm;
    string mobile_number_email;
    pl:
    cout<<"                                                                           ===| Forgot Password |==="<<endl;
    cout<<"                                                 Please enter your email address or mobile number to search for your account."<<endl;
    ifstream mail;
    mail.open("Gmail.txt",ios::binary);
    cin>>mobile_number_email;
    string checklists[10];
    string d;
    int x=0;
    
    while ( mail >> d &&  x<10){
        checklists[x] =d;
        x++;
    }
    mail.close();

        for ( int j=0; j<=5; j++ )
        {
            if (mobile_number_email == checklists[j])
            { 
                kl:
                cout <<                                                                   "Enter Recovery Email : ";
    cin>>question_confirm;                            
    string new_pass;

    ifstream Quest;
    Quest.open("Question.txt",ios::binary); 
        
    string checklist[10];
    string z;
    int x=0;
    
    while ( Quest >> z &&  x<10){
        checklist[x] = z;
        x++;
    }
    Quest.close();

    for ( int i=0; i<10; i++ ){
        for ( int j=0; j<10; j++ ){
            if (question_confirm == checklist[j]){ 
                break;
            }
            else{
                cout<<"Your Question did'nt match Please Retry "<<endl;
                Sleep(1888);
                goto kl;
            }
        }
    }   
    break;
}
        else{
            cout<<"                                                                 You Entered Wrong Email Address "<<endl;
            Sleep(1000);
            goto pl;
        }
    }   
}

  void new_Password(){        // Forgot pass 2
     string new_pass;

    system("cls");
    Display();
    cout<<"                                                                            ===| New Password |==="<<endl; 
    zx:
    cout<<"                                                                         8 or more than 8 characters."<<endl;
    cout<<"                                                                 1 upper case , lower case character and 1 digit."<<endl;
    cout <<"                                                                     Enter -NEW- password which must contain ";
    ofstream new_pass_code;
    new_pass_code.open("Password.txt",ios::binary); 
    cin>>new_pass;
    int l = new_pass.length();
     for(int i=1; i<=l; i++){     // to print * 
        cout<<"*";
    }

    int n = new_pass.length();      
    bool hasLower = false, hasUpper = false, hasDigit = false; 
    for (int i = 0; i < n; i++) { 
        if (islower(new_pass[i]))
            hasLower = true; 
        if (isupper(new_pass[i])) 
            hasUpper = true; 
        if (isdigit(new_pass[i])) 
            hasDigit = true;
    }
    if ( hasUpper && hasDigit && hasLower && (n >= 8)){
        cout<<endl<<"Strong"<<endl;
        remove("Password.txt");
        new_pass_code<< new_pass <<endl;
        cout<<"                                                                       --- New Password Created ---"<<endl;
        Sleep(2000);

    }
    else if ((hasLower || hasUpper) && hasDigit && (n >=8)){ 
    cout << "Your Password is Moderate" << endl;
    cout << "Retype a strong Password"<<endl; 
        goto zx;
    }
    else{
        cout <<"Enter password which must contain :"<<endl;
        cout<<"8 or more than 8 characters."<<endl;
        cout<<"1 upper case , lower case character and 1 digit."<<endl;
        cout<<                                                                             "Your Password is Weak"<<endl;
        cout<<                                                                            "Retype a strong Password"<<endl; 
        Sleep(2000);
          goto zx;
    } 
        new_pass_code.close();
    }
};

 //=============================================================================================================================================================================================
 //========================================================================================= Int main ==========================================================================================
 //=============================================================================================================================================================================================

 int main(){
    system("color 9");
    login l;       // Object 

    int x,r;
    char y, Y , n, N , reset;

    // Storing Object
    ofstream objsto;
    objsto.open("Object.txt", ios::binary);
    objsto.write(reinterpret_cast<char*>(&l), sizeof(l));

    Welcome();
    Display();
    Developer();
    retry:
    menu();
    cout<<"                                                                Enter a number according to Displayed Menu : ";
    cin>>x;

    switch(x){
    case 1:
        system ("cls");
        Display();
        loading(5);
        system ("cls");
        Display();
        system ("cls");
        Display();
        l.account_check();    
        system ("cls");
        Display();
        goto retry;
        break;             

    case 2:
        loading(5);
        system("cls");
        Display();
        l.get_data();
        goto retry;
        system ("cls");
        Display();

        break;

    case 3:
        loading(5);
        system ("cls");
        Display();
        l.Forgot_Password();
        l.new_Password();
        system("cls");
        goto retry;
        break;

    case 4:
        cout<<"Exited"<<endl;
        break;

    default:
        cout<<"                                                                          You entered a Wrong Choice"<<endl;
        cout<<"                                                                             Select Valid Option";
        Sleep(1000);
        goto retry;
        break;
    }
    system ("pause");
 }