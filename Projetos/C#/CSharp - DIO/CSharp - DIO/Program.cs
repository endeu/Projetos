using System;
using CSharp;
using Interface;
using Enum;

namespace Csharp
{
    class Program
    {
        
        static void Main(string[] args)
        {   
            //formas de instanciar enum
            var pessoa1 = (Pessoas)0;
            Pessoas pessoa2 = Pessoas.Joao;

            ////
            Pessoa person = new Pessoa();

            person.Estado = "SP";
            person.Nome = "Joao";
            person.Idade = 12;

            var person2 = new Pessoa();

            person2.Nome = "julia";
            person2.Idade = 23;
            person2.Estado = "MG";

            ////

            Animal animal = new Animal();

            animal.Nome = "Rex";
            animal.NomeDono = "Pedro";
            animal.Especie = "Cachorro";

            Console.WriteLine(pessoa2);


        }

    }
}