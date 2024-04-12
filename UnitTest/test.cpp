#include "pch.h"
#include "..\SA_Quiz\Hello.h"

TEST(HelloClassTest, ReturnsHelloWorld) {
	Hello hello;
	EXPECT_EQ("Hello World", hello.getHelloWorld());
}