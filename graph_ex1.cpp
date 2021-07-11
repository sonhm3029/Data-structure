#include <iostream>
#include <vector>

//			GRAPH			//

using namespace std;

//		CREATE GRAPH		//

/*	1. REPRESENT GRAPH USING ADJACENCY 	LIST
		USING VECTOR INSTEAD OF LINKED LIST
*/

class Graph{
	vector < vector<int> > adj_list;
	public:
		void add_Vertex();
		void link_Vertex();
		void show_Graph();
		void show_list_vertex();
};


void Graph::add_Vertex()
{
	int num_vertex;
	cout<<"\n Type in number of vertex: ";cin>>num_vertex;
	for(int i = 0; i<num_vertex; i++)
	{
		vector <int> new_vertex;
		adj_list.push_back(new_vertex);
	}
}

void Graph::show_list_vertex()
{
	cout<<"\nList vertex name:";
	for(int i = 0; i<adj_list.size(); i++)
	{
		cout<<"\nVertex "<<i;
	}
	cout<<endl;
}

void Graph::link_Vertex()
{
	char chose;
	cout<<"\n Start link vertex:";
	for(int i = 0; i<adj_list.size(); i++)
	{
		cout<<"\nLink vertex "<<i;
		do{
			int other_vertex;
			cout<<"\nType in other vertext to link."<<endl;
			Graph::show_list_vertex();
			cin>>other_vertex;
			adj_list[i].push_back(other_vertex);
			cout<<"\nAny vertex to link (y/n)";cin>>chose;
		}while(chose !='n'&&chose !='N');
	}
}


void Graph::show_Graph()
{
	for(int i = 0; i<adj_list.size(); i++)
	{
		cout<<"\nVertex "<<i<<" connect with direction to (";
		for(int j = 0; j< adj_list[i].size(); j++)
		{
			if(j == adj_list[i].size() - 1)
			{
				cout<<adj_list[i][j];
			}
			else{
				cout<<adj_list[i][j]<<", ";
			}
		}
		cout<<")";
	}
}
int main()
{
	Graph test_graph;
	test_graph.add_Vertex();
	test_graph.link_Vertex();
	test_graph.show_Graph();
	return 0;
}
