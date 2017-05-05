
// Basic C++
#include <iostream>
std::cerr		standard error
std::clog		standard log
std::wcin		standard input
std::wcout		standard output
std::wcerr		standard error
std::wclog		standard log
std::string;	standard string
std::cout;		standard output
std::cin;		standard input
std::endl;		end line
std::vector;	?
std::getline	standard get string input
std::get        standard get character input

#include <string>
std::string

 
#include <cctype>

	 isalnum			checks if a character is alphanumeric
	 
	 isalpha			checks if a character is alphabetic
	 
	 islower			checks if a character is lowercase
	 
	 isupper			checks if a character is an uppercase character

	 isdigit			checks if a character is a digit
		 
	 tolower			converts a character to lowercase
	
	 toupper			converts a character to uppercase
	
// Fundemental Types or Types

int; // Interger = number value

bool; // Boolean = true false value

char; // Character = character value

void; // Void = Empty value (Nothing)



// Operators

++		Increment operator, increases integer value by one

--		Decrement operator, decreases integer value by one

+		Adds 
-		Subtracts 	
*		Multiplies
/		Divides
==		Checks if the values of two operands are equal or not, if yes then condition becomes true.	(A == B) is not true.
!=		Checks if the values of two operands are equal or not, if values are not equal then condition becomes true.	(A != B) is true.
>		Checks if the value of left operand is greater than the value of right operand, if yes then condition becomes true.	(A > B) is not true.
<		Checks if the value of left operand is less than the value of right operand, if yes then condition becomes true.	(A < B) is true.
>=		Checks if the value of left operand is greater than or equal to the value of right operand, if yes then condition becomes true.	(A >= B) is not true.
<=		Checks if the value of left operand is less than or equal to the value of right operand, if yes then condition becomes true.	(A <= B) is true.

&&		AND operator. If both the operands are non - zero, then condition becomes true.	(A && B) is false.
||		OR Operator.If any of the two operands is non - zero, then condition becomes true.	(A || B) is true.
!		NOT Operator.Use to reverses the logical state of its operand.If a condition is true, then Logical NOT operator will make false.	!(A && B) is true.


=		Simple assignment operator, Assigns values from right side operands to left side operand	C = A + B will assign value of A + B into C
+=		Add AND assignment operator, It adds right operand to the left operand and assign the result to left operand	C += A is equivalent to C = C + A
-=		Subtract AND assignment operator, It subtracts right operand from the left operand and assign the result to left operand	C -= A is equivalent to C = C - A
*=		Multiply AND assignment operator, It multiplies right operand with the left operand and assign the result to left operand	C *= A is equivalent to C = C * A
/=		Divide AND assignment operator, It divides left operand with the right operand and assign the result to left operand	C /= A is equivalent to C = C / A
%=		Modulus AND assignment operator, It takes modulus using two operands and assign the result to left operand	C %= A is equivalent to C = C % A
<<=		Left shift AND assignment operator C <<= 2 is same as C = C << 2
>>=		Right shift AND assignment operator C >>= 2 is same as C = C >> 2
&=		Bitwise AND assignment operator C &= 2 is same as C = C & 2
^=		bitwise exclusive OR and assignment operator C ^= 2 is same as C = C ^ 2
|=		bitwise inclusive OR and assignment operator C |= 2 is same as C = C | 2


sizeof					sizeof operator returns the size of a variable.For example, sizeof(a), where a is integer, will return 4.
Condition ? X : Y		Conditional operator. If Condition is true ? then it returns value X : otherwise value Y
,						Comma operator causes a sequence of operations to be performed.The value of the entire comma expression is the value of the last expression of the comma - separated list.
. (dot) and -> (arrow)	Member operators are used to reference individual members of classes, structures, and unions.
Cast					Casting operators convert one data type to another.For example, int(2.2000) would return 2.
&						Pointer operator & returns the address of an variable.For example &a; will give actual address of the variable.
*						Pointer operator * is pointer to a variable. For example *var; will pointer to a variable var.


Here, operators with the highest precedence appear at the top of the table, those with the lowest appear at the bottom.
Within an expression, higher precedence operators will be evaluated first.

Postfix	
()   []    ->    .    ++   - -							Left to right
Unary
+    -!   ~   ++    -   -(type)   *    &    sizeof 		Right to left
Multiplicative
*    /    % 											Left to right
Additive
+    -													Left to right
Shift
<<    >> 												Left to right
Relational
<    <=    >    >=										Left to right
Equality
==    != 												Left to right
Bitwise AND
& 														Left to right
Bitwise XOR
^ 														Left to right
Bitwise OR
|														Left to right
Logical AND
&& 														Left to right
Logical OR
||														Left to right

Conditional ? :											Right to left

Assignment
=    +=    -=    *=    /=    %=  
>>=    <<=    &=    ^=    |=							Right to left

Comma
,								L						Left to right


int main()  
{
	return 0;
}