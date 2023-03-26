using System;
namespace JogandoCartasFora
{
    public class Program
    {
        static void Main(string[] args)
        {
            int[] cards = new int[50];
            int n = 1, aux = 0;

            do
            {
                n = int.Parse(Console.ReadLine());

                if (n == 0)
                {
                    break;
                }

                Console.Write("Discarded cards: ");
                for (int i = 0; i < n; i++) // Montando pilha de cartas
                {
                    cards[i] = i + 1;
                }
                for (int i = 0; i < n - 1; i++)
                {
                    for (int j = i + 1; j < n - 1; j++)
                    {
                        aux = cards[j];
                        cards[j] = cards[j + 1];
                        cards[j + 1] = aux;
                    }
                    if (i != n - 2)
                    {
                        Console.Write(cards[i] + ", ");
                    }
                    else
                    {
                        Console.WriteLine(cards[i]);
                    }
                }
                Console.WriteLine("Remaining card: " + cards[n - 1]);
            } while (true);
        }
    }
}
