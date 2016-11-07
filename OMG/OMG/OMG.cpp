// OMG.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "OMG.h"


// 这是导出变量的一个示例
OMG_API int nOMG=0;

// 这是导出函数的一个示例。
OMG_API int fnOMG(void)
{
	return 42;
}
OMG_API int Add(){
	return 120;
}
// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 OMG.h
COMG::COMG()
{
	return;
}


OMG_API bool playrole(SoursePlayer*p, OtherPlayer*op1, OtherPlayer*op2, OtherPlayer*op3,int*box){
	return false;
}
OMG_API int selectplayer(SoursePlayer*p){

	return 0;
}