using System;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;

namespace lb6 
{
    class Program
    {
        public static void test(int numRows, int numCols, string matrixName)
        {
            int[,] matrix = new int[numRows, numCols];
            int maxElement = matrix[0, 0];
            Random random = new Random();

            Console.WriteLine("------MATRIX_" + matrixName + "------");

            for (int i = 0; i < numRows; i++)
            {
                for (int j = 0; j < numCols; j++)
                {
                    matrix[i, j] = random.Next(1, 20);

                    if (matrix[i, j] >= maxElement)
                    {
                         maxElement = matrix[i, j];
                    }

                }
            }

            for (int i = 0; i < numRows; i++)
            {
                for (int j = 0; j < numCols; j++)
                {
                    if (matrix[i, j] == maxElement)
                    {
                        matrix[i, j] = 1 ;
                    }

                    Console.Write(matrix[i, j] + " ");

                }
                Console.WriteLine();
            }

            Console.WriteLine("Max value in matrix " + matrixName + ": " + maxElement);
        }

        static void Main()
        {
            test(6, 3, "A");
            test(6, 3, "Y");
        }
   }
}