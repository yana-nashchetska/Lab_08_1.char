#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_08_1.char/Lab_08_1.char.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81char
{
	TEST_CLASS(UnitTest81char)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char rjadok[] = "nlo123";
			int k = 1;
			int test = Count(rjadok);
			Assert::AreEqual(test, k);
		}
	};
}
