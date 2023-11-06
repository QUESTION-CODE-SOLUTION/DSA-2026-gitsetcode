#include<iostream>
using namespace std;

int main()
{
  int i, j, rows, columns;

    cout << "Enter rows = ";
    cin >> rows;

    cout << "Enter columns = ";
    cin >> columns;

    cout << "Hollow rectangle star pattern\n"; 

    for(i = 0; i < rows; i++)
    {
      for(j = 0; j < columns; j++)
    {
            if (i == 0 || i == rows - 1 || j == 0 || j == columns - 1) 
            {
                cout << "* ";
            }
            else 
            {
                cout << "  ";
               } 
                      }
                      cout <<endl;
                  }		
                
              }


//Enter rows= 6
//Enter columns= 7
//Hollow rectangle star pattern
//* * * * * * * 
//*           *
//*           *
//*           *
//*           *
//* * * * * * *




#include<iostream>
using namespace std;
int main()
{
int n, i , j;
cout << "Enter number of rows: ";
cin >> n;
    for(i = 1; i <= n; i++)
  {
     for(j = 1; j <= i; j++)
  {
    cout << "*";
 }
     cout<<endl;
   }
    for(i = n; i >= 1; i--)
   {
     for(j = 1; j <= i; j++)
   {
       cout << "*" ;
}

     cout<<endl;
  }
}

//*
//**
//***
//****
//*****
//******
//******
//*****
//****
//***
//**
//*


#include<iostream>
using namespace std;
int main()
{
int n, i, j;
cout << "Enter number of rows: ";
cin >> n;
   
    for(i = 1; i <= n; i++){
      for(j = i; j < n; j++) {
        
        cout << " ";
      }
       for(j = 1; j <= i; j++){
          cout << "*";
        }
         cout <<endl;
        }
          for(i = n; i >= 1; i--){
            
             for(j = i; j <= n; j++){
               
               cout << " ";
            }
             for(j = 1; j < i; j++){
               
               cout<<"*";
           }
             cout<<endl;
         }
  
    }


//Enter number of rows: 6
//     *
//    **
//   ***
//  ****
// *****
//******
// *****
//  ****
//   ***
//    **
//     *


#include<iostream>
using namespace std ;
int main(){
  for(int i=0; i<=4; i++){
    for(int j=-4; j<=4; j++){
       if(j>-i && j<i){
         cout<<" ";
       }
       else{
         cout<<"*";
       }
    } 
    cout<<endl;
  }
}  


//*********
//**** ****
//***   ***
//**     **
//*       *
