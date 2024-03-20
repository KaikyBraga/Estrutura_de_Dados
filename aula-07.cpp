#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Livro
{
    string strTitulo;
    string strAutor;
    int iPublicaco;
};
    
struct Ponto
{
    unsigned short usRed;
    unsigned short usGreen;
    unsigned short usBlue;
};

// Poderia uar typedef struct Biblioteca, para chamar apenas por Biblioteca
struct Biblioteca
{
    string strNome;
    int iTamAcervo;
    struct Livro livros[1000];
};

void listarLivros(struct Biblioteca);
void adicionarLivros(struct Biblioteca&, struct Livro);

int main()
{
    struct Biblioteca biblioteca;
    biblioteca.strNome = "Biblioteca do Palácio Botafogo";
    biblioteca.iTamAcervo = 0;

    struct Livro livro1;
    livro1.strTitulo = "Outlierss: The Story of Sucess";
    livro1.strAutor = "Malcolm Gladwell";
    livro1.iPublicaco = 2008; 

    struct Livro livro2;
    livro2.strTitulo = "How to Grow Old";
    livro2.strAutor = "Marus Tullius Cicero";
    livro2.iPublicaco = -44; 

    struct Livro livro3;
    livro3.strTitulo = "Cálculo";
    livro3.strAutor = "James Stewart";
    livro3.iPublicaco = 2024; 

    struct 
    {
        int iIdade;
        string strNome;
    } alunoEMAp;

    // Acesso aos membros de dados a partir de .
    alunoEMAp.iIdade = 18;
    alunoEMAp.strNome = "Ana";

    cout << "Idade do Aluno EMAp: " << alunoEMAp.iIdade << endl;
    cout << "Nome do Aluno EMAp: " << alunoEMAp.strNome << endl;

    struct 
    {
        int iIdade;
        string strNome;
    } alunoEMAp1, alunoEMAp2;

    
    alunoEMAp1.iIdade = 20;
    alunoEMAp1.strNome = "Antonio";

    alunoEMAp1.iIdade = 17;
    alunoEMAp1.strNome = "Henzo";

    cout << "Idade do Aluno EMAp1: " << alunoEMAp1.iIdade << endl;
    cout << "Nome do Aluno EMAp1: " << alunoEMAp1.strNome << endl;
    
    cout << "Idade do Aluno EMAp2: " << alunoEMAp2.iIdade << endl;
    cout << "Nome do Aluno EMAp2: " << alunoEMAp2.strNome << endl;

    biblioteca.livros[0] = livro1;
    biblioteca.iTamAcervo += 1;
    biblioteca.livros[1] = livro2;
    biblioteca.iTamAcervo +=1;

    cout << "Titulo 1:" << livro1.strTitulo << ", por" << livro1.strAutor << endl;
    cout << "Publicado em: " << livro1.iPublicaco << ".\n" << endl;

    cout << "Titulo 2:" << livro2.strTitulo << ", por" << livro2.strAutor << endl;
    cout << "Publicado em: " << livro2.iPublicaco << ".\n" << endl;

    struct Ponto telaComputador[640][280];
    telaComputador[0][0].usRed = 0;
    telaComputador[0][0].usGreen = 0;
    telaComputador[0][0].usBlue = 0;

    cout << "RGB[0,0] = (" << telaComputador[0][0].usRed << "," << telaComputador[0][0].usGreen << "," << telaComputador[0][0].usBlue << ")" << endl;
    
    listarLivros(biblioteca);
    adicionarLivros(biblioteca,livro3);
    listarLivros(biblioteca);

    return 0;
}

// Verificar tamanho vazio.
void listarLivros(struct Biblioteca biblioteca)
{
    cout << "\nLivros do acervo da " << biblioteca.strNome << endl;

    for (int i; i < biblioteca.iTamAcervo; i++)
    {
        cout << "Titulo: " << biblioteca.livros[i].strTitulo << ", por " << biblioteca.livros[i].strAutor << endl;
        cout << "Publicado em: " << biblioteca.livros[i].iPublicaco << ".\n" << endl;
    }
}

// Verificar se está completa a biblioreca de livros.
void adicionarLivros(struct Biblioteca& biblioteca, struct Livro novoLivro)
{
    biblioteca.livros[biblioteca.iTamAcervo] = novoLivro;
    biblioteca.iTamAcervo += 1;
}