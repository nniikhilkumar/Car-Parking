#include<iostream>
using namespace std;
int main(){
    int n=0,amount=0,countt=0,a=0,b=0,c=0;
    while(true){
            system("cls");
     cout<<"\n\t*******************"<<endl;
        cout<<"\tamount="<<amount<<endl;
        cout<<"\tcount="<<countt<<endl;
        cout<<"\tBike="<<b<<endl;
        cout<<"\tAuto="<<a<<endl;
        cout<<"\tCar="<<c<<endl;

        cout<<"\t*******************"<<endl;
    cout<<"\n\tPress 1 for bike"<<endl;
    cout<<"\tPress 2 for Auto"<<endl;
    cout<<"\tPress 3 for car"<<endl;
    cout<<"\tPress 4 for Vehicle out from Parking"<<endl;

    cout<<"\tPress 5 for delete chart"<<endl;
    if(n>=5){
        cout<<"\tEnter wrong no!!!"<<endl;
    }
    cout<<"\tPress Botton: ";
    if(countt>50){
        cout<<"\tParking is full Please awaite!!!!!";
    }
    cin>>n;
    if(n==1){
        if(countt<50){
        amount+=50;
        countt++;
        b++;
        }

    }
    else if(n==2){
        if(countt<50){
        amount+=70;
        countt++;
        a++;
            }

    }
    else if(n==3){
        if(countt<50){
        amount+=100;
        countt++;
        c++;
        }

    }

    else if(n==4){
            int n1;
        cout<<"\nPlease enter which vehicle is out: ";
        cin>>n1;
    if(n1==1 && b>0){
            countt--;
        b--;
    }
        if(n1==2 && a>0 ){
            countt--;
        a--;
    }
        if(n1==3 && c>0){
            countt--;
        c--;
    }
    }

    else if(n==5){
        countt=0;
        amount=0;
        b=0;
        c=0;
        a=0;
    }
    else{
        cout<<"\n\t\tyou enter invalid no!!!!";
    }
    }
    return 0;
}
