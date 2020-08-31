#ifndef ALOCACAOHOSPITAIS_H_INCLUDED
#define ALOCACAOHOSPITAIS_H_INCLUDED
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
class Pacientes{
public:
    int idade;
    std::string Nome;
    void setTipo(int  tp[]);
    void setvelConvenio(int conv[]); // 0 nao; 1 sim
    void imp(); // imprimir situação dos pacientes
private:
    int tipo[]; // 1 paciente com boans condicoes e sem problemas respiratorios; 2 estavel porem com problemas respiratorios; 3 paciente com caso avacad
    int Convenio[]; // 1 sim ; 2 não
};

    void Pacientes::setTipo(int tp[24]){ // cria vetor aleatorio com numeros de 1 a 3
        srand(time(0));
        int i;
        for (i=0; i<25; i++)
        {
            tp[i]=1+(rand()%4);
            tipo[i]=tp[i];
        }
    }
    void Pacientes::setvelConvenio(int conv[]){// gera vetor aleatorio com numeros de 0 a 1;
        srand(time(0));
        int i;
        for (i=0; i<25; i++)
        {
            conv[i]=(rand()%2);
            Convenio[i]=conv[i];
        }
    }
void Pacientes::imp(){
    std::cout<<"Nome "<< Nome<< std::endl;
    std::cout<<"Paciente possui convenio?  "<< Convenio<< std::endl;
    std::cout<<"idade: "<<idade<< std::endl;
    std::cout<<"Situacao paciente: "<< tipo<< std::endl;
    std::cout<<"-------------------------"<< std::endl;
}


class VagasHosp{

public:
    std::string NomeH;
    void setvetorleios(int vl[25][25]);
    void setAceitaPN(int apn[25]); // 0 nao 1 sim
private:
    int vetorleitos[25][25] ; // gerar um vetor de 0 e 1; 0 se leito estiver disponivel; 1 indisponivel
    int AceitaPN[]; // aceita plano ou nao 1:sim 2: nao
    int fx;

};
    void VagasHosp::setvetorleios(int vl[25][25]){//imprime todas as vagas no leito de todos so hospitais
        srand(time(0));
        int h,o;
        for (h=0; h<25; h++)
        {   for(o=0; o<25;o++){
                vl[h][o]=(rand()%2);
                vetorleitos[h][o]=vl[h][o];
                }
        }
    }
    void VagasHosp::setAceitaPN(int apn[25]){
        srand(time(0));
        int pn;
        for(pn=0; pn<25;pn++){
                apn[pn]=(rand()%2);
                AceitaPN[pn]=apn[pn];
        }
    }


#endif // ALOCACAOHOSPITAIS_H_INCLUDED
