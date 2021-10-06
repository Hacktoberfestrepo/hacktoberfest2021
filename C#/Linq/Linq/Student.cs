using System;
using System.Collections.Generic;
using System.Text;
using System.Threading.Tasks;

namespace Linq
{
    public class Student
    {
        public int Id { get; set; }
        public string Name { get; set; }
        public string Address { get; set; }
        public string Gender { get; set; }


        public static string GetName(string Name)
        {
            string _name = $"The name is { Name }";
            return _name;

        }      


        public static List<Student> GetAllStudents()
        {
            List<Student> studentList = new List<Student>();
            Student s1 = new Student()
            {
                Id = 101,
                Name = "Jack",
                Address = "USA",
                Gender = "Male"

            };
            Student s2 = new Student()
            {
                Id = 102,
                Name = "Chrish",
                Address = "UK",
                Gender = "Female"


            };
            Student s3 = new Student()
            {
                Id = 103,
                Name = "Zoro",
                Address = "Zou",
                Gender = "Male;"

            };
            Student s4 = new Student()
            {
                Id = 104,
                Name = "Sara",
                Address = "Wano",
                Gender = "Female;"
            };
            studentList.Add(s1);
            studentList.Add(s2);
            studentList.Add(s2);
            studentList.Add(s4);

            return studentList;

            
        }
    }
}
