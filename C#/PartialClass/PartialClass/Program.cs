using System;

namespace PartialClass
{
    //Partial class

    public class Student
    {
        int _id;
        string _firstName;
        string _lastName;

        

        public int Id { get => _id; set => _id = value; }
        public string FirstName { get => _firstName; set => _firstName = value; }
        public string LastName { get => _lastName; set => _lastName = value; }

        public string GetStudentDetails()
        {
            //$ -> string interpolation
            //@ -> Verbaterim literal
            string studentDetails = $"The id is {_id} , FirstName is {_firstName}  LastName is {_lastName}";
            return studentDetails;
        }
    }



    public class Program
    {
        static void Main(string[] args)
        {
            Student s1 = new Student(); //Full class instance
            s1.Id = 101;
            s1.FirstName = "Bipin";
            s1.LastName = "Bhattarai";

            Console.WriteLine("The details is {0} {1} {2}", s1.Id, s1.FirstName, s1.LastName);


            Console.WriteLine(new string('-', 50));

            PartialStudent partStu = new PartialStudent();
            partStu.Id = 103;
            partStu.FirstName = "Suraj";
            partStu.LastName = "Bohara";
            Console.WriteLine("The details from partial class is {0} {1} {2}", partStu.Id, partStu.FirstName, partStu.LastName);
        }
    }
}
