#ifndef _SOURSEPLAYER_H_
#define _SOURSEPLAYER_H_
class SoursePlayer{
	bool right;
	bool run;
	bool jump;
	int j1;
	int movespeed;
	bool attack; int atime; int atype;
	int atdistance;
	int aend;
	int atstart, atend;
	int amstart, amend;
	int atmovespeed;
	int atcounts, atnumber;
	int changeatime[2];
	bool ated;
	int atedtime;
	int atedtype;
	bool atedright;
	bool sattack;
	int ateddistance;
	bool invincible;
	int damage;
	int role;
	float hp, mp;//mp58-90,hp32-80
	int dietime;
	int killcount, diecount;
	int runtime;
	bool blink;
	int bx, by;
	float px, py;
public:
	SoursePlayer();
	int getruntime();
	void setruntime(int i);
	void addruntime();
	int getkillcount();
	void addkillcount();
	void adddiecount();
	int getdiecount();
	int getdietime();
	void adddietime();
	void setdietime(int i);
	void restart();
	void revhp();
	void addmp();
	void increasemp(float i);
	float getmp();
	int getdamage();
	bool isinvincible();
	void setinvincible(bool b);
	int getateddistance();
	int getrole();
	void setmos(int i);
	void setatdis(int i);
	void setro(int i);
	void haha();

	bool canuse(int i);
	//�ƶ�
	void prun(bool b);
	//ת��
	void pdirection();
	//��Ծ
	void pjump();
	//����
	void pattack(int i);
	void setAttackAction(int i);
	//����1
	void s1();
	//����2
	void s2();
	//����3
	void s3();
	//����˲��λ��
	void setBlinkPosition(int x, int y);
	int getbx();
	int getby();

	void setsattack(bool b);

	void setatype(int i);

	//��ȡ���λ��
	float getPosiX();
	float getPosiY();
	void setPosiX(float g);
	void setPosiY(float g);

	//�Ƿ��ǹ���״̬
	bool isattack();
	void addatime();
	int getatime();
	void setatime(int i);
	//�Ƿ���ʹ�ü���״̬
	bool issattack();

	int getatype();

	//�Ƿ��Ǳ�����״̬
	bool isated();
	void addatedtime();
	int getatedtime();
	void setatedtime(int i);
	int getatedtype();
	int getatnumber();

	//��ȡ��������
	float gethp();


	void setright(bool b);
	bool isright();

	void setrun(bool b);
	bool isrun();

	void setjump(bool b);
	bool isjump();

	void setj1(int i);
	int getj1();
	void decreaj1();

	int getmovespeed();

	void setattack(bool b);

	void setatdistance(int i);
	int getatdistance();

	void setaend(int i);
	int getaend();
	bool isaend();

	void setattacktime(int i, int j);
	void setattackmovetime(int i, int j);
	bool canattack();
	bool canatmove();
	int getamstart();
	void setatmovespeed(int i);
	int getatmovespeed();

	bool isatedright();

	void sethp(float h);
	void setmp(float m);
	void setate(bool b);
	void setateddistance(int ateddis);
	void setatdtype(int atdtype);
	void setatedright(bool c);

	void hehe();
	int getchangeatime0();
	int getchangeatime1();
	void setshuxing(int a, int b, int c);
	int getatcounts();
	void addatnumber();
};
#endif
