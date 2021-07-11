#include <iostream>

using namespace std;

template <int max_set>

struct Set {
	bool is_Element[max_set];
};

template <int max_size>

class Digraph {
	public:
	int count;
	Set<max_size> neighbors[max_size];
};

int main()
{	
	Digraph<3> graph;
	for(int i = 0; i<3; i++)
	{
		((graph.neighbors[0]).is_Element)[i] = true;
	}
	cout<<graph.neighbors[0].is_Element[1];
	return 0;
}
