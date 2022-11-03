# CD-lexical-analyzer
#### CD-Project1
1.	Write a program that reads an input text file, and constructs a list of tokens in that file.
Your program can be written in any programming language of your choice without using standard library functions for lexical
analysis task assuming that the input file contains the following code string:
Sample text file :-
void main () 
{ int sum = 0; 
for(int j=0; j < 10; j=j+1) 
{ sum = sum + j + 10.43 + 34E4 + 45.34E-4 + E43 + .34; }
 }

Output expected:- Define regular expression for tokens and generate DFA. Display the count of No of tokens generated.

keyword : void  ,       identifier : main ,   ( : (,     ) : ) ,  { : {,   keyword : int,   identifier : sum  ,  = : =  ,  num : 0 ,   ; : ; ,  keyword : for ,  ( : ( 
keyword : int,  identifier : j   ,  = : =    , num : 0   , ; : ;   , identifier : j  ,  < : < ,   num : 10,     ; : ; ,    identifier : j   ,   = : =    , identifier : j 
+ : +   , num : 1 ,   ) : ),    { : { ,     identifier : sum ,   = : =  ,  identifier : sum ,     + : +,     identifier : j   ,  + : +   ,   num : 10.43  ,    + : + 
num : 34.E4   , + : +,   num : 45.34E-4  ,  + : +,    identifier : E43,    + : +,     Error : . ,  num : 34    ; : ;    ,} : } ,   } : }

solution of above assignment is in file CD-Project1

------------------------------------------------------------------------------------------------------------------------------------------------------------------------

##### CD-Project2
2.	Programs in a Programming language are composed of tokens types mentioned in Table 1. 
Write a program in any programming language of your choice to recognize tokens of this programming language. 
You can create a single state transition diagram and implement the same for the task.
![image](https://user-images.githubusercontent.com/98473808/199791070-b32d17fb-17fd-441f-9f77-a9915c9c8449.png)


Solution of above assignment is in file CD-Project2

