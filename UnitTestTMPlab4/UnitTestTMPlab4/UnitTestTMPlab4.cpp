#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\bushd\source\repos\TMPlab1_OOP\TMPlab1_OOP\Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestTMPlab4
{
	TEST_CLASS(MultiplicationTests)
	{
	public:

		TEST_METHOD(TestCountVowel)
		{
			ifstream ifst("C:/Users/bushd/source/repos/TMPlab1_OOP/TMPlab1_OOP/testCountVowel.txt");
			film* fl = film::In(ifst);
			
			int res = fl->countVowels();
			int exp = 6;
			Assert::AreEqual(exp, res);
		}
		TEST_METHOD(TestCmpVowels)
		{
			ifstream ifst("C:/Users/bushd/source/repos/TMPlab1_OOP/TMPlab1_OOP/testCountVowel.txt");
			film* f1, *f2;
			f1 = new feature;
			f2 = new feature;

			f1->In(ifst);
			f2->In(ifst);
			Node* n1, * n2;
			n1 = new Node(f1);
			n2 = new Node(f2);
			bool res = n1->pic->cmp(*n2->pic);
			bool exp = false;
			Assert::AreEqual(exp, res);
		}
		TEST_METHOD(TestInOut)
		{
			ifstream ifst("C:/Users/bushd/source/repos/TMPlab1_OOP/TMPlab1_OOP/inTest.txt");
			ofstream ofst("C:/Users/bushd/source/repos/TMPlab1_OOP/TMPlab1_OOP/expTestIn.txt");

			feature* f = new feature;
			documentary* d = new documentary;
			animation* a = new animation;

			f->InData(ifst);
			d->InData(ifst);
			a->InData(ifst);

			f->Out(ofst);
			d->Out(ofst);
			a->Out(ofst);

			ifstream ifst1("C:/Users/bushd/source/repos/TMPlab1_OOP/TMPlab1_OOP/expInTest.txt");
			ifstream ifst2("C:/Users/bushd/source/repos/TMPlab1_OOP/TMPlab1_OOP/expTestIn.txt");
			char c1, c2;
			while (ifst1.get(c1) && ifst2.get(c2))
			{
				Assert::AreEqual(c1, c2);
			}
		}
		TEST_METHOD(TestInputOutput)
		{
			ifstream ifst;
			ifst.open("C:/Users/bushd/source/repos/TMPlab1_OOP/TMPlab1_OOP/inputTest.txt");
			ofstream ofst;
			ofst.open("C:/Users/bushd/source/repos/TMPlab1_OOP/TMPlab1_OOP/outputTest.txt");
			container c;

			bool res = true;
			bool exp = true;

			c.In(ifst);
			c.Out(ofst);

			ifstream ifst1("C:/Users/bushd/source/repos/TMPlab1_OOP/TMPlab1_OOP/expOutputTest.txt");
			ifstream ifst2("C:/Users/bushd/source/repos/TMPlab1_OOP/TMPlab1_OOP/outputTest.txt");
			char c1, c2;
			while (ifst1.get(c1) && ifst2.get(c2))
			{
				Assert::AreEqual(c1, c2);
			}
			
		}
		TEST_METHOD(TestClear)
		{
			ifstream ifst;
			ifst.open("C:/Users/bushd/source/repos/TMPlab1_OOP/TMPlab1_OOP/inputTest.txt");
			ofstream ofst;
			ofst.open("C:/Users/bushd/source/repos/TMPlab1_OOP/TMPlab1_OOP/clearTest.txt");
			container c;

			bool res = true;
			bool exp = true;

			c.In(ifst);
			c.Clear();
			c.Out(ofst);


			ifstream ifst1("C:/Users/bushd/source/repos/TMPlab1_OOP/TMPlab1_OOP/clearTest.txt");
			ifstream ifst2("C:/Users/bushd/source/repos/TMPlab1_OOP/TMPlab1_OOP/expClearTest.txt");
			char c1, c2;
			while (ifst1.get(c1) && ifst2.get(c2))
			{
				Assert::AreEqual(c1, c2);
			}
		}
		TEST_METHOD(TestSort)
		{
			ifstream ifst;
			ifst.open("C:/Users/bushd/source/repos/TMPlab1_OOP/TMPlab1_OOP/sortTest.txt");
			ofstream ofst;
			ofst.open("C:/Users/bushd/source/repos/TMPlab1_OOP/TMPlab1_OOP/outSortTest.txt");
			container c;


			c.In(ifst);
			c.Sort();
			c.Out(ofst);

			ifstream ifst1("C:/Users/bushd/source/repos/TMPlab1_OOP/TMPlab1_OOP/outSortTest.txt");
			ifstream ifst2("C:/Users/bushd/source/repos/TMPlab1_OOP/TMPlab1_OOP/expOutSortTest.txt");
			char c1 = ' ', c2 = ' ';
			while (ifst1.get(c1) && ifst2.get(c2))
			{
				Assert::AreEqual(c1, c2);
			}
		}
		TEST_METHOD(TestOutFeature)
		{
			ifstream ifst;
			ifst.open("C:/Users/bushd/source/repos/TMPlab1_OOP/TMPlab1_OOP/featureTest.txt");
			ofstream ofst;
			ofst.open("C:/Users/bushd/source/repos/TMPlab1_OOP/TMPlab1_OOP/outFeatureTest.txt");
			container c;

			bool res = true;
			bool exp = true;

			c.In(ifst);
			c.OutFeature(ofst);

			ifstream ifst1("C:/Users/bushd/source/repos/TMPlab1_OOP/TMPlab1_OOP/outFeatureTest.txt");
			ifstream ifst2("C:/Users/bushd/source/repos/TMPlab1_OOP/TMPlab1_OOP/expOutFeatureTest.txt");
			char c1, c2;
			while (ifst1.get(c1) && ifst2.get(c2))
			{
				Assert::AreEqual(c1, c2);
			}
		}
	};
}
