#include <iostream>

using namespace std;
/*
 * & - Endereço
 * * - Valor do ponteiro
 * O ponteiro é nada mais nada menos que uma ponte, ou pode ser colocado como um clone da variavel, pois
 * ele se comporta como um caminho para acesso ao valor ou ao endereço da variavel apontada.
 */
//criando um ponteiro que receberar o endereço da variavel var
void modificar (int *n){
    //o ponteiro recebe o valor com o * pois sem ele o ponteiro fica como endereço da variavel assim a variavel var tera
    //o valor 40 agora
    *n = 40;
}

int main()
{
    //inicializando variavel
    int var = 10;
    //Criando ponteiro
    int *pvar;
    //inicializando o ponteiro apontando para o endereço da variavel. Note
    // Que o um ponteiro recebe seu valor apenas pelo nome; e o enderço da variavel é formado a ponte por &var
    pvar = &var;
    //endereço da variavel normal &var
    cout<<"Endereço da variavel normal: "<<&var<<endl;
    //endereço que foi apontado pelo ponteiro
    cout<<"Endereço da variavel apontada pelo ponteiro: "<<pvar<<endl;
    //Endereço do ponteiro
    cout<<"Endereço do ponteiro: "<<&pvar<<endl;
    //valor da variavel mostrada pelo ponteiro
    cout<<"Valor da variavel apontada: "<<*pvar<<endl;
    //valor da variavel mudado pelo ponteiro
    *pvar = 30;
    //valor novo mudado
    cout<<"Valor da variavel modificada pelo ponteiro: "<<*pvar<<endl;
    //passando o endereço da variavel var para a função que recebera o endereço como padrão
    modificar(&var);
    cout<<"Variavel modificada pela função: "<<var<<endl;


    return 0;
}

