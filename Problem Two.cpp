#include <iostream>
#include<string>
using namespace std;
int display(int);
void averagegpa(string[],int,int[][3],int);
void highest(string[],int,int[][3],int,string[],int);
void lowest(string[],int,int[][3],int,string[],int);
void averagegrade(string[],int,int[][3],int);
void showgrades(string[],int,int[][3],int,string[],int);
void coursenames(string[],int);
void studentnames(string[],int);
void modifygrade(string[],int,int[][3],int,string[],int);
void modifycourse(string[],int);
void alphabet(string[],int,int[][3],int);
int main()
{
    cout<<"1-display the average GPA of each student along with its name"<<endl;
    cout<<"2-display the student with the highest degree in each course "<<endl;
    cout<<"3-display the student with the lowest degree in each course"<<endl;
    cout<<"4-display the average grade of each course"<<endl;
    cout<<"5-display students and all their grades in a table"<<endl;
    cout<<"6-display courses names"<<endl;
    cout<<"7-display students names"<<endl;
    cout<<"8-modify a student grade in a course "<<endl;
    cout<<"9-modify a course name"<<endl;
    cout<<"10-sort the students and their grades alphabetically "<<endl;
    cout<<"11-exit"<<endl;
    cout<<endl;
    cout<<"choose one of the following by entering its number..."<<endl;
    int n;
    cin>>n;
    display(n);

    return 0;
}
int display(int n){
string students[5]={"sarah","farah","yarah","ahmed","tarek"};
string courses[3]={"Management","Biology","Chemistry"};
int grades[5][3]={{40,80,70},{70,90,80},{60,50,90},{100,40,60},{50,60,100}};
if(n==11)
    return 0;
switch(n){
case 1:
    averagegpa(students,5,grades,5);
    break;
case 2:
    highest(students,5,grades,5,courses,3);
    break;
case 3:
    lowest(students,5,grades,5,courses,3);
    break;
case 4:
    averagegrade(courses,3,grades,5);
    break;
case 5:
    showgrades(students,5,grades,5,courses,3);
    break;
case 6:
    coursenames(courses,3);
    break;
case 7:
    studentnames(students,5);
    break;
case 8:
    modifygrade(students,5,grades,5,courses,3);
    break;
case 9:
    modifycourse(courses,3);
    break;
case 10:
    alphabet(students,5,grades,5);
    break;
default:
    cout<<"incorrect input ,try again later"<<endl;
}
cout<<"1-display the average GPA of each student along with its name"<<endl;
cout<<"2-display the student with the highest degree in each course "<<endl;
cout<<"3-display the student with the lowest degree in each course"<<endl;
cout<<"4-display the average grade of each course"<<endl;
cout<<"5-display students and all their grades in a table"<<endl;
cout<<"6-display courses names"<<endl;
cout<<"7-display students names"<<endl;
cout<<"8-modify a student grade in a course "<<endl;
cout<<"9-modify a course name"<<endl;
cout<<"10-sort the students and their grades alphabetically "<<endl;
cout<<"11-exit"<<endl;
cout<<endl;
cout<<"choose one of the following by entering its number..."<<endl;
cin>>n;
display(n);
}
const int x=5;
const int rows=5;
const int y=3;
void averagegpa (string students[],int x,int grades[][3],int rows){
for(int i=0;i<5;i++){
    int sum=0;
    for(int j=0;j<3;j++){
        sum=sum+grades[i][j];
    }
    sum=sum/3.0;
    if(sum>=90)
       sum=4.0;
     else if(sum>=80)
        sum=3.5;
     else if(sum>=70)
        sum=3;
     else if(sum>=60)
        sum=2.5;
     else if(sum>=50)
        sum=2;
     else
        sum=0;

    cout<<students[i]<<"\t"<<sum<<endl;
}
}
void highest(string students[],int x,int grades[][3],int rows,string courses[],int y){
int maxgrade=0;
int temp=0;
for(int m=0;m<3;m++){
for(int i=0;i<5;i++){
        if(grades[i][m]>=maxgrade){
            maxgrade=grades[i][m];
            temp=i;
        }
        else{
           continue;
        }
}
 cout<<courses[m]<<"\t"<<students[temp]<<"\t"<<maxgrade<<endl;
 maxgrade=0;
 temp=0;
}
}
void lowest(string students[],int x,int grades[][3],int rows,string courses[],int y){
int mingrade=10000000000000;
int temp=0;
for(int m=0;m<3;m++){
for(int i=0;i<5;i++){
        if(grades[i][m]<=mingrade){
            mingrade=grades[i][m];
            temp=i;
        }
        else{
           continue;
        }
}
 cout<<courses[m]<<"\t"<<students[temp]<<"\t"<<mingrade<<endl;
 mingrade=100000000000;
 temp=0;
}
}
void averagegrade(string courses[],int y,int grades[][3],int rows){
for(int j=0;j<3;j++){
    int sum=0;
  for(int i=0;i<5;i++){
    sum=sum+grades[i][j];
  }
cout<<courses[j]<<" \t "<<sum/5.0<<endl;
}
}
void showgrades(string students[],int x,int grades[][3],int rows,string courses[],int y){
int a=0;
cout<<"  ";
for(int m=0;m<3;m++)
    cout<<courses[m]<<"  ";
cout<<endl;
for(int i=0;i<5;i++){
    for(int j=0;j<3;j++){
        if(a!=1)
          cout<<students[i]<<"\t";
        a=1;
        cout<<grades[i][j]<<"\t";
    }
    cout<<endl;
    a=0;
}
}
void coursenames(string courses[],int y){
for(int i=0;i<3;i++){
    cout<<courses[i]<<endl;
}
}
void studentnames(string students[],int x){
for(int i=0;i<5;i++)
    cout<<students[i]<<endl;
}
void modifygrade(string students[],int x,int grades[][3],int rows,string courses[],int y){
cout<<"please enter the name of the student"<<endl;
string name,course;
int check1=0,temp1,temp2,check2=0;
cin>>name;
for(int i=0;i<5;i++){
    if(students[i]==name){
        check1=100;
        temp1=i;
        break;
    }
    if(check1!=100 && i==4)
        cout<<"invalid name,try again later"<<endl;
}
if(check1==100){
cout<<"now enter the name of the course"<<endl;
cin>>course;
for(int j=0;j<3;j++){
    if(courses[j]==course){
        check2=100;
        temp2=j;
        break;
    }
    if(check2!=100 && j==2)
        cout<<"invalid course name,try again later"<<endl;
}
}
if(check2==100){
    cout<<"now enter the wanted grade "<<endl;
    float grade;
    cin>>grade;
 grades[temp1][temp2]=grade;
    cout<<"modification is done"<<endl;
}
}
void modifycourse(string courses[],int y){
string name,newname;
int temp,check=0;
cout<<"enter the course you want to modify"<<endl;
cin>>name;
for(int i=0;i<3;i++){
    if(courses[i]==name){
        check=100;
        temp=i;
        break;
    }
    if(check!=100 && i==2)
        cout<<"invalid course name,try again later"<<endl;
}
if(check==100){
    cout<<"now enter the new course name"<<endl;
    cin>>newname;
    courses[temp]=newname;
    cout<<"modification is done "<<endl;
}
}
void alphabet(string students[],int x,int grades[][3],int rows){
while(true){
    int swapped=0;
    for(int i=0;i<4;i++){
        string temp=students[i];
        string temp1;
        string temp2=students[i+1];
        int tem;
        int x=int(temp[0]);
        int y=int(temp2[0]);
        if(x>y){
            temp1=students[i];
            students[i]=students[i+1];
            students[i+1]=temp1;
            swapped=1;
            for(int m=0;m<3;m++){
                tem=grades[i][m];
                grades[i][m]=grades[i+1][m];
                grades[i+1][m]=tem;
            }
        }
        else
            continue;
    }
    if(swapped==0)
        break;
}
for(int j=0;j<5;j++){
        int a=0;
        for(int n=0;n<3;n++){
            if(a!=1)
                cout<<students[j]<<" \t";
            a=1;
            cout<<grades[j][n]<<" \t ";
        }
        cout<<endl;
        a=0;
}
}
