using System;

namespace Brakeys_Tutorial{
    class Program{
        static void Main(string[] args){
            //console.var/prop = something
            Console.Title = "Practice C# Program!";
            Console.ForegroundColor = ConsoleColor.DarkGreen;
            Console.WindowHeight = 100;
            
            //console.methord/func(something);
            Console.WriteLine("Hello!\nWhat is your name!");
                
            // creates a variable and takes in user input
            string userName = Console.ReadLine();
            
            //add variable to console
            Console.WriteLine("Nice to meet you..." + userName + "...you can use this app to calculate basic things!");

            // create variables for calc
            double numberOne;
            double numberTwo;
            string opperation;

            //assign values to numbers
            Console.Write("Enter Your First Number: ");
            numberOne = Convert.ToDouble( Console.ReadLine() );
            Console.Write("Enter Your Second Number: ");
            numberTwo = Convert.ToDouble( Console.ReadLine() );
            
            //assign values to opp
            Console.WriteLine("What opperation would you like to perform?");
            Console.Write("Enter The Opperation Performed: ");
            opperation = Console.ReadLine();

            //conditional to choose what opp to do
            if(opperation == "addition"){
                Console.WriteLine(numberOne + numberTwo);
            }else if(opperation == "subtraction"){
                Console.WriteLine(numberOne - numberTwo);
            }else if(opperation == "multiplication"){
                Console.WriteLine(numberOne * numberTwo);
            }else{
                Console.WriteLine(numberOne / numberTwo);
            }

            //for loops
            var sum = 0;    
            
            for(var i = 0; i<3; i++){
            sum++;
            }
            Console.WriteLine(sum);



            //wait before clossing
            Console.ReadKey();
                
        }
    }
}