#include <iostream>
#include <vector>
#include <stack>

//			GRAPH			//

using namespace std;

//		CREATE GRAPH		//

/*	1. REPRESENT GRAPH USING ADJACENCY 	LIST
		USING VECTOR INSTEAD OF LINKED LIST
*/

class Graph{
	vector < vector<int> > adj_list;
	vector<int> visited_list;
	public:
		void add_Vertex();
		void link_Vertex();
		void show_Graph();
		void show_list_vertex();
		int DFS_pactice(int start_vertex, int final_vertex);
		bool check_visited(vector<int> list_visited, int vertex);
		int dijkstra_path();
};


void Graph::add_Vertex()
{
	int num_vertex;
	cout<<"\n Type in number of vertex: ";cin>>num_vertex;
	for(int i = 0; i<num_vertex; i++)
	{
		vector <int> new_vertex;
		adj_list.push_back(new_vertex);
		visited_list.push_back(0);
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

/*	###################							DFS PRACTICE							################### */
bool Graph::check_visited(vector <int> list_visited, int vertex)
{
	for(int i = 0; i<list_visited.size(); i++)
	{
		if(list_visited[vertex] == 1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
//void Graph::DFS_pactice(int start_vertex)// start form vertex
//{
//
//	stack <int> list_way;
//	visited_list[start_vertex] = 1;
//	cout<<start_vertex<<" ";
//	for(int i = 0; i<adj_list[start_vertex].size(); i++)
//	{
//		if(Graph::check_visited(visited_list,adj_list[start_vertex][i]) == false)
//		{
//			Graph::DFS_pactice(adj_list[start_vertex][i]);
//		}
//	}
//	
//}
int Graph::DFS_pactice(int start_vertex, int final_vertex)// start form vertex
{

	stack <int> list_way;
	visited_list[start_vertex] = 1;
	if(start_vertex == final_vertex)
	{
		cout<<start_vertex;
		return 1;
	}
	cout<<start_vertex<<" ";
	for(int i = 0; i<adj_list[start_vertex].size(); i++)
	{
		if(Graph::check_visited(visited_list,adj_list[start_vertex][i]) == false)
		{
			Graph::DFS_pactice(adj_list[start_vertex][i], final_vertex);
		}
	}
}

int Graph::dijkstra_path()
{
	
	return;
}


int main()
{
	Graph test_graph;
	test_graph.add_Vertex();
	test_graph.link_Vertex();
	test_graph.show_Graph();
	cout<<endl<<"DFS way show up: ";
	if( test_graph.DFS_pactice(0,3) == 1)
	{
		cout<<"\nok";
	}
	else
	{
		cout<<"\nfail";
	}
	return 0;
}
