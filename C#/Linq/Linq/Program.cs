using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using static System.Console;

namespace Linq
{
    public class Program
    {
        static void Main(string[] args)
        {
            Student.GetName("Safal");
            
            int[] array = { 2, 3, 4, 10, 12, 14, 18, 19, 20, 21, 24, 25 };

            int count = 0;

            for (int i = 0; i < array.Length; i++)
            {
                if (array[i] % 2 == 0)
                    count++;
            }

            WriteLine("The number of even number is {0}", count);

            int[] array1 = new int[count];

            int j = 0;

            for (int i = 0; i < array.Length; i++)
            {
                if (array[i] % 2 == 0)
                {
                    array1[j] = array[i];
                    j++;

                }
            }

            for (int i = 0; i < count; i++)
            {
                WriteLine("Even number {0} is {1}", i + 1, array1[i]);
            }

            //What if we can write a query in a Array? It will minimize the complexity we are facing.

                //LINQ--CODe start

               

                var array2 = from i in array where i % 2 > 0 orderby i ascending select i; //SQL Like syntax

            foreach (int k in array2)
            {
                WriteLine(k + " ");
            }



            IEnumerable<Student> result = from s in Student.GetAllStudents()
                                              where s.Address == "Thankot"
                                              select s;

            //Lamda expression

            IEnumerable<Student> results = Student.GetAllStudents().Where(x => x.Address == "Wano");

            foreach (var s in results)
            {
                WriteLine(s.Name);
            }
        }
    }    
}
