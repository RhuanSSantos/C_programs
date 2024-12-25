using System;

namespace Programa
{
    class soma_impares
    {
        static void Main(string[] args)
        {
            int x, y, troca, i, soma;

            Console.WriteLine("Digite dois numeros:");
            x = int.Parse(Console.ReadLine());
            y = int.Parse(Console.ReadLine());

            if(x > y)
            {
                troca = x;
                x = y;
                y = troca;
            }
            soma = 0;
            for(i = x+1; i < y; i++)
            {
                if(i % 2 != 0)
                {
                    soma = soma + i;
                }
            }
            Console.WriteLine("SOMA DOS IMPARES = " + soma);
        }
    }
}