#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <cstdio>
 
#define MAX_CITY 200
 
using namespace std;
 
//2020.4.23

struct Edge
{
	int y;
	int d,a;
	struct Edge *next;
	
	Edge(int dst,int dep,int arr):y(dst),d(dep),a(arr),next(NULL) {;}
	Edge () {;}
};
 
int nCity;
Edge* edges[MAX_CITY]; 
Edge* reverse[MAX_CITY]; 
 
map <string,int> m;
 

void insert_edge (int nsc)
{
	int nstation,time,last,lastTime;
	int current,currentTime;
	string city;
	for (int i=0;i<nsc;i++)
	{
		cin >> nstation;
		cin>>time>>city;
		last = m[city];
		lastTime = time;
		for (int j=1;j<nstation;j++)
		{
			cin >> time >> city;
			current = m[city];
			Edge *newEdge = new Edge(current,lastTime,time);
			newEdge->next = edges[last];
			edges[last] = newEdge;
			Edge *revEdge = new Edge (last,lastTime,time);
			revEdge->next = reverse[current];
			reverse[current] = revEdge;
 
			last = current;
			lastTime = time;
		}
	}
}
 

//Algorithim dijkstra
int calDst (int src,int dst,int sTime)
{

	int arrival[MAX_CITY],v,min;
	bool intree[MAX_CITY];
 
	for (int i=0;i<nCity;i++)
		arrival[i] = INT_MAX;
	memset (intree,false,sizeof(intree));
	arrival[src] = sTime;
	intree[src]= true;
	v = src;
 
	do
	{
		for (Edge* p=edges[v];p;p=p->next)
		{
		
			if (p->d>=arrival[v])
			{
				int y =  p->y;
			
				if (p->a < arrival[y])
					arrival[y] = p->a;
			}
		}
		min = INT_MAX;	
		v = -1;
		for (int i=0;i<nCity;i++)
			if (!intree[i] && arrival[i]<min)
			{
				v = i;
				min = arrival[i];
			}
		intree[v] = true;
	}while (v!=-1);
 
	return arrival[dst];
}
 

int calSrc (int dst,int src,int eTime)
{

	int depture[MAX_CITY],v,max;
	bool intree[MAX_CITY];
 
	for (int i=0;i<nCity;i++)
		depture[i] = -1;
	memset (intree,false,sizeof(intree));
	depture[dst] = eTime;
	intree[dst]= true;
	v = dst;
 
	do
	{
		for (Edge* p=reverse[v];p;p=p->next)
		{
			if (p->a<=depture[v])
			{
			
				int y =  p->y;
				if (p->d > depture[y])
					depture[y] = p->d;
			}
		}
		max=0;	
		v = -1;
		for (int i=0;i<nCity;i++)
			if (!intree[i] && depture[i]>max)
			{
				v = i;
				max = depture[i];
			}
		intree[v] = true;
	}while (v!=-1);
 
	return depture[src];
}
 
int main (void)
{
	int testCase,nsc,src,dst,sTime,eTime,realSTime;
	string str,srcStr,dstStr;
	cin >> testCase;
	for (int test = 1;test<=testCase;test++)
	{
		cin >> nCity;	
		m.clear();
		memset (edges,NULL,sizeof(edges));
		memset (reverse,NULL,sizeof(reverse));
 
		for (int i=0;i<nCity;i++)
		{
			cin >> str;
			m[str] = i;
		}
		cin >> nsc;
		insert_edge (nsc);
		cin >> sTime;
		cin >> srcStr >> dstStr;
		src = m[srcStr];
		dst = m[dstStr];
 
		eTime = calDst (src,dst,sTime);
		cout <<"Scenario "<<test <<endl;
		if (eTime<INT_MAX)
		{
			realSTime = calSrc (dst,src,eTime);
			printf ("Departure %04d %s\n",realSTime,srcStr.c_str());
			printf ("Arrival   %04d %s\n",eTime,dstStr.c_str());
		}
		else
			printf ("No connection\n");
		cout << endl;
	}
	return 0;

} 
