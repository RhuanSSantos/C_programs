using System;

namespace Programa
{
    class crescente
    {
        static void Main(string[] args)
        {
            int a, b;

            Console.WriteLine("Digite dois numeros:");
            a = int.Parse(Console.ReadLine());
            b = int.Parse(Console.ReadLine());

            while(a != b)
            {
                if(a > b)
                {
                    Console.WriteLine("DECRESCENTE!");
                }
                else
                {
                    Console.WriteLine("CRESCENTE!");
                }
                Console.WriteLine("Digite dois numeros:");
                a = int.Parse(Console.ReadLine());
                b = int.Parse(Console.ReadLine());
            }

        }
    }
}