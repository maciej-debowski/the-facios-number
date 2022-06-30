using System;

namespace cs {
    class Program {
        static long f(long x) {
            long y = x - 1;
            if (x > 0) return (long) Math.Pow(x, f(y));
            return x;
        }

        static void Main(string[] args) {
            Console.WriteLine(f(4));
        }
    }
}
