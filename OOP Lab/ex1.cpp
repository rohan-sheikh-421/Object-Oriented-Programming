#include<iostream>
using namespace std;
int main()
{
int numOfItems;
double unitCost;
try
{
cout << "Enter the number of  items: ";
cin >> numOfItems;
cout << endl;
if (numOfItems < 0)
throw numOfItems;
cout << "Enter the cost of one item: ";
cin >> unitCost;
cout << endl;
if (unitCost < 0)
throw unitCost;
cout << "Total cost: $"
<< numOfItems * unitCost << endl;
}
catch (int num)
{
cout << "Negative number of items: " << num
<< endl;
cout << "Number of items must be nonnegative"<<endl;
}
catch (double dec)
{
cout << "Negative unit cost: " << dec
<< endl;
cout << "Unit cost must be nonnegative."
<< endl;
}
system("pause");
return 0;
}
//ans1.  the output is 137.5
//ans2.  number od items must be nonnegative
//ans3.  negative unit cost
       //unit cost must be nonnegative
//ans4.  number of items must be nonnegative