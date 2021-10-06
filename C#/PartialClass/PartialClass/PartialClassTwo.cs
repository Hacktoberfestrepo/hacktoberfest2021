using System;
using System.Collections.Generic;
using System.Text;

namespace PartialClass
{
    public partial class PartialStudent
    {
        public string GetStudentDetails()
        {
            //$ -> string interpolation
            //@ -> Verbaterim literal
            string studentDetails = $"The id is {_id} , FirstName is {_firstName}  LastName is {_lastName}";
            return studentDetails;
        }
    }
}
