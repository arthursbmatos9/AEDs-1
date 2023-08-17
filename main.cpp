#include <iostream>
#include <cstring>
using namespace std;

bool verificacaoDataValida(int dia, int mes, int ano);
void listeAniversariantes(int mesRef);

const int TAM = 10;


class Data
{
    private:
        int dia;
        int mes;
        int ano;

    public:
        void setDia(int dia)
        {
            this->dia = dia;
        }

        void setMes(int mes)
        {
            this->mes = mes;
        }

        void setAno(int ano)
        {
            this->ano = ano;
        }

        void setData(int dia, int mes, int ano)
        {
            this->dia = dia;
            this->mes = mes;
            this->ano = ano;
        }

        int getDia()
        {
            return dia;
        }

        int getMes()
        {
            return mes;
        }

        int getAno()
        {
            return ano;
        }

        int getData()
        {
          return dia;
          return mes;
          return ano;
        }

        void leiaData()
        {
            int d, m, a;
            bool erro;

            do{
                cout << "\nDigite a data no formato [dd/mm/aaaa]: ";
                scanf("%d/%d/%d", &d, &m, &a);
                erro = verificacaoDataValida(d, m, a);
                if(erro == false) puts("Data invalida, tente novamente!");
            }while(erro == false);

            setDia(d);                 //colocando o dia, mes e ano nas variaveis (private) de Data
            setMes(m);
            setAno(a);
        }

        void escrevaData()
        {
            printf("%d/%d/%d\n", getDia(), getMes(), getAno() );
        }

};

class Pessoa
{
    private:
        string nome;
        Data dataNascimento;
        
    public:
        static int Q;       //Q é a quantidade (posicao) da pessoa dentro da class Pessoa - inicializar depois das class

        Pessoa()              //construtor 
        {
            Q++;  
        }

        ~Pessoa()             //destrutor
        {
          Q--;
        }

        void setNome(string nome)
        {
            this->nome = nome;
        }
        
        string getNome()
        {
            return nome;
        }

        void setDataNascimento(int dia, int mes, int ano)
        {
            dataNascimento.setData(dia, mes, ano);
        }

        Data getDataNascimento()
        {
            return dataNascimento;
        }
        
        void leiaPessoa()
        {
          cin.ignore();  //fflush(stdin)
          cout <<"\nDigite o nome: ";
          getline(cin, nome);
          setNome(nome);  //chamando a funcao que salva o nome no atributo privado (setNome)

          cout <<"\nDigite a data de nascimento dessa pessoa";
          dataNascimento.leiaData(); //chamando a funcao leiaData, mas que nao faz parte da class Pessoa, entao tem que colocar o atributo de onde ela vem antes (dataNascimento é o nome da class Data em Pessoa)
        }

        virtual void escrevaPessoa()     //a funcao VIRTUAL é a que vai ser modificada(especializada) em cada uma das class depois
        {
          cout << "\nNome = " << getNome() << "; Data de nascimento = " << dataNascimento.getDia() << "/" << dataNascimento.getMes() << "/" << dataNascimento.getAno() << "; ";

        }

        virtual void listeAniversariantes(int mesRef)
        {
          if (mesRef == dataNascimento.getMes())
          {
               cout << "Aniversariante: " << nome << " - no dia: " << dataNascimento.getDia() << "/" << dataNascimento.getMes() << "/" << dataNascimento.getAno() << "; " << endl;
                
          }
        }
        
};

class Aluno: public Pessoa                //colocar public para poder acessar as funcoes
{
    private:
      int matricula;

    public:
        static int Q;               //Q- quantidade: inicializar depois das class

        Aluno()
        {
          Q++;
        }

        ~Aluno()
        {
          Q--;
        }

        void setMatricula(int matricula)
        {
          this->matricula = matricula;
        }

        int getMatricula()
        {
          return matricula;
        }

        void leiaAluno()
        {
          leiaPessoa();
    
          cin.ignore();
          cout << "\nDigite o numero da matricula desse aluno: ";
          cin >> matricula;
          setMatricula(matricula);
        }

        void escrevaPessoa()       //essa é a funcao virtual de PESSOA, nas class ela tem que ter o mesmo nome
        {
        cout << "\nNome = " << getNome() << "; Data de nascimento = " << getDataNascimento().getDia() << "/" << getDataNascimento().getMes() << "/" << getDataNascimento().getAno() << "; Matricula = " << getMatricula() << endl;
    }

        void listeAniversariantes(int mesRef)
        {
          if (mesRef == getDataNascimento().getMes())
          {
              cout << "\nALUNO ANIVERSARIANTE: ";
              escrevaPessoa();
              cout << endl;
          }
        }
};

class Professor: public Pessoa             //colocar public para poder acessar as funcoes
{
    private:
       string titulacao;

    public:
      static int Q;                //Q- quantidade: inicializar depois das class

      Professor()
      {
         Q++;
      }

      ~Professor()
      {
        Q--;
      }

      void setTitulacao(string titulacao)
      {
        this->titulacao = titulacao;
      }

      string getTitulacao()
      {
        return titulacao;
      }

      void leiaProfessor()
      {
        leiaPessoa();

        cout << "\nDigite a titulação do professor: ";
        cin >> titulacao;
        setTitulacao(titulacao);
    }

      void escrevaPessoa()
      {
        cout << "\nNome = " << getNome() << "; Data de nascimento = " << getDataNascimento().getDia() << "/" << getDataNascimento().getMes() << "/" << getDataNascimento().getAno() << "; Titulação = " << getTitulacao() << endl;
      }

      void listeAniversariantes(int mesRef)
        {
          if (mesRef == getDataNascimento().getMes())
          {
              cout << "\nPROFESSOR ANIVERSARIANTE: ";
              escrevaPessoa();
              cout << endl;
          }
        }
};

int Pessoa::Q = 0;
int Aluno::Q = 0;           //inicializando a posicao dos alunos em 0
int Professor::Q = 0;      //inicializando a posicao dos professores em 0


void cadastraAlunos(Aluno* aluno[])
{
    try{
        if(Aluno::Q == TAM)                 //Aluno::Q é a posicao do aluno dentro da class Aluno (Q é o contador/quantidade)
          throw runtime_error("ERRO: Limite de alunos alcançado [10]!");
          
        else       
        {
          aluno[Aluno::Q] = new Aluno();    //criando o espaco (como se fosse MALLOC) e ativando construtor
          aluno[Aluno::Q]->leiaAluno();
        }
    }

    catch(runtime_error erro){
        cout << erro.what() << endl;
    }
}

void listaAlunos(Aluno* aluno[])
{
    for(int i= 1; i<= Aluno::Q; i++)
    {
        aluno[i]->escrevaPessoa();
    }
}

void cadastraProfessores(Professor* professor[])
{
  try{
      if(Professor::Q == TAM)          //Professor::Q é a posicao do professor dentro da class Aluno (Q é o contador/quantidade)
        throw runtime_error("ERRO: Limite de professores alcançado [10]!");
        
      else
      {
        professor[Professor::Q] = new Professor;    //criando o espaco (como se fosse MALLOC) e ativando construtor
        professor[Professor::Q]-> leiaProfessor();
      }
  }

  catch(runtime_error erro){
      cout << erro.what() << endl;
  }
}

void listaProfessores(Professor* professor[])
{
  for(int i= 1; i<= Professor::Q; i++)
    {
      professor[i]->escrevaPessoa();
    }
}

void verificaMesesIguais(Aluno* aluno[], Professor* professor[])
{
  int mesRef;

  cout << "Digite algum mês para ver os aniversariantes: ";
  cin >> mesRef;

  for (int i = 1; i <= Aluno::Q; i++)              //verificando os alunos
  {
    aluno[i]->listeAniversariantes(mesRef);
  }

  for (int i = 1; i <= Professor::Q; i++)          //verificando os professores
  {
    professor[i]->listeAniversariantes(mesRef);
  }
}

bool verificacaoDataValida(int dia, int mes, int ano)
{
    bool dataValida = true;
    
    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
    {
      if(dia < 1 || dia > 31)
        dataValida = false;
    }
    
    else if(mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
      if(dia < 1 || dia > 30)
        dataValida = false;
    }

    else if(mes == 2)
    {
      if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
      {
        if(dia < 1 || dia > 29)
        dataValida = false;
      }
        
      else
      {
        if(dia < 1 || dia > 28)
        dataValida = false;
      }
    }
      
    else
      dataValida = false;

    return dataValida;
}

int menu()
{
    int opcao;
    bool erro;

    do{
        puts("\n\nMenu de opcoes:\n");
        puts("0- Sair\n1- Cadastrar aluno\n2- Cadastrar professor\n3- Listar alunos\n4- Listar professores\n5- Listar todos os aniversariantes do mês\n");
        printf("\nSua opcao: ");
        scanf(" %i", &opcao);
        erro = (opcao < 0 || opcao > 5);
        if(erro) puts("Opcao invalida, tente novamente!");
    }while(erro);

    return opcao;
}

int main()
{
    Pessoa* pessoa[TAM * 2];         //TAM-Alunos + TAM-Professores
    Aluno* aluno[TAM];
    Professor* professor[TAM];
    int opc;                       //opc = opcao que o usuario escolher no menu

    do{
        opc = menu();
        switch(opc)
        {
            case 1:
                cadastraAlunos(aluno);     
                break;
            case 2:
                cadastraProfessores(professor);
                break;
            case 3:
                listaAlunos(aluno);
                break;
            case 4:
                listaProfessores(professor);
                break;
            case 5:
                verificaMesesIguais(aluno, professor);
                break;
        }

    }while(opc != 0);


    return 0;
}

