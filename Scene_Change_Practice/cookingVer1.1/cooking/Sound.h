#pragma once
enum SETYPE
{
	apper,			//音符出現音0
	carrot,			//ニンジン1
	onion,			//タマネギ2
	broccoli,		//ブロッコリー3
	cabbage,		//キャベツ4
	tomato,			//トマト5
	potato,			//ジャガイモ6
	mouse,			//ネズミ7
	meat,			//肉8
	cuttingboard,	//まな板9
	simmer,			//煮る10
	grill,			//焼く11
	jump,			//ジャンプ12
	slash,			//切る13
	bell,			//入店音（ベル）13
};


class Sound 
{
private:

	static constexpr int SENUM = 20;
	
	bool flag;
	int SE[SENUM];
	SETYPE se_type;

public:
	int BGM;

	bool Initialize();

	int PlayBGM();

	int PlaySE(int);	//enum型でIDを指定、戻り値はIDに対応したSE

	void Fin();

};