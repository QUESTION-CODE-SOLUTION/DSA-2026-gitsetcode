// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
    
// Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container. Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators. In vectors, data is inserted at the end. Inserting at the end takes differential time, as sometimes the array may need to be extended. Removing the last element takes only constant time because no resizing happens. Inserting and erasing at the beginning or in the middle is linear in time.

// What is std::vector in C++?
// std::vector in C++ is the class template that contains the vector container and its member functions. It is defined inside the <vector> header file. The member functions of std::vector class provide various functionalities to vector containers. Some commonly used member functions are written below:
    
    
    
    
    
    
    
    
    // Write C++ code here
    // int arr[5]={1,4,5,6,8};
    // arr={8,6,5,4,1};
    
    
//     Pointers are symbolic representations of addresses. They enable programs to simulate call-by-reference as well as to create and manipulate dynamic data structures. Iterating over elements in arrays or other data structures is one of the main use of pointers. 

// The address of the variable you’re working with is assigned to the pointer variable that points to the same data type (such as an int or string).
    // Pointer Variables. A computer memory location has an address and holds a content. The address is a numerical number (often expressed in hexadecimal), which is hard for programmers to use directly. Typically, each address location holds 8-bit (i.e., 1-byte) of data.
    
    
    // int arr[5]={1,4,5,6,8};
    // int *ptr=arr;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    // cout<<*(ptr+1)<<" ";
    // cout<<*(ptr+2)<<" ";
    // cout<<*(ptr+4)<<" ";
    
    // cout<<arr<<" "<<arr+4<<endl;
    // cout<<ptr<<" ";
    // cout<<(ptr+1)<<" ";
    // cout<<(ptr+2)<<" ";
    
    
    
    
    // cout<<arr+5<<endl;
    // cout<<arr+12<<endl;
    
    
    
    // char arr[6]={'a','e','i','o','u','z'};
    // cout<<sizeof(arr)<<"  its sizeof(arr) \n";
    // cout<<sizeof(arr[0])<<"  its sizeof(arr[0]) \n";
    // cout<<sizeof(arr)/sizeof(arr[0])<<" sizeof(arr)/sizeof(arr[0])";
    // // sizeof(arr[0])
    
    
    
    
    // int arr[5];
    // arr[0]=23;
    // arr[1]=34;
    // arr[2]=22;
    // arr[3]=26;
    // arr[4]=29;
    // for(int i=0;i<5;i++)
    // {
    //     cout<<i<<" "<<arr[i]<<endl;
    // }
    // cout<<arr[0]<<endl;
    // cout<<arr[4]<<endl;
    
    
    
    
    
    
//  arr=[22,67,34,98,23]
 
//  arr[0]=23
//       0  1   2  3  4
//   arr[3]=98;
//   arr[0]=22;
  
 
// [1,2,3,4,5,6,7]
//  a a+4
//      a+8
//         a+12
//         here a=memory allocation
        
        
        
// 2D dim: arr[1][1]
// [
//     [1,2,3],
//     [4,5,6],
//     [7,8,9]
// ]


// 3D dim arr[0][1][1]
//       arr[1][1][1]
// [
//     [[1,2,3],
//         [3,4,7]],
//     [
//         [34,645,56],
//         [3,7,3]
//     ]
    
// ]
    
// Properties of Arrays in C++
// An Array is a collection of data of the same data type, stored at a contiguous memory location.
// Indexing of an array starts from 0. It means the first element is stored at the 0th index, the second at 1st, and so on.
// Elements of an array can be accessed using their indices.
// Once an array is declared its size remains constant throughout the program.
// An array can have multiple dimensions.
// The number of elements in an array can be determined using the sizeof operator.
// We can find the size of the type of elements stored in an array by subtracting adjacent addresses.
// arr=[4,14,9,3]
//      r
//       r+4
//          r+8
//           r+12
    
//     arr[9]-arr[14] = 4
//     3-9=4
// arr=['a','r','y','w']
//      m   m+1  m+1+1  m+1+1+1
     
//     arr[r]-arr[a]=1

           
         
  
  
  
  
    return 0;
}
