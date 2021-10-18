/* Hospital Management System used for both admin side and user side services like appointment booking,Admission of Patients,keeping check on medicine stock availability and beds availability*/


#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int pdata()
{string pname;
 string dept;
 string ward;
    int page;
    cout<<"Enter patient's name"<<endl;
    cin>>pname;
    cout<<"Enter age of patient"<<endl;
    cin>>page;
    cout<<"Concerned Department "<<endl;
    cin>>dept;
    cout<<"Ward equiped"<<endl;
    cin>>ward;

    fstream pfile;
    pfile.open("pfile1.txt",ios::out|ios::app);   //Creating a file
    if(!pfile)
    {
        cout<<"File not created"<<endl;
    }
    else
    {
        cout<<"File created"<<endl;
        pfile<<"---Name--------Age--------Department--------Ward---"<<endl;    //Writing to file
        pfile<<"   "<<pname<<"      "<<page<<"      "<<dept<<"    "<<ward<<endl;
        pfile.close();

    }
    return 0;

}
int main()

{   
    int x,y,z;
    int i=0,p=0;
    int a;


    cout<<"----------MEDLIFE HOSPITAL-----------"<<endl;
    cout<<"1.Admit Patient"<<endl;
    cout<<"2.Book an appointment"<<endl;
    cout<<"3.Admin Services"<<endl;
    cout<<"Enter the number indicated for following services"<<endl;
    cin>>x;
    if(x==1)
    {
        pdata();
    }
     if(x==2)
    {
        cout<<"---Department---"<<endl;
        cout<<"6.Cardiology"<<endl;
        cout<<"7.ENT"<<endl;
        cout<<"8.Obstetrics and Gynaecology"<<endl;
        cout<<"9.Orthopedics"<<endl;
        cout<<"10.Pysiotherapy"<<endl;
        cout<<"11.Coronary care unit"<<endl;
        cout<<"Enter sr.no. of department"<<endl;
        cin>>z;
        cout<<"12 for morning slot(10:00 to 02:00//13 for evening slot(07:00 to 09:30)"<<endl;

        cin>>a;
        unsigned long long r;
        cout<<"Enter your mobile number"<<endl;
        cin>>r;
        fstream mofile;
        mofile.open("mofile.txt",ios::out|ios::app);
        if(!mofile)
        {
            cout<<"File not created";

        }
        else
        {
            cout<<"File created"<<endl;
            mofile<<"-------Mobile No.-----Department Sr.No.-----Slot No.----"<<endl;
            mofile<<"        "<<r<<"        "<<z<<"             "<<a<<"    "<<endl;
            mofile.close();
        }
        cout<<"Your slot number will be conveyed through text message"<<endl;

        cout<<"------------------THANK YOU-----------------";
    }
    if(x==3)
    { cout<<"Enter ID and password to continue"<<endl;
      cin>>i>>p;
      
      if(i== 123&& p==12345)
    {
        cout<<"4 for medicine stock"<<endl;
        cout<<"5 for beds available"<<endl;
    }
    else
    cout<<"Invalid"<<endl;
    }
    cin>>y;
    if(y==4)
    {
      fstream mfile;
      mfile.open("mfile.txt",ios::out|ios::app);  //File created
      if(!mfile)
      {
          cout<<"File not created"<<endl;
      }
      else
      {
          mfile<<" Medicine----------------Qty"<<endl;
          mfile<<" Paracetamol(500mg)     1000"<<endl;
          mfile<<" Introkunal(10mg)        300"<<endl;
          mfile<<" Ivermectin(12mg)        550"<<endl;
          mfile<<" Multivitamin Tabs.     3000"<<endl;
          mfile<<" Antibiotics(diff.)    15000"<<endl;
          mfile.close();
      }
      mfile.open("mfile.txt",ios::in);
      if(!mfile)
      {
          cout<<"No file"<<endl;
      }
      else
      {
          char ch;
          while(!mfile.eof())
          {
              mfile>>ch;
              cout<<ch;
          }
          mfile.close();
      }
    }  
      if(y==5)
      {   int c=0,p=0;
          int f;
           int gb,pb;
          cout<<"General Ward-------100 beds available"<<endl;
          cout<<"Private Ward--------50 beds  available "<<endl;
          string day;
          cout<<"Enter the day"<<endl;
          cin>>day;
          
              cout<<"Enter no. of  general beds equipped"<<endl;
              cin>>gb;
              if(gb>100)
              {cout<<"Enter the correct data"<<endl;
                
              }
           cout<<"Enter no. of  private beds equipped"<<endl;
           cin>>pb;
           if(pb>50)
          { cout<<"Enter the correct data"<<endl;
            
          }
          int pd,gd;
          cout<<"Enter the no. of patients discharged from general ward and private ward"<<endl;
          cin>>gd>>pd;
          cout<<(100+gd)-gb<<" general beds available out of 100"<<endl;
           cout<<(50+pd)-pb<<" Private beds available"<<endl;
          fstream bfile;
          bfile.open("bfile.txt",ios::out|ios::app);
          if(!bfile)
          {
              cout<<"File not created";
          }
          else
          {
              cout<<"File created"<<endl;
              bfile<<"-----DAY----------GENERAL BEDS EQUIPPED-----------PRIVATE BEDS EQUIPPED--------Patients Discharged"<<endl;
              bfile<<"     "<<day<<"           "<<gb<<"/100"<<"                         "<<pb<<"/50"<<"                    "<<gd+pd<<endl;
              bfile<<"           "<<(100+gd)-gb<<" general and "<<(50+pd)-pb<<" private beds available for next day"<<endl;
              bfile.close();
          }



      }
      
   
    return 0;
}    
