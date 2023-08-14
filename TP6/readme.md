## How to compile the code
g++ heritage.cpp -o prog -Wall -Wextra -g 

./prog

## Main goal of this exercices
When there is a lagacy relationship between two classes when a method of the most specialized 
class is been called it will use first the specialized class method if it exist otherwhise it use the parent class's one.

## Agregation relation
An agregation occurs when an object is composed of other objects and it destruction doesn't entail the destructtion of its
components.
