#include <iostream>

using namespace std;

struct Pessoa
{
    int idade;
    string nome;
};

int main()
{
    ios::sync_with_stdio(false);

    int N, menor, indice_menor, cont=0, flag=0;

    cin >> N;

    struct Pessoa pessoas[N]; 

    cin >> pessoas[0].nome >> pessoas[0].idade;
    menor = pessoas[0].idade;
    indice_menor = 0;

    for(int i=1; i< N; i++)
    {
        cin >> pessoas[i].nome >> pessoas[i].idade;
        if(pessoas[i].idade < menor)
        {
            menor = pessoas[i].idade;
            indice_menor = i;
        }
    }

    flag = indice_menor;

    do
    {
        cout << pessoas[flag].nome << endl;
        cont+=1;

        flag+=1;

        if(flag >= N)
            flag = 0;

    } while(cont < N);
    

    for(int i=indice_menor; i<N; i++)
    {
        
    }

    return 0;
}