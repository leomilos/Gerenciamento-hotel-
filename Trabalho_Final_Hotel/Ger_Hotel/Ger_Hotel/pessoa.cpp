#include "pessoa.h"

Pessoa::Pessoa()
{  
}

Pessoa::Pessoa(QString nome,QString senha,QString idade,QString sexo,QString cpf){

    this->nome = nome;
    this->senha = senha;
    this->idade = idade;
    this->sexo = sexo;
    this->cpf = cpf;
}

QString Pessoa::getNome(){
    return nome;
}

QString Pessoa::getSenha(){
    return senha;
}

QString Pessoa::getIdade(){
    return idade;
}

QString Pessoa::getSexo(){
    return sexo;
}

QString Pessoa::getCPF(){
    return cpf;
}

void Pessoa::setNome(QString nome){
    this->nome = nome;
}
void Pessoa::setSenha(QString senha){
    this->senha = senha;
}
void Pessoa::setIdade(QString idade){
    this->idade = idade;
}
void Pessoa::setSexo(QString sexo){
    this->sexo = sexo;
}
void Pessoa::setCPF(QString cpf){
    this->cpf = cpf;
}

void Pessoa::setSNome(string nome){
    this->snome = nome;
}
void Pessoa::setSSenha(string senha){
    this->ssenha = senha;
}
void Pessoa::setSIdade(string idade){
    this->sidade = idade;
}
void Pessoa::setSSexo(string sexo){
    this->ssexo = sexo;
}
void Pessoa::setSCPF(string cpf){
    this->scpf = cpf;
}

string Pessoa::getSNome(){
    return snome;
}

string Pessoa::getSSenha(){
    return ssenha;
}

string Pessoa::getSIdade(){
    return sidade;
}

string Pessoa::getSSexo(){
    return ssexo;
}

string Pessoa::getSCPF(){
    return scpf;
}
