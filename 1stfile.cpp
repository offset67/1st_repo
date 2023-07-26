

// CPP program to demonstrate
// the working of a map of
// tuples.
#include <bits/stdc++.h>
using namespace std;

// Function to print map elements
void print(map<tuple<int, int,
		int>, int> &mapOfTuple)
{
cout << " Key(Tuple)		 " <<
		"Value(Sum)\n\n";
for (auto pr : mapOfTuple)

	// pr points to current pair of mapOfTuple
	cout << "[" << get<0>(pr.first) << ", " <<
			get<1>(pr.first) << ", " <<
			get<2>(pr.first) << "]		 " <<
			pr.second << "\n";


}

// Driver code
int main()
{
// Sending the hash function
// as a third argument
map<tuple<int, int, int>,
			int> mapOfTuple;

// Creating some tuples to be used
// as keys
tuple<int, int,
		int> tuple1(100, 200, 300);
tuple<int, int,
		int> tuple2(400, 500, 600);
tuple<int, int,
		int> tuple3(700, 800, 900);

// Mapping sum of tuple elements as values
mapOfTuple[tuple1] = get<0>(tuple1) +
					get<1>(tuple1) +
					get<2>(tuple1);
mapOfTuple[tuple2] = get<0>(tuple2) +
					get<1>(tuple2) +
					get<2>(tuple2);
mapOfTuple[tuple3] = get<0>(tuple3) +
					get<1>(tuple3) +
					get<2>(tuple3);

// Calling print function
print(mapOfTuple);

return 0;
}
