using System;
using System.Globalization;

namespace Programa
{
    class retangulo
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            double bas, altura, area, perimetro, diagonal; 

            Console.Write("Base do retangulo: ");
            bas = double.Parse(Console.ReadLine(), CI);
            Console.Write("Altura do retangulo: ");
            altura = double.Parse(Console.ReadLine(), CI);

            area = bas * altura;
            perimetro = 2 * ( bas + altura);
            diagonal = Math.Sqrt(Math.Pow(bas, 2.0) + Math.Pow(altura, 2.0));

            Console.WriteLine("AREA = " + area.ToString("F4", CI));
            Console.WriteLine("PERIMETRO = " + perimetro.ToString("F4", CI));
            Console.WriteLine("DIAGONAL = " + diagonal.ToString("F4", CI));
        }
    }
}