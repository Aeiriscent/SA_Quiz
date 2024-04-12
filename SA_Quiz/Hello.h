#pragma once

#ifndef HELLO_H
#define HELLO_H

#include "QuizExports.h"
#include <string>

class QUIZ_API Hello {
public:
	std::string getHelloWorld();
};

#endif