using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            var c = new MyComLibTestLib.TestATLClass();
            c.AddMethod(1, 2);
            int a=c.AddAndRet(1, 2);
            Console.WriteLine(a);
            Console.Read();
            //long l = c.TestMethods(1000, 2000);
        }
    }
}
