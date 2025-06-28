# Compiler-Design-Basics
*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: ARPIT KUMAR

*INTERN ID*:CITSOD303

*DOMAIN*:C PROGRAMMING

*DURATIUON*: 4 WEEKS

*MENTOR*: NEELA SANTOSH 

📝 Internship Code Task Description: Lexical Analyzer in C
📌 Task Title:
Lexical Analyzer – A Simple Program to Identify Keywords, Identifiers, and Operators from Source Code

🧠 Overview of the Code Task:
As part of my internship project during the first year of Computer Science Engineering, I was assigned to build a basic lexical analyzer using the C programming language. The goal of this task was to understand the core working of a compiler, especially the first phase — lexical analysis. My program reads a simple source code file and identifies different types of tokens such as keywords, identifiers, and operators.

In this project, I wrote a C program that opens a .txt file (named input.txt) and processes it character by character. As it reads, the program separates out words or symbols, checks if they match known C keywords, and determines whether they are valid identifiers or operators. Based on these checks, the program prints the categorized token type and its value. For example, if it finds the word int, it prints "Keyword: int", or if it finds the symbol +, it prints "Operator: +".

This task helped me understand how source code is broken down into smaller units called tokens before the syntax analysis stage of a compiler. It also strengthened my knowledge of file handling, string processing, and control structures in the C language.

🛠️ Tools and Technologies Used:
Programming Language: C
I chose C because it is simple, fast, and closely related to how compilers and low-level systems work. It also gave me hands-on experience in writing logic without relying on built-in high-level functions.

Text Editor / IDE: Code::Blocks
I used Code::Blocks IDE for writing, compiling, and running my code. It is lightweight and easy to use for beginners. The built-in compiler and terminal made it very convenient to test and debug the program.

Compiler: GNU GCC Compiler (bundled with Code::Blocks)

Input File: input.txt
This file contains the sample code I want to analyze. I created it in the same folder as my .c file to ensure the file operations work without any issues.

🧩 Where This Code is Applicable in Real Life:
Compiler Design:
This kind of lexical analysis is used in the first phase of a compiler, where it breaks down the raw code into tokens before parsing and code generation.

Syntax Highlighters:
Text editors like VS Code or Sublime Text use lexical analysis techniques to color keywords, functions, and operators differently.

Programming Language Interpreters:
Languages like Python and JavaScript also need to tokenize code before running it — this code is a basic example of how it works underneath.

Static Code Analysis Tools:
Tools that check your code for bugs or formatting issues (like linters or IDEs) use lexical analysis internally.

Learning and Teaching Aid:
For beginners like me, this project is a great way to get practical exposure to concepts from compiler theory which we usually only learn in theory.

