#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main() {
//1. Assume that you want to generate a table of multiples of any given number. Write a program
// that allows the user to enter the number and then generates the table,
// formatting it into 10 columns and 20 lines. I
       /*
      int x,num;
      cout<<"enter the value  of num: ";
      cin>>num;
    for (x=1;x<=50;x++) {
        cout<<setw(8)<<num*x;
        if (x%10==0){
            cout<<endl;
        }
        
    }
  */
     // 2. Write a temperature-conversion program that gives the user the option of converting
    // Fahrenheit to Celsius or Celsius to Fahrenheit. Then carry out the conversion. Use
    // floating-point numbers. */
       /*
  int num;
  float tempc,tempf;
  cout<<"type 1 to convert temperature fahrenheit to celsius or  type 2 to convert celsius  to  fahrenheit :  " ;
  cin>>num;
  if(num==1) {
      cout << "enter temp in fahrenheit : " ;
      cin >> tempc;
      cout << "temperature in fahrenheit is " << tempc << " which is equivalent to " << (tempc - 32) * 5 / 9 << "C  celsius ";
  }
      else if (num==2) {
      cout << " enter temp in celsius : ";
      cin >> tempf;
      cout << "temperature in celsius  is " << tempf << " which is equivalent to " << (tempf * 9 / 5) + 32 << "F celsius ";
  }
        else
      cout << " invalid INPUT ";
       */
       //3. Operators such as >>, which read input from the keyboard, must be able to convert a
      //series of digits into a number. Write a program that does the same thing. It should allow 
      //the user to type up to six digits, and then display the resulting number as a type long integer.
	   //  The digits should be read individually, as characters, using getche().
     //  Constructing the number involves multiplying the existing value by 10 and then adding the new digit.
          /*
char digits;
unsigned long  x;
cout<<"enter the digits : ";
for(int i=1;i<7;i++) {
    digits = getche();
    x = x * 10 + digits - 48;
}
     cout<<endl<<"the number is "<<x;

       */
       /*4. Create the equivalent of a four-function calculator. The program should ask the user to
enter a number, an operator, and another number. (Use floating point.) It should then
carry out the specified arithmetical operation: adding, subtracting, multiplying, or dividing the two numbers.
 Use a switch statement to select the operation. Finally, display the result.
When it finishes the calculation, the program should ask whether the user wants to do
another calculation. The response can be ‘y’ or ‘n’.*/
       /*
    float num1, num2;
    char oper , ch ;
    do {
    cout << "enter the value of num1 : ";
    cin >> num1;
    cout << "enter the any basic of the four  operators  : " ;
    cin >> oper;
    cout << "enter the value of num2 : ";
    cin >> num2;
       switch (oper) {
        case '+':
            cout << "the addition of two numbers is " << num1 + num2;
        break;
        case '-':
            cout << "the subtraction of two numbers is " << num1 - num2;
            break;
        case '*':
            cout << "the multiplication of two numbers is " << num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                cout << "the division of two numbers is " << num1 / num2;
            else
                cout << "unable to divide by 0 (math error) " ;
            break;
            default:
            cout<<"the operator is  not recognized ";
    }
    cout<<endl;
        cout << "type y to repeat the process or n to not repeat the process ";
        cin >> ch;
    }while (ch == 'y' );
               */
               /*5. Use for loops to construct a program that displays a pyramid of Xs on the screen. The
pyramid should look like this
X
XXX
XXXXX
XXXXXXX
XXXXXXXXX
except that it should be 20 lines high, instead of the 5 lines shown here. One way to do
this is to nest two inner loops, one to print spaces and one to print Xs, inside an outer
loop that steps down the screen from line to line.*/
         /*
    int a,b,c;
    int value=10;
for(int a=1;a<=value;a++) {
    for (b = 1; b <= value-a; b++)
        cout << "  ";
        for (c = 1; c <= (2 * a) - 1; c++)
            cout<<"X";
        cout << endl;
    }
     */
     /*6. Modify the FACTOR program in this chapter so that it repeatedly asks for a number and
calculates its factorial, until the user enters 0, at which point it terminates. You can
enclose the relevant statements in FACTOR in a while loop or a do loop to achieve this
effect.*/
         /*
    int num;
    cout<<"enter a number: ";
    cin>>num;
    int factorial;
    do {
        factorial =1;
        for (int x = num; x > 0; x--) {
            factorial = factorial * x;
        }
        cout<<"factorial is "<<factorial<<endl;
        cout << "enter again any another number to find out its factorial or enter 0 to terminate : ";
        cin>>num;
    }while(num!=0);
    cout<<"factorial is not possible ";
       */
       /*7. Write a program that calculates how much money you’ll end up with if you invest an
amount of money at a fixed interest rate, compounded yearly. Have the user furnish the
initial amount, the number of years, and the yearly interest rate in percent. Some interaction with the program might look like this:
Enter initial amount: 3000
Enter number of years: 10
Enter interest rate (percent per year): 5.5
At the end of 10 years, you will have 5124.43 dollars */
        /*
    float initial,year,rate;
    cout<<"Enter initial amount : ";
    cin>>initial;
    cout<<"Enter number of years : ";
    cin>>year;
    cout<<"Enter interest rate : ";
    cin>>rate;
    for(int i=1; i <= year; i++) {
        initial = initial + (initial * rate / 100);         
    }
    cout<<"At the end of  "<<year<<" years, you will have "<<initial<< " rupees "<<endl;
          */
          /*8. Write a program that repeatedly asks the user to enter two money amounts expressed in
old-style British currency: pounds, shillings, and pence. (See Exercises 10 and 12 in
Chapter 2, “C++ Programming Basics.”) The program should then add the two amounts
and display the answer, again in pounds, shillings, and pence. Use a do loop that asks the
user whether the program should be terminated. Typical interaction might be
Enter first amount: £5.10.6
Enter second amount: £3.2.6
Total is £8.13.0
Do you wish to continue (y/n)?
To add the two amounts, you’ll need to carry 1 shilling when the pence value is greater
than 11, and carry 1 pound when there are more than 19 shillings.*/
          /*
    char ch;
    do {
        int p,sh,pe,sump,sumsh,sumpe,po,shi,pen;
        
        cout << "enter  first amount in pounds : ";
        cin >> p;
        cout << "enter  first amount in shillings : ";
        cin >> sh;
        cout << "enter  first amount in pence : ";
        cin >> pe;
        
     system("CLS");
     
        cout << "enter  second amount in pounds : ";
        cin >> po;
        cout << "enter  second amount in shillings : ";
        cin >> shi;
        cout << "enter  second amount in pence : ";
        cin >> pen;
        
        system("CLS");
        
        cout << "first amount = " << p << "." << sh << "." << pe << endl;
        cout << "second amount = " << po << "." << shi << "." << pen <<endl;
        
        sump=p+po;
        sumsh=sh+shi;
        sumpe=pe+pen;
        
        while(sumpe>=12){
        sumsh++;
        sumpe-=12;
    }
        
        while(sumsh>=19){
        sump++;
        sumsh-=19;
    }
        cout<<"total amount in old pound style is "<<sump<<"."<<sumsh<<"."<<sumpe<<endl;
        
        cout<<"press y to continue or n to terminate ";
        cin>>ch;
    }while(ch == 'y'||  ch=='Y');
       */
       /*9. Suppose you give a dinner party for six guests, but your table seats only four. In how
many ways can four of the six guests arrange themselves at the table? Any of the six
guests can sit in the first chair. Any of the remaining five can sit in the second chair. Any
of the remaining four can sit in the third chair, and any of the remaining three can sit in
the fourth chair. (The last two will have to stand.) So the number of possible arrangements
of six guests in four chairs is 6*5*4*3, which is 360. Write a program that calculates the number of
 possible arrangements for any number of guests and any number of chairs.
 (Assume there will never be fewer guests than chairs.)
 Don’t let this get too complicated. A simple for loop should do it*/
        /*
    int guests , chairs , a;// a = arrangements
        cout << "enter  the no of guests : ";
        cin >> guests;
        cout << "enter  the no of chairs : ";
        cin >> chairs;
        if(guests < chairs) {
            cout << "invalid input ";
        }
        else {
            a = 1;
            int q=0;
            for (int x = guests; x > 0; x--) {      // x is used to print counter 6 to 1;
                a = a * x;
                q++;
                if(q==chairs){
                    break;
                }
            }
            cout << "no of ways = " << a << endl;
        }
             */
             
             /*10. Write another version of the program from Exercise 7 so that, instead of finding the final
amount of your investment, you tell the program the final amount and it figures out how
many years it will take, at a fixed rate of interest compounded yearly, to reach this
amount. What sort of loop is appropriate for this problem? (Don’t worry about fractional
years; use an integer value for the year. */
      /*
    float  rate;
    float initial,final;
    float year = 0;
    cout<<"Enter initial amount : ";
    cin>>initial;
    cout<<" Enter interest rate : ";
    cin>>rate;
    cout<<" Enter final amount : ";
    cin>>final;

       while(initial<=final){
           initial=initial*(1+rate/100);
           year++;
       }
        cout<<"It takes " << year << " years to reach "<<final<<" rupees ";
             */
             
            /*12. Create a four-function calculator for fractions. (See Exercise 9 in Chapter 2, and
       Exercise 4 in this chapter.) Here are the formulas for the four arithmetic operations
       applied to fractions:
     Addition: a/b + c/d = (a*d + b*c) / (b*d)
    Subtraction: a/b - c/d = (a*d - b*c) / (b*d)
    Multiplication: a/b * c/d = (a*c) / (b*d)
    Division: a/b / c/d = (a*d) / (b*c)
   The user should type the first fraction, an operator, and a second fraction. The program
  should then display the result and ask whether the user wants to continue*/

        /*
    float a, b, c, d;
    char oper, ch, temp;    //to store  the '/ ' character temperory
    do {

        cout << "enter the first fraction : ";
        cin >> a >> temp >> b;
        cout << "enter the operator to calculate  : ";
        cin >> oper;
        cout << "enter the second fraction : ";
        cin >> c >> temp >> d;

        system("CLS");

        cout<<"question = "<<a<<"/"<<b<<  oper  <<c<<"/"<<d<<endl;
        switch (oper) {
            case '+':
                cout << "the addition of two numbers is " << (a * d + b * c) / (b * d);
                break;
            case '-':
                cout << "the subtraction of two numbers is " << (a * d - b * c) / (b * d);
                break;
            case '*':
                cout << "the multiplication of two numbers is " << (a * c) / (b * d);
                break;
            case '/':
                if (b != 0 && c != 0)
                    cout << "the division of two numbers is " << (a * d) / (b * c);
                else
                    cout << "unable to divide by 0 (math error) ";
                break;
            default:
                cout << "the operator is  not recognized ";
        }
        cout << endl;
        cout << "type y to repeat the process or n to not repeat the process ";
        cin >> ch;
    } while (ch == 'y'); 
          */
		     
             
             
             
                               
       
       
       
       
       
       
       
       
       
       
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
