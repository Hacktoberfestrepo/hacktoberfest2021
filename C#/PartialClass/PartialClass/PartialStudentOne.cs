using System;
using System.Collections.Generic;
using System.Text;

namespace PartialClass
{
    public partial class PartialStudent
    {
        int _id;
        string _firstName;
        string _lastName;



        public int Id { get => _id; set => _id = value; }
        public string FirstName { get => _firstName; set => _firstName = value; }
        public string LastName { get => _lastName; set => _lastName = value; }
    }
}
