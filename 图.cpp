#define MAX_VERTEX_NUM 20
const int infinity=INT_MAX;
struct ArcCell{
	int adj;
	char *info;
};

template<calss T>
struct _MGraph
{
	T vex[MAX_VERTEX_NUM];
	ArcCell arcs[MAX_VERTEX_NUM];
	int vexnum;
	int arcnum;
	int kind;
};

template<class T>
class MGraph;
{
	_MGraph<T>mgraph;
	bool visited[MAX_VERTEX_NUM];
	public:
		void CreateGraph;  //创建 
		void DestroyGraph; //销毁 
		int LocateVex(T u);//图中存在点u 返回顶点位置 
		T GetVex(int index);//index是某点的序号，返回index的值
		void PutVex(T v,T value);//v是图中某个顶点，对v的赋值value 
		int FirstAdjVex(T v); //返回v的第一个邻接点的序号 
		int NextAdjVex(T v,T w);//w是v的邻接点，返回v的相对于w的下一个邻接点的序号，若w是v的最后一个邻接点则返回空 
		bool InsertVex(T v);//增加新的顶点v 
		bool DeleteVex(T v);//删除顶点v及其相关的弧 
		bool InsertArc(T v,T,w);//添加弧<v,w>
		bool DeleteArc(T v,T w);//删除弧<v,w>
		bool CreateDG();//构造有向图 
		bool CreateDN();//构造有向网 
		bool CreateUDG();//构造无向图 
		bool CreateUDN();//构造无向网 
		void DFS(int index);//从第index出发，递归的深度优先遍历 
		bool (*VisitFunc)(T v);//访问顶点v的方式 
		void Display();//输出邻接矩阵 
		bool DFSTraverse(bool (*visit)(T v));//深度优先遍历图 
		bool BFSTraverse(bool (*visit)(T v));//广度优先遍历图		 
};

template<class T>
bool visited(T v)
{
	cout<<" ";
	return ture; 
}

template<class T>
void MGraph<T>::CreateGraph()
{
	cout<<"请输入您要的图的种类！有向图（0），有向网（1），无向图（2），无向网（3）";
	cin>>mgraph.kind ;
	switch(mgraph.kind)
	{
		case 0:	CreateDG();//构造有向图 
	 	case 1:	CreateDN();//构造有向网 
		case 2: CreateUDG();//构造无向图 
		case 3: CreateUDN();//构造无向网 
	}
}
