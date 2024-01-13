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
		void CreateGraph;  //���� 
		void DestroyGraph; //���� 
		int LocateVex(T u);//ͼ�д��ڵ�u ���ض���λ�� 
		T GetVex(int index);//index��ĳ�����ţ�����index��ֵ
		void PutVex(T v,T value);//v��ͼ��ĳ�����㣬��v�ĸ�ֵvalue 
		int FirstAdjVex(T v); //����v�ĵ�һ���ڽӵ����� 
		int NextAdjVex(T v,T w);//w��v���ڽӵ㣬����v�������w����һ���ڽӵ����ţ���w��v�����һ���ڽӵ��򷵻ؿ� 
		bool InsertVex(T v);//�����µĶ���v 
		bool DeleteVex(T v);//ɾ������v������صĻ� 
		bool InsertArc(T v,T,w);//��ӻ�<v,w>
		bool DeleteArc(T v,T w);//ɾ����<v,w>
		bool CreateDG();//��������ͼ 
		bool CreateDN();//���������� 
		bool CreateUDG();//��������ͼ 
		bool CreateUDN();//���������� 
		void DFS(int index);//�ӵ�index�������ݹ��������ȱ��� 
		bool (*VisitFunc)(T v);//���ʶ���v�ķ�ʽ 
		void Display();//����ڽӾ��� 
		bool DFSTraverse(bool (*visit)(T v));//������ȱ���ͼ 
		bool BFSTraverse(bool (*visit)(T v));//������ȱ���ͼ		 
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
	cout<<"��������Ҫ��ͼ�����࣡����ͼ��0������������1��������ͼ��2������������3��";
	cin>>mgraph.kind ;
	switch(mgraph.kind)
	{
		case 0:	CreateDG();//��������ͼ 
	 	case 1:	CreateDN();//���������� 
		case 2: CreateUDG();//��������ͼ 
		case 3: CreateUDN();//���������� 
	}
}
