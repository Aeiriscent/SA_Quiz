#pragma once

#ifdef QUIZ_EXPORTS
#define QUIZ_API __declspec(dllexport)
#else
#define QUIZ_API __declspec(dllimport)
#endif
