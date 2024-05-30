#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
void mainMenu(); //globāl̥ function
class management 
{
    public:
      
      management(){
        mainMenu();
      }
};
class details{
    public:
       static string name, gender;
       int phonenumber;
       int age;
       string address;
       static int cid;
       char arr[100];

       void information()
       {
        cout<<"\n enter the customer id:";
        cin>>cid;
        cout<<"\n enter your name:";
        cin>>name;
        cout<<"\n your age:";
        cin>>age;
        cout<<"\n enter your address:";
        cin>>address;
        cout<<"\n your gender:";
        cin>>gender;
        cout<<"\n your details are saved with us"<<endl;
       }
};
int details::cid;
string details::name;
string details::gender;
class registration{
    public:
    static int choice ;
    int choice1;
    int back;
    static float charges;

    void flights(){
        string flightN[]={"Dubai","Hong kong","usa",
        "Australia","Europe","UK"};
        for(int a=0; a<6;a++){
            cout<<(a+1)<<".flight to"<<flightN[a]<<endl;
        }
        cout<<"\n welcome to the airlines"<<endl;
        cout<<"press the number of the country you want to go for:";
        cin>>choice;
        switch(choice){
            case1:{
                cout<<"_______welcome to UAE Dubai_______\n"<<endl;

                cout<<"customer satisfaction is our priority. enjoy your journey"<<endl;

                cout<<"following  are the   flights\n"<<endl;
                
                cout<<"1. Dub-Du6500"<<endl;
                cout<<"\t07-08-2024  7:00 11hours rs25000";
                cout<<"1. Dub-Du5678"<<endl;
                cout<<"\t20-08-2024  15:00 10hours rs35000";
                cout<<"1. Dub-Du2367"<<endl;
                cout<<"\t03-08-2024  18:00  11hours rs26000";

                cout<< "\nselect the flight you desire:";
                cin>>choice1;
                if(choice1==1){
                    charges=25000;
                    cout<<"you have succesfully booked your flight=Dub-Du6500;"<<endl;
                    cout<<"you can go back to menu and recieve the ticket"<<endl;
                }
                else if(choice==2){
                     charges=35000;
                    cout<<"you have succesfully booked your flight=Dub-Du5678;"<<endl;
                    cout<<"you can go back to menu and recieve the ticket"<<endl;
                }
                else if(choice==3){
                     charges=26000;
                    cout<<"you have succesfully booked your flight=Dub-Du2367;"<<endl;
                    cout<<"you can go back to menu and recieve the ticket"<<endl;
                }
                else{
                    cout<<"invalid input"<<endl;
                    flights();
                }
                cout<<"press any key to go back to main menu:"<<endl;
                cin>>back;
                if(back==1){
                    mainMenu();
                }
                else{
                    mainMenu();
                }
            }
            case2:{
            cout<<"_______welcome to Hong Kong airlines_______\n"<<endl;

                cout<<"customer satisfaction is our priority. enjoy your journey"<<endl;

                cout<<"following  are the   flights\n"<<endl;
                
                cout<<"1. HKNG-HK6500"<<endl;
                cout<<"\t07-08-2024  6:00 10hours rs40000";
                cout<<"1. HKNG-HK5678"<<endl;
                cout<<"\t20-08-2024  20:00 12hours rs41000";
                cout<<"1. HKNG-HK2367"<<endl;
                cout<<"\t03-08-2024  05:00  15hours rs45000";

                cout<< "\nselect the flight you desire:";
                cin>>choice1;
                if(choice1==1){
                    charges=40000;
                    cout<<"you have succesfully booked your flight=HKNG-HK6500;"<<endl;
                    cout<<"you can go back to menu and recieve the ticket"<<endl;
                }
                else if(choice==2){
                     charges=41000;
                    cout<<"you have succesfully booked your flight=HKNG-HK5678;"<<endl;
                    cout<<"you can go back to menu and recieve the ticket"<<endl;
                }
                else if(choice==3){
                     charges=45000;
                    cout<<"you have succesfully booked your flight=HKNG-HK2367;"<<endl;
                    cout<<"you can go back to menu and recieve the ticket"<<endl;
                }
                else{
                    cout<<"invalid input"<<endl;
                    flights();
                }
                cout<<"press any key to go back to main menu:"<<endl;
                cin>>back;
                if(back==1){
                    mainMenu();
                }
                else{
                    mainMenu();
                }
        }
              case3:{
                cout<<"_______American Airlines_______\n"<<endl;

                cout<<"customer satisfaction is our priority. enjoy your journey"<<endl;

                cout<<"following  are the   flights\n"<<endl;
                
                cout<<"1. AX-AX6758"<<endl;
                cout<<"\t07-08-2024  6:00 10hours rs16000";
                cout<<"1. AX-AX09449"<<endl;
                cout<<"\t20-08-2024  20:00 12hours rs24500";
                cout<<"1. AX-AX00940"<<endl;
                cout<<"\t03-08-2024  05:00  15hours rs45600";

                cout<< "\nselect the flight you desire:";
                cin>>choice1;
                if(choice1==1){
                    charges=16000;
                    cout<<"you have succesfully booked your flight=HKNG-HK6500;"<<endl;
                    cout<<"you can go back to menu and recieve the ticket"<<endl;
                }
                else if(choice==2){
                     charges=24500;
                    cout<<"you have succesfully booked your flight=HKNG-HK5678;"<<endl;
                    cout<<"you can go back to menu and recieve the ticket"<<endl;
                }
                else if(choice==3){
                     charges=45600;
                    cout<<"you have succesfully booked your flight=HKNG-HK2367;"<<endl;
                    cout<<"you can go back to menu and recieve the ticket"<<endl;
                }
                else{
                    cout<<"invalid input"<<endl;
                    flights();
                }
                cout<<"press any key to go back to main menu:"<<endl;
                cin>>back;
                if(back==1){
                    mainMenu();
                }
                else{
                    mainMenu();
                }
        }
           case4:{
                cout<<"_______Europe_______\n"<<endl;

                cout<<"customer satisfaction is our priority. enjoy your journey"<<endl;

                cout<<"following  are the   flights\n"<<endl;
                
                cout<<"1. EU-EUP6500"<<endl;
                cout<<"\t07-08-2024  6:00 10hours rs40000";
                cout<<"1. EU-EUP5678"<<endl;
                cout<<"\t20-08-2024  20:00 12hours rs41000";
                cout<<"1. EU-EUP2367"<<endl;
                cout<<"\t03-08-2024  05:00  15hours rs45000";

                cout<< "\nselect the flight you desire:";
                cin>>choice1;
                if(choice1==1){
                    charges=40000;
                    cout<<"you have succesfully booked your flight=HKNG-HK6500;"<<endl;
                    cout<<"you can go back to menu and recieve the ticket"<<endl;
                }
                else if(choice==2){
                     charges=41000;
                    cout<<"you have succesfully booked your flight=HKNG-HK5678;"<<endl;
                    cout<<"you can go back to menu and recieve the ticket"<<endl;
                }
                else if(choice==3){
                     charges=45000;
                    cout<<"you have succesfully booked your flight=HKNG-HK2367;"<<endl;
                    cout<<"you can go back to menu and recieve the ticket"<<endl;
                }
                else{
                    cout<<"invalid input"<<endl;
                    flights();
                }
                cout<<"press any key to go back to main menu:"<<endl;
                cin>>back;
                if(back==1){
                    mainMenu();
                }
                else{
                    mainMenu();
                }
        }
              case5:{
                cout<<"_______welcome to Australian airlines_______\n"<<endl;

                cout<<"customer satisfaction is our priority. enjoy your journey"<<endl;

                cout<<"following  are the   flights\n"<<endl;
                
                cout<<"1. AU-AUS6500"<<endl;
                cout<<"\t07-08-2024  6:00 10hours rs40000";
                cout<<"1. AU-AUS5678"<<endl;
                cout<<"\t20-08-2024  20:00 12hours rs41000";
                cout<<"1. AU-AUS2367"<<endl;
                cout<<"\t03-08-2024  05:00  15hours rs45000";

                cout<< "\nselect the flight you desire:";
                cin>>choice1;
                if(choice1==1){
                    charges=40000;
                    cout<<"you have succesfully booked your flight=HKNG-HK6500;"<<endl;
                    cout<<"you can go back to menu and recieve the ticket"<<endl;
                }
                else if(choice==2){
                     charges=41000;
                    cout<<"you have succesfully booked your flight=HKNG-HK5678;"<<endl;
                    cout<<"you can go back to menu and recieve the ticket"<<endl;
                }
                else if(choice==3){
                     charges=45000;
                    cout<<"you have succesfully booked your flight=HKNG-HK2367;"<<endl;
                    cout<<"you can go back to menu and recieve the ticket"<<endl;
                }
                else{
                    cout<<"invalid input"<<endl;
                    flights();
                }
                cout<<"press any key to go back to main menu:"<<endl;
                cin>>back;
                if(back==1){
                    mainMenu();
                }
                else{
                    mainMenu();
                }
        }
              case6:{
                cout<<"_______welcome to UK airlines_______\n"<<endl;

                cout<<"customer satisfaction is our priority. enjoy your journey"<<endl;

                cout<<"following  are the   flights\n"<<endl;
                
                cout<<"1. UK-UK6500"<<endl;
                cout<<"\t07-08-2024  6:00 10hours rs40000";
                cout<<"1. UK-UK5678"<<endl;
                cout<<"\t20-08-2024  20:00 12hours rs41000";
                cout<<"1. UK-UK2367"<<endl;
                cout<<"\t03-08-2024  05:00  15hours rs45000";

                cout<< "\nselect the flight you desire:";
                cin>>choice1;
                if(choice1==1){
                    charges=40000;
                    cout<<"you have succesfully booked your flight=HKNG-HK6500;"<<endl;
                    cout<<"you can go back to menu and recieve the ticket"<<endl;
                }
                else if(choice==2){
                     charges=41000;
                    cout<<"you have succesfully booked your flight=HKNG-HK5678;"<<endl;
                    cout<<"you can go back to menu and recieve the ticket"<<endl;
                }
                else if(choice==3){
                     charges=45000;
                    cout<<"you have succesfully booked your flight=HKNG-HK2367;"<<endl;
                    cout<<"you can go back to menu and recieve the ticket"<<endl;
                }
                else{
                    cout<<"invalid input"<<endl;
                    flights();
                }
                cout<<"press any key to go back to main menu:"<<endl;
                cin>>back;
                if(back==1){
                    mainMenu();
                }
                else{
                    mainMenu();
                }
        }
        default:{
            cout<<"invalid input shifting to the mainmenu:"<<endl;
            mainMenu();
            break;
        }
              
              }
              }
           } ;
           float registration :: charges;
           int registration:: choice;

           class ticket: public registration,details{
            public:
             void bill()
             {
                string destination="";
                ofstream outf("records.txt");{
                    outf<<"___________vistara airlines__________"<<endl;
                    outf<<"____________Ticket__________"<<endl;
                    outf<<"_____________________________"<<endl;

                    outf<<"customerid:"<<details::cid<<endl;
                    outf<<"customerName:"<<details::name<<endl;
                    outf<<"customerGender:"<<details::gender<<endl;
                    outf<<"\tDescription"<<endl<<endl;

                    if(registration::choice==1){
                        destination="Dubai";
                    }
                    else if(registration::choice==2){
                        destination="Hong Kong";
                    }
                    else if(registration::choice==3){
                        destination="USA";
                    }
                    else if(registration::choice==4){
                        destination="Australia";
                    }
                    else if(registration::choice==5){
                        destination="Europe";
                    }
                    if(registration::choice==6){
                        destination="UK";
                    }
                    outf<<"destination\t\t"<< destination<<endl;
                    outf<<"flight cost:\t\t"<<registration::charges<<endl;

                }
                outf.close();
             }
             void dispbill(){
                ifstream ifs("records.txt");{
                    if(!ifs)
                    {
                        cout<<"file error"<<endl;
                    }
                    while (!ifs.eof()){
                        ifs.getline(arr,100);
                        cout<<arr<<endl;
                    }
                }
                ifs.close();
             }
           }  ;
    


void mainMenu()
{
    int lchoice;
    int sChoice;
    int back;

    cout<<"\t       vistara airlines \n";
    cout<<"\t__________Main Menu__________"<<endl;

    cout<<"\t____________________________________"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t"<<endl;
    

    cout<<"\t\t Press 1 to enter passenger details  \t"<<endl;
    cout<<"\t\t Press 2 for flight registration  \t"<<endl;
    cout<<"\t\t Press 3 for ticket fare \t"<<endl;
    
    cout<<"\t\t Press 4 to exit  \t"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t"<<endl;
    cout<<"\t____________________________________"<<endl;


    cout<<"enter the choice: "<<endl;
    cin>> lchoice;

    details d;
    registration R;
    ticket T;
    
    switch (lchoice){
        case 1:
        {
            cout<<"____________customers___________\n"<<endl;
            d.information();
            cout<<"press 1 to go back to mai menu";
            cin>>back;
            if(back==1)
            {
                mainMenu();
            }
            else{
                mainMenu();
            }
            break;
        }
        case 2:
        {
            cout<<"______________Book a flight using this system____________\n"<<endl;
            R.flights();
            break;
        }
        case 3:
        {
            cout<<"_____get your ticket_____\n"<<endl;
            T.bill();

            cout<<"your ticket is printed. Collect it \n"<<endl;
            cout<<"press 1 to display your ticket";

            cin>>back;
            if(back==1){
                T.dispbill();
                cout<<"press any key to go back to main menu:";
                cin>>back;
                if(back==1){
                    mainMenu();
                }
                else{
                    mainMenu();
                }
              }else{
                mainMenu();
              }  
              break;
            }
            case 4:
            {cout<<"\n\n\t___________thank you___________"<<endl;
            break;
            }
            default:
            {
                cout<<"doesnt exit______ERROR\n"<<endl;
                mainMenu();
                break;

            }

    }

    }

    int main(){
    management mobj;
    return 0;
}
