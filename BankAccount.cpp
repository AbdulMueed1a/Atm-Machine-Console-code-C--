#include<iostream>
using namespace std;
int main(){
	double opt,pin= 1111;
	float bal=104800.1;
	cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl<<endl<<"1. Create New Account";
	cout<<endl<<endl<<"2. Balance Enquiry";
	cout<<endl<<endl<<"3. Deposit";
	cout<<endl<<endl<<"4. Withdraw Cash";
	cout<<endl<<endl<<"5. Change Pin ";
	cout<<endl<<endl<<"5. Exit ";
	cout<<endl<<endl<<"Input here : ";
	cin>>opt;
	
	
	//Account Creation
	if (opt == 1){
		system("CLS");
		string name, fname , city , address , nation ,email;
		int mblno, pstalcd, cnicNo,dob;
		cout<< "Enter your full name : ";
				cin.ignore();

		getline(cin,name);
		cout<< "Enter your fathers name : ";
		cin.ignore();
		getline(cin,fname);
		cout<< "Enter your city : ";
		getline(cin,city);
		cout<< "Enter your full address : ";
		getline(cin,address);
		cout<< "Enter your nationality : ";
		getline(cin,nation);
		cout<< "Enter your Email address : ";
		getline(cin,email);
		cout<< "Enter your mobile number : ";
		cin>>mblno;
		cout<< "Enter your postal code : ";
		cin>>pstalcd;
		cout<< "Enter your cinc number : ";
		cin>>cnicNo;
		cout<<"Enter your date of birth : ";
		cin>>dob;
		cout<<"Enter your ammount : ";
		cin>>bal;
        cout<<"\t\t Your details are successfully recorded.\n\n\t\t Account was Successfully created \n \t\tYour pin is"<<pin;

	}
	
	//Balance Check
	else if (opt == 2){
		system("CLS");
		int x1;
		cout<<"Select Account Type \n\n1 : Savings \n2 : Current "<<endl;
		cin>>x1;
		if(x1==1){
			cout<<" your current balance is : \n "<<bal;
		}
		else{
			cout<<"You donot have current account\n       please try again";
		}
	}
	
	//Deposit
	else if (opt == 3){	
	system("CLS");
	float depo;
	cout<<"\n\n\n";
	cout<<"Enter Ammount that you want to deposit (Minimum=5000) :" ;
	cin>>depo;
	if(depo>=5000){
	
	int pass;
	cout<<"Your ammount was noted\nNow go to counter no 6 and give our employe cash "<<depo<<"rs and \nEnter the password provided by him : ";
	cin>>pass;
	if(pass==0001){
		cout<<"Operation Performed Successfully!! \n"<<depo<<"rs were added to your account";
        bal+=depo;
	}
	else
	cout<<"Invalid password";
	}
	else
	cout<<"The entered ammount is less then Min value";
	}
	
	//Cash Withdraw
	else if (opt == 4){
        double ammount;
		system("CLS");
        int pin2;
        cout<<"Enter your Pin :";
        cin.ignore();
        cin>>pin2;
        if(pin2 == pin){
            cout<<"enter withdraw ammount (min:5000) : ";
            cin>>ammount;
            if (ammount>5000){
                cout<<"Cash Withdrawn of rs"<<ammount;
                ammount-=bal;
                cout<<"Your remaining ammount is rs"<<bal;

            }
            else
                cout<<"Entered ammount is less then minimum ammount";
        }
        else if (pin2 != pin) {
            cout << "invalid pin";
        }


    }
	
	//Pin change
    else if (opt == 5) {
        system("CLS");
        int tempPin1,tempPin2,tempPin3;
        cout<<"Enter your current pin : ";
        cin>>tempPin1;
        if (tempPin1==pin){
            cout<<"Enter your new pin : ";
            cin>>tempPin2;
            cout<<"Enter your new pin again : ";
            cin>>tempPin3;
            if (tempPin2==tempPin3){
                pin=tempPin3;
                cout<<"action performed successfully";
            }
            else
                cout<<"Pin does not match !! ";

        }
        else
            cout<<"incorrect pin Entered !! ";
    }
    //Exit
	else if (opt == 5){
		system("CLS");

	}



    system ("pause>0");
	return 0;
}