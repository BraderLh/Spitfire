#include <iostream>

using namespace std;

void ingresar(int N[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Ingrese los numeros: ";
        cin>>N[i];
    }
}
void mostrar(int N[],int n)
{
    for(int i=0;i<n;i++)
        cout<<N[i]<<endl;
}
void compruebe(int N[],int n)
{
    int a,b;
    for(int i=0;i<n;i++)
        for(int j=1;j<n;j++)
        {
            if(N[i]>N[j])
                a=N[i];
                cout<<"Max: "<<a<<endl;
            if(N[i]<N[j])
                b=N[i];
                cout<<"Min: "<<b<<endl;
        }
    cout<<"Range: "<<a-b<<endl;
}

int main()
{
    int n;
    cout<<"Numero de Elementos?: ";
    cin>>n;
    int N[10];
    ingresar(N,n);
    mostrar(N,n);
    compruebe(N,n);
}
