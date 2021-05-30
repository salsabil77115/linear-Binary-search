#include <iostream>
#include<string>
using namespace std;
int binary_Search(int x[],int first,int last,int number){
     if (first <= last) {
int middle=(first+last)/2;

if(number==x[middle]){
    return middle;
}
else if(number<x[middle]){
   return binary_Search(x,1,middle-1,number);
}
else if(number>x[middle]){
  return  binary_Search(x,middle+1,last,number);

}
      }
       return -1;


}

int Linear_search(int x[],int first,int last,int number){
                 while (last >= first) {
                         int middle=(first+last)/2;

        if(x[middle]==number){return middle;}
        else if(x[middle]>number){last=middle-1;}
        else if(x[middle]<number){first=middle+1;}}
return -1;                 }


int main()
{
    int number;
    int arr[5]={1,2,3,4,5};
cout<<"Enter number that you need to look for it.."<<endl;
cin>>number;
cout<<"using Binary Search num("<<number<<") is in position ="<<binary_Search(arr,0,4,number);
cout<<endl;
cout<<"using Linear Search num("<<number<<") is in position ="<<Linear_search(arr,0,4,number);


    return 0;
}
