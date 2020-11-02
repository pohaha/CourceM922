#include "Function.h"
#include "Action.h"
#include "math.h"
#include <string>


float Function::countFor(const float& arg)
{
	if (currentAction == _EQUALS)
		return leftHandOperand->countFor(arg);
	else if (currentAction == _MULTIPLY)
		return leftHandOperand->countFor(arg) * rightHandOperand->countFor(arg);
		
		
//TODO fill in all else
	return 0;
}


Function::Function(std::string functionAsString)
{
	
	size_t start = functionAsString.find(actionsAsString[_BRACES][0]);
	if (start != std::string::npos)
	{

	}
}

Function::Function()
{
}

Function::Function(Function& copiedFunction)
{
}

Function::~Function()
{
}

