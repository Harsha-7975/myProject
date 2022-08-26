//Insertion in array
#include<iostream>

using namespace std;

void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int indInsertion(int arr[],int size,int cap,int element,int index)
{
    if(size>=cap)
    {
        return -1;
    }
    for(int i=size-1;i>=index;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;

}

int indDeletion(int arr[],int size,int cap,int index)
{
    if(size>=cap)
    {
        return -1;
    }
    for(int i=index;i<size-1;i++)
    {
        arr[i] = arr[i+1];
    }
    return 1;
}

int main()
{
    int arr[10] = {1,2,3,4,5};
    int size = 5,capacity  = 10,element = 45,index = 2;
    display(arr,size);
    

    indInsertion(arr,size,capacity,element,index);
    size += 1;
    display(arr,size);

    indDeletion(arr,size,capacity,index);
    size -= 1;
    display(arr,size);
    





    return 0;
}