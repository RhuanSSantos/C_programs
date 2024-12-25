using System;

namespace Hora
{
    class Hora
    {
        static void Main(string[] args)
        {
            int hora;

            Console.Write("Digite uma hora do dia: ");
            hora = int.Parse(Console.ReadLine());

            if (hora < 12)
            {
                Console.WriteLine("Bom dia!");
            }
            else if (hora < 18)
            {
                Console.WriteLine("Boa tarde!");
            }
            else
            {
                Console.WriteLine("Boa noite!");
            }
        }
    }
}
