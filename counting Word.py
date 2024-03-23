
str = "Welcome to GDB Online. GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl, C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog. Code, Compile, Run and Debug online from anywhere in world."

str2 = " I have a good plan, are you interested to know?"

count = 0
for x in str2:
    if x == " " or x is None:
        count+=1
print(count)