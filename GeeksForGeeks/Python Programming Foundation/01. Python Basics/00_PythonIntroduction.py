"""PYTHON INTRODUCTION"""
# Very Simple Syntax
# Easy to understand

print("Hello world!")

"""
General Purpose Language:
	-Console  Applications and Scripts
	-Desktop Applications
	-Web Applications
	-Game Development
	-Machine Learning, Deep Learning
	-AI, Big Data, IOT, etc


Multiparadigm Support:
	-Procedural Style Programming like C
	-Object Oriented Programming like JAVA, C++
	-Funtional Programming like Lisp


Portable on Platform Independent:
	-Programs are typically first compiled into an intermediate
	 code, then the code is run by the interpreter


Python is Dynamically Typed:
	x = 10
	y = "geeks"
	x = "Python"

Automatic Garabage Collection
	-It is similar to Java

"""

"""
### Python Standard and Implementations ###

Current Standard: 3.11.0 (Oct 24 2022)

# docs.python.org

Implementations:
	-CPython : Most Popular
	-Jython : Compatible with Java
	-IronPython : Compatible with .NET
	-PyPy : Considered Faster
"""

"""
How Python Programs are Executed?
CPython:
	[PythonProgram] -----> [ByteCode] -----> [LinebyLine BinaryCode]
	              (Compiler)      (Interpreter)


Platform Independence:
PVM -> Python Virtual Machine
        
        [Python Program]
               |(compiler)
          [Byte Code] --> Platform Independent Intermediate Code
           |       |
          /         \
         /           \
        /(interpreter)\
  [PVM for Linux]   [PVM for windows]


In Command Line:
~python hello.py
Hello World!

~python -m py_compile hello.py #This just compiles the code.
#It does't run the code.


Python Programming Terminology:
1. Keywords(reserved words) and Variables
2. Funstions
3. Class and Object
4. Modules and Packages
	-Module is a python file that has variables, functions, and/or classes.
	-Package is a folder that has other packages and/or modules.

import math

PYTHONPATh


Comments:
For single line comment use '#'
We can use docstring. Remember that docstring is
not a multiline comment. It is mainly used for documentation.
Docstring is processed by the interpreter while comments are not.
"""