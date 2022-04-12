using System;
using System.Collections.Generic;

namespace YZ_AKADEMI
{
    class Program
    {
        static void Main(string[] args)
        {
            
            int[] AlicePoint = new int[3];
            int[] BobPoint = new int[3];
            int BobSkor =0;
            int AliceSkor = 0;

            //ALİCE PROBLEM
            for (int i = 0; i < 3; i++)

            {
                Console.Write("Alice Puan giriniz = ");

                AlicePoint[i] = Convert.ToInt32(Console.ReadLine());
            }
            //BOB PROBLEM
            for (int i = 0; i < 3; i++)

            {
                Console.Write("Bob Puan giriniz = ");

                BobPoint[i] = Convert.ToInt32(Console.ReadLine());
            }

            for (int i = 0; i < 3; i++)
            {
                Console.Write(AlicePoint[i] + " ");

            }
            Console.Write("\n");
            for (int i = 0; i < 3; i++)
            {
                Console.Write(BobPoint[i] + " ");

            }
            Console.ReadKey();

            //Islem
            for (int i = 0; i < 3; i++)
            {
                if (AlicePoint[i] < BobPoint[i])
                    AliceSkor++;
                if (AlicePoint[i] > BobPoint[i])
                    BobSkor++;
                if (AlicePoint[i] == BobPoint[i])
                    AliceSkor = 0;
                BobSkor = 0;

            }
            Console.Write(AliceSkor + " ", BobSkor + " ");




        }



    }
    }
