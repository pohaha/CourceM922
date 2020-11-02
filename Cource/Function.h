#include"Action.h"
class Function
{
public:
	//data
	Function* leftHandOperand=nullptr;
	Function* rightHandOperand=nullptr;
	Action currentAction=_EQUALS;
	
	//methods
	float countFor(const float& arg);
	
	//c-tors  d-tors
	Function (std::string functionAsString);	
	
		//RULE OF 3
	Function();	
	Function(Function& copiedFunction);	
	~Function();
};