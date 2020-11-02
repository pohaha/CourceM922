
#ifndef ACTIONS
#define ACTIONS
#include <string>


enum Action
{
	_EQUALS,
	_MULTIPLY,
	_DIVIDE,
	_POWER,
	_LOG,
	_SIN,
	_COS,
	_PLUS,
	_MINUS,
	_TAN,
	_COTAN,
	_BRACES,
};

static std::string actionsAsString[] = {
	"=",
	"*",
	"/",
	"^",
	"log",
	"sin",
	"cos",
	"+",
	"-",
	"tg",
	"ctg",
	"()"
};
#endif // !ACTIONS