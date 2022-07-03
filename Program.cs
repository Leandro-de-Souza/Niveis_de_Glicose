using System;
using System.Globalization;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PROBLEMA_GLICOSE {
    internal class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            double medida;

            Console.Write("Digite a medida da glicose: ");
            medida = double.Parse(Console.ReadLine(), CI);

            if (medida <= 100.0) {
                Console.WriteLine("Classificacao: normal");
            }
            else if (medida > 100.0 && medida <= 140.0) {
                Console.WriteLine("Classificacao: elevado");
            }
            else {
                Console.WriteLine("Classificacao: diabetes");
            }

        }
    }
}
