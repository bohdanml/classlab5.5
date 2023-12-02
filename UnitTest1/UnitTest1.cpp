#include "pch.h"
#include "CppUnitTest.h"
#include "..\\classlab5.5\lab.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestSumOfTerms)
        {
            // Arrange
            int firstTerm = 2;
            int difference = 3;
            int n = 5;

            // Act
            int result = sumOfTerms(firstTerm, difference, n);

            // Assert
            Assert::AreEqual(40, result);
        }
    };
}