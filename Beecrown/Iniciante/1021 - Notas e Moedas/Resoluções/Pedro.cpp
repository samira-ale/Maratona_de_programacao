#include <iostream>
#include <iomanip>

using namespace std;

void imprimir_mensagem(int quantidade, string nome_valor, double valor);

int main(){
    int valores_divisores[12] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};

    double valor_de_entrada;
    int quantidades_por_valor[12] = {};

    cin >> valor_de_entrada;

    int valor_em_centavos = (int)(valor_de_entrada * 100);
    
    int index = 0;
    while (valor_em_centavos > 0)
    {
        quantidades_por_valor[index] = valor_em_centavos / valores_divisores[index];
        valor_em_centavos = valor_em_centavos % valores_divisores[index];

        if(index < 12) index++;
    }

    cout << "NOTAS:" << endl;
    for (int i = 0; i < 6; i++) 
        imprimir_mensagem(quantidades_por_valor[i], "nota(s)", (double)valores_divisores[i]/100);

    cout << "MOEDAS:" << endl;
    for (int i = 6; i < 12; i++) 
        imprimir_mensagem(quantidades_por_valor[i], "moeda(s)", (double)valores_divisores[i]/100);

    return 0;
}

void imprimir_mensagem(int quantidade, string nome_valor, double valor)
{
    cout << quantidade << " " << nome_valor << " de R$ " << fixed << setprecision(2) << valor << endl;
}
