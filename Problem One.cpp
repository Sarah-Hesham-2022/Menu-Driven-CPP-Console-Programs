#include <iostream>
using namespace std;
void even(int,int);
void odd(int,int);
int sum(int,int);
void prime(int,int);
int maxprime(int,int);
int maxnonprime(int,int);
int sumnonprime(int,int);
void newrange();
void getout();
int main()
{
    char sentinel='y';
    do{
        int n1,n2,temp;
        char choice;
        cout<<"enter the two numbers..."<<endl;
        cin>>n1>>n2;
        if(n1>n2){
            temp=n1;
            n1=n2;
            n2=temp;
        }
        cout<<endl;
        cout<<endl;
        cout<<"choose one of the following choices..."<<endl;
        cout<<"1-get all even numbers within the range."<<endl;
        cout<<"2-get all odd numbers within the range."<<endl;
        cout<<"3-get the sum of all numbers within the range."<<endl;
        cout<<"4-get all prime numbers within the range."<<endl;
        cout<<"5-get maximum prime number within the range."<<endl;
        cout<<"6-get maximum non-prime number within the range."<<endl;
        cout<<"7-get total of non-prime numbers within the range."<<endl;
        cout<<"8-enter new range"<<endl;
        cout<<"E-exit the program."<<endl;
        cout<<endl;
        cout<<endl;
        cin>>choice;
        cout<<endl;
        cout<<endl;
        if(choice!='e'&& choice!='E'){
            sentinel='y';
        }
        else{
            sentinel='a';
        }
        switch(choice){
        case '1':
           even(n1,n2);
           break;
        case '2':
            odd(n1,n2);
            break;
        case'3':
            cout<<sum(n1,n2)<<endl;
            break;
        case'4':
            prime(n1,n2);
            break;
        case'5':
            cout<<maxprime(n1,n2)<<endl;
            break;
        case '6':
            cout<<maxnonprime(n1,n2)<<endl;
            break;
        case'7':
            cout<<sumnonprime(n1,n2)<<endl;
            break;
        case '8':
            newrange();
            break;
        case 'E':
        case'e':
            getout();
            break;
        default:
            cout<<"wrong input ,try again later..."<<endl;
        }
    }
        while(sentinel=='y');
    return 0;
}
void even(int a,int b){
  for(int i=a;i<=b;i++){
    if(i%2==0)
        cout<<i<<endl;
  }
}
void odd(int a,int b){
   for(int i=a;i<=b;i++){
    if(i%2!=0)
        cout<<i<<endl;
   }
}
int sum(int a,int b){
 int add=0;
 for(int i=a;i<=b;i++){
    add=add+i;
    }
    return add;
}
int value=0;
void prime(int a,int b){
    if(b==2)
        cout<<2<<endl;
    else if(b==3)
        cout<<2<<endl<<3<<endl;
    else if(b==1)
        cout<<"one is not prime and no number before it is prime as well"<<endl;
    else{
         if(a==1 || a==2 || a==0)
            cout<<2<<endl;
        for(int i=a;i<=b;i++){
            for(float j=2.0;j<i;j++){
                if((i/j) == (i/int(j))){
                    int value=100;
                    break;
                }
                else{
                    if(value!=100 && (j==i-1))
                       cout<<i<<endl;
                }
            }

        }
}
}
int value1=0;
int maxvalue=0;
int maxprime(int a,int b){
    int maxvalue=0;
    if(b==2)
        cout<<2<<endl;
    else if(b==3)
        cout<<2<<endl<<3<<endl;
    else if(b==1)
        cout<<"one is not prime and no number before it is prime as well"<<endl;
    else{
        for(int i=a;i<=b;i++){
            for(float j=2.0;j<i;j++){
                if(i/j == i/int(j)){
                    int value1=100;
                    break;
                }
                else{
                    if(value!=100 && (j==i-1)){
                           if(i>maxvalue)
                                maxvalue=i;
                }
            }

        }
    }
    }
       return maxvalue;
}
int maxvalue2=0;
int maxnonprime(int a,int b){
 for(int i=a;i<=b;i++){
        for(float j=2.0;j<i;j++){
            if(i/j ==i/int(j)){
                 if(i>maxvalue2)
                    maxvalue2=i;
                 break;
            }
        }

 }
return maxvalue2;
}
int sumnonprime(int a,int b){
 int add=0;
 for(int i=a;i<=b;i++){
        for(float j=2.0;j<i;j++){
            if(i/j ==i/int(j)){
                 add=add+i;
                 break;
            }
        }

 }
return add;
}
char choice,sentinel;
void newrange(){
   while(choice=='8')
     continue;
}
void getout(){
 while(choice=='e' || choice=='E'){
        sentinel='a';
        continue;
 }
}





