#pragma once

#include <vector>
#include <string>
using namespace std;

class SimpleNode
{

public:

	SimpleNode(void);	//默认构造函数
	~SimpleNode(void);	//析构函数

	SimpleNode(vector<int> _nears);//自定义构造函数
	SimpleNode(const SimpleNode & other);//拷贝构造函数
	SimpleNode & operator = (const SimpleNode & other);//赋值函数

	const vector<int> & GetNears();//外部获取邻居点集合

public:

	int degree;//节点度--邻接节点数量
	bool visit;//节点遍历标记
	string group_id;//节点所在群ID

private:

	vector<int> nears;//邻居点集合

};