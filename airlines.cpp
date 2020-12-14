#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;


class passenger
{
	char name[20],gender[10];int years;int g;
	public:
	void getp();
	void disp();
};
void passenger::getp()
{
	ofstream w;
	w.open("ticket.txt",ios::app);
	
	
	cout<<"\n\t\tenter name:";
	cin>>name;
	w<<name<<endl;
	cout<<"\n\t\tenter age";
	cin>>years;
	w<<years<<endl;
	cout<<"\n\t\tselect gender\n\t\t1.Male\n\t\t2.Female"<<endl;
	cin>>g;
	if(g==1)
	{
		strcpy(gender,"male");
		w<<gender<<endl;
	}
	else
	{
		strcpy(gender,"female");
		w<<gender<<endl;
	}
		system("cls");
}
void passenger::disp()
{
	cout<<"\n\t\tPassenger Name:"<<name;
	cout<<"\t\tAge:"<<years;
	cout<<"\n\t\tgender:"<<gender;
	
}
class dflights
{
	int f;char fl_name[20];char dep[10],arr[10];int cost;
	public:
		void getd();
		void disd();
};
void dflights::getd()
{
	ofstream w;
	w.open("ticket.txt",ios::app);

	cout<<"\n\t\tflights found!!";
			cout << "\n\t\tAirline:\t\tDeparture:\tArrival:\tPrice:\tCategory:\n";
            cout << "\t\t1.Indigo   (1)\t\t10:00\t\t14:05\t\tRs.3200\t\tRefundable\n";
            cout << "\t\t2.Spice jet(2)\t\t14:00\t\t18:05\t\tRs.2500\t\tRefundable\n";
            cout << "\t\t3.Air India(3)\t\t18:00\t\t22:05\t\tRs4000\t\tRefundable\n";      
	cout<<"\n\t\tchoose flight"<<endl;
	cin>>f;
	if(f==1)
	{
		strcpy(fl_name,"Indigo");
		strcpy(dep,"10:00");
		strcpy(arr,"14:05");
		cost=2500;
		w<<fl_name<<endl;
		w<<dep<<endl;
		w<<arr<<endl;
		w<<cost<<endl;
		
	}
	else if(f==2)
	{
		strcpy(fl_name,"Spice jet");
		strcpy(dep,"14:00");
		strcpy(arr,"18:05");
		cost=3200;
		w<<fl_name<<endl;
		w<<dep<<endl;
		w<<arr<<endl;
		w<<cost<<endl;
		
	}
	else
	{
		strcpy(fl_name,"Air India");
		strcpy(dep,"18:00");
		strcpy(arr,"22:05");
		cost=4000;
		w<<fl_name<<endl;
		w<<dep<<endl;
		w<<arr<<endl;
		w<<cost<<endl;
		
	}
		system("cls");
}
void dflights::disd()
{
		cout<<"\t\tprice:"<<cost;
	cout<<"\n\t\tdeparture time:"<<dep;
	cout<<"\tarrival time:"<<arr;
	cout<<"\n****************************************************************************************************************";

}

	


class dom
{
	int da,mo,ye,x;char type[10];
	char s1[20],s2[20];
	void details();

	
	public:
		void get1();
		void dis1();
			void detailsp();
	
};
void dom::detailsp()
{
	cout<<"\t\tDate of travel:"<<da<<"-"<<mo<<"-"<<ye;
	cout<<"\n\t\tclass:"<<type;
}

void dom::details()
{
	ofstream w;
	w.open("ticket.txt",ios::app);

	cout<<"\n\t\tenter date of journey(DD)";
	cin>>da;
	w<<da<<endl;
	cout<<"\n\t\tenter month(mm)";
	cin>>mo;
	w<<mo<<endl;
	cout<<"\n\t\tenter year(yy)";
	cin>>ye;
	w<<ye<<endl;

		system("cls");
	cout<<"\n\t\tchoose class:\n\t\t1.Economy\n\t\t2.Premium economy\n\t\t3.Business"<<endl;
	cin>>x;
	if(x==1)
	{
		strcpy(type,"economy");
		w<<type<<endl;
	
	}
	else if(x==2)
	{
		strcpy(type,"premium");
		w<<type<<endl;
	
			
		
	}
	else if(x==3)
	{
		strcpy(type,"business");
		w<<type<<endl;

	}
	
	
	
	
}
void dom::get1()
{
	ofstream w;
	w.open("ticket.txt",ios::out);
	
	cout<<"\n\t\tenter FROM"<<endl;
	cin>>s1;
	w<<s1<<endl;
	
	cout<<"\t\tenter Destination"<<endl;
	cin>>s2;
	w<<s2<<endl;
		system("cls");

	details();
	
}
void dom::dis1()
{
	cout<<"\n\t\tFrom:"<<s1;
	
	cout<<"\t\t\tTo:"<<s2;
}

class payment
{
	
	public:
		int card_no,cvv;
		char id[8];
		void getpay();
		void dispay();
	
};
class dpayment:public payment
{
	public:
		void rohan();
};
void dpayment::rohan()
{
	getpay();
}


void payment::getpay()
{
	cout<<"\n\t\tenter card number(12 digit)";
	cin>>card_no;
	cout<<"\n\t\tenter cvv(3 digit)";
	cin>>cvv;
}
void payment::dispay()
{
	cout<<endl;
	cout<<"`````````````````````````````````````````````````````````````````````````````````````````````````````````````````";
	cout<<"\n\t\t~~~~~~transaction successful!!~~~~~~~~~~~~~";
	cout<<"\n\t\t~~~~~~flight ticket booked~~~~~~~~~~~~~~~~~";

	cout<<"\n\n\n*************************************************************************************************************";
	
}
class login:public payment
{
	public:
		void getl();
};
void login::getl()
{
	cout<<"enter username(in numbers(8 digit))";
	cin>>id;
}



int main()
{
	system("color F3");
	
	int ch,ch1;int pay;	ofstream w;
	cout<<"\n\n\t\t\tROHAN AIRLINES"<<endl;
	cout<<"\t\t\t\tsafe and secure"<<endl;
	cout<<"\n\n\t1.Book ticket"<<endl;
	cout<<"\t2.Print ticket"<<endl;
	cout<<"\tchoose one"<<endl;
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			system("cls");
		
	
	w.open("ticket.txt",ios::trunc);
		
		
					dom obj;passenger obj1;
					dflights obj2;payment m;login s;dpayment t;
						system("cls");
					obj.get1();
					obj2.getd();
					obj1.getp();
						system("cls");
					cout<<"\n\t\tselect payment option";
					cout<<"\n\t\t1.credit card\n\t\t2.debit card\n\t\t3.net banking";
					cin>>pay;
						system("cls");
					switch(pay)
					{
						case 1:
							m.getpay();
							break;
						case 2:
							t.rohan();
							break;
						case 3:
							int ch3;
							cout<<"\n\t\tchoose bank\n\t\t1.HDFC bank\n\t\t2.ICICI Bank\n\t\t3.AXIS Bank\n\t\t4.SBI";
							cin>>ch3;
							if((ch3>=1)&&(ch3<5))
							{
								s.getl();
								
								
							}
							break;
							
							
							
					}
						system("cls");
						int g;
						cout<<"\n\t\t1.print ticket\n\t\t2.exit";
						cin>>g;	
						if(g==1)
						{
						
						m.dispay();
						obj.dis1();
						obj1.disp();
						obj.detailsp();
						obj2.disd();
}
else
{
	break;
}
					
					break;
				case 2:
					ifstream r;
					r.open("ticket.txt",ios::in);
					char from[15];char to[10],name[20],dep[10],arr[10],gender[10],type[20],flight[20];int age,da,mo,ye,cost;
					r>>from;
					r>>to;
					r>>da>>mo>>ye;
					r>>type>>flight;
					r>>dep>>arr;
					r>>cost>>name;
					r>>age>>gender;
					cout<<"\n\t\t\t"<<flight;
					cout<<"\n\t\tfrom:"<<from;
					cout<<"\t\tTo:"<<to;
					cout<<"\n\t\tName:"<<name;
					cout<<"\t\tAge:"<<age;
					cout<<"\n\t\tGender:"<<gender;
					cout<<"\t\tClass:"<<type;
					cout<<"\n\t\tDeparture:"<<dep;
					cout<<"\t\tArrival:"<<arr;
					cout<<"\n\t\tRate:"<<cost<<"Rs";
					cout<<"\t\tDate of Journey:"<<da<<"-"<<mo<<"-"<<ye;
					r.close();
					
					
					
					

					break;
				
					}
						
					
					
				
					
				
			}
		
			
