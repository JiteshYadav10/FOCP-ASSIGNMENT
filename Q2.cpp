#include <iostream>
using namespace std;
int main() {
    int size,num;
    cout<<"Enter no of integers you want to input :";
    cin>>num;
    
    int ary[num]={0};
    
    cout<<"give integer values only\n";

    for(int k=0;k<num;k=k+1) {
        cout<<"Enter element - "<<k+1<<" : ";
        cin>>ary[k]; 
        if (ary[k]==0) {
            cout<<"Successfully Exited\n";
            break;
        }
    }

    size=sizeof(ary)/sizeof(ary[0]);
    cout<<"\n Size of array is "<<size<<endl<<"\n";
    
    for (int l=0;l<num;l=l+1) {
        cout<<"Element - "<<l+1<<" = "<<ary[l]<<endl;
        if(ary[l]==0) {
            cout<<"Element "<<l+2<<" to "<<size<<" are equal to 0\n"<<endl;  
            break;
        }
    }

   
    cout<<"\n";
    for (int i=size-1;i>=0;i=i-1) {
        cout<<"Element "<<i+1<< " = "<<ary[i]<<endl;
    }

   
    int largest_no=ary[0],second_largest;
    int smallest_no=ary[0],second_smallest;
    
    for(int i=1;i<num;i=i+1) {
        if (ary[i]>largest_no) {
            second_largest=largest_no;
            largest_no=ary[i];
        }
        else if (ary[i]>second_largest) {
            second_largest=ary[i];
        }
        if (ary[i]<smallest_no) {
            second_smallest=smallest_no;
            smallest_no=ary[i];
        }
        else if(ary[i]<second_smallest) {
            second_smallest=ary[i];
        }
    }

    cout<<"\nLargest element in the array is "<<largest_no<<endl;
    cout<<"Second largest element in the array is "<<second_largest<<endl;
    cout<<"Smallest element in the array is "<<smallest_no<<endl;
    cout<<"Second smallest element in the array is "<<second_smallest<<endl;
    
    return 0;

}