// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� OMG_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// OMG_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef OMG_EXPORTS
#define OMG_API __declspec(dllexport)
#else
#define OMG_API __declspec(dllimport)
#endif
#include"OtherPlayer.h"
#include"SoursePlayer.h"
OMG_API int Add();

OMG_API bool playrole(SoursePlayer*p, OtherPlayer*op1, OtherPlayer*op2, OtherPlayer*op3,int*box);
OMG_API int selectplayer(SoursePlayer*p);

// �����Ǵ� OMG.dll ������
class OMG_API COMG {
public:
	COMG(void);
	// TODO:  �ڴ�������ķ�����
};

extern OMG_API int nOMG;

OMG_API int fnOMG(void);
