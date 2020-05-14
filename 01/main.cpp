#include <iostream>
#include <omp.h>
using namespace std;

int main(){
    int liczba;
    cout<<"Podaj liczbe watkow" <<endl;
    cin>>liczba;
///omp_set_num_threads(6);
#pragma omp parallel num_threads(liczba)
{
    
    if(omp_get_thread_num()==0) cout<< omp_get_num_threads() <<endl;
    
int ID = omp_get_thread_num();
cout<<"Watek nr " << ID <<endl;

}

}