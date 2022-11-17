#include "pch.h"
#include "CppUnitTest.h"
#include <cassert>
#include <iostream>
#include "../лаба 6.1.2/лаба 6.1.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace юніттест612
{
	TEST_CLASS(юніттест612)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int b;
			b = main();
			Assert::AreEqual(b, 0);
		}
	};
}



