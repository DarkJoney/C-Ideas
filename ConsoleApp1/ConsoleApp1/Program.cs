using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Threading;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            Process[] processes = Process.GetProcesses();
            int i = 0;
            var counters = new List<PerformanceCounter>();

            foreach (Process process in processes)
            {
                
                var counter = new PerformanceCounter("Process", "% Processor Time", process.ProcessName);
                counter.NextValue();
                counters.Add(counter);          
            }

          

            Thread.Sleep(1000);

            foreach (var counter in counters)
            {
                
                if (counter.NextValue() > 0.50)
                {
                    Console.WriteLine(processes[i].ProcessName + " " + "Warning! " + "at ");
                    try
                    {
                        string fullPath = processes[i].MainModule.FileName;
                        Console.WriteLine(fullPath);
                    }
                    catch (Exception ex)
                    {
                        Console.WriteLine("ERROR---" + ex.Message);
                    }

                    Console.WriteLine("-------------------");


                }
                ++i;
            }
            Console.ReadLine();
        } 
    }
}
