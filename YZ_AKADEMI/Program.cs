using System;
using System.Collections.Generic;
using System.Diagnostics.Contracts;
using System.Text.Encodings.Web;

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
            for (int a = 0; a < 3; a++)

            {
                Console.Write("Alice Puan giriniz = ");

                AlicePoint[a] = Convert.ToInt32(Console.ReadLine());
            }
            //BOB PROBLEM
            for (int b = 0; b < 3; b++)

            {
                Console.Write("Bob Puan giriniz = ");

                BobPoint[b] = Convert.ToInt32(Console.ReadLine());
            }

            for (int a = 0; a < 3;a++)
            {
                Console.Write(AlicePoint[a] + " ");

            }
            Console.Write("\n");
            for (int b = 0; b < 3; b++)
            {
                Console.Write(BobPoint[b] + " ");

            }
            //Islem
            for (int i = 0; i < 3; i++)
            {
                if (AlicePoint[i] < BobPoint[i])
                {
                    AliceSkor++;
                }
                else if (AlicePoint[i] > BobPoint[i])
                {
                    BobSkor++;
                }
            }
            Console.Write(" ");
            Console.Write(AliceSkor + " ",  BobSkor + " ");
            Console.ReadKey();

        }
    }
    }
