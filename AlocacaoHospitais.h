#ifndef ALOCACAOHOSPITAIS_H_INCLUDED
#define ALOCACAOHOSPITAIS_H_INCLUDED
class Pacientes{
public:
    int idade;
    std::string Nome;
    void setTipo(int tp);
    void setvelConvenio(bool conv);
    void imp(); // imprimir situação dos pacientes
private:
    int tipo; // 1 paciente com boans condicoes e sem problemas respiratorios; 2 estavel porem com problemas respiratorios; 3 paciente com caso avacad
    bool Convenio; // 1 sim ; 2 não
};

    void Pacientes::setTipo(int tp){
        tipo=tp;
    }
    void Pacientes::setvelConvenio(bool conv){
        Convenio=conv;
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
    int leitosTotais;
private:
    int vetorleitos ; // gerar um vetor de 1 e 0; 1 se leito estiver disponivel; 0 indisponivel
    int AceitaPN; // aceita plano ou nao
    int fx;

};


#endif // ALOCACAOHOSPITAIS_H_INCLUDED
