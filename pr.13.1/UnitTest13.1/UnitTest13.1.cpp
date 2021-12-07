#include "pch.h"
#include "CppUnitTest.h"
#include "..\pr.13.1\var.cpp"
#include "..\pr.13.1\dod.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsDod;
using namespace nsVar;

namespace UnitTest131
{
	TEST_CLASS(UnitTest131)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			a = -1;
			x = 2;
			n = -3;
			dod();
			Assert::AreEqual(a, 5.6);
		}
	};
}
