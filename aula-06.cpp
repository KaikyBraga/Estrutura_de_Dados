#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main()
{
    // É possível criar uma variável do tipo Streaming com os seguintes valores aceitos:
    enum Streaming {AppleTV, AmazonPrime, CrunchyRoll, DisneyPlus, NetFlix, Max, StartPlus};

    Streaming streamingSubscription = CrunchyRoll;

    switch (streamingSubscription)
    {
        case AppleTV:
            cout << "Nunca usei... não sei como é... [" << streamingSubscription << "]" << endl;
            break;
        case CrunchyRoll:
            cout << "Muito bom... [" << streamingSubscription << "]" << endl;
            break;
        default:
            cout << "NADA" << endl;
    }

    cout << "===========================================" << endl;

    enum Meses {JANEIRO = 1, FEVEREIRO, MARCO, ABRIL, MAIO};
    
    Meses mesProvas = MAIO;
    cout << mesProvas << endl;

    return 0;

    enum Semana {Segunda = 10, Terça = 1, Quarta = -3};

    Semana diaPalestra = Quarta;
    cout << diaPalestra << endl;

    return 0;
}