#include "Sound.h"
#include "DxLib.h"
namespace Sound {

	constexpr int SENUM = 15;
	SETYPE se_type;
	int BGM;
	int SE[SENUM];
	bool flag;

	void Initialize()
	{
		SE[carrot] = LoadSoundMem("./Sound/slashing01.ogg");	//仮の効果音
		BGM = LoadSoundMem("./Sound/BPM140.wav");				//仮のBGM
		flag = true;
	}
	void PlayBGM()
	{
		if (flag == true)
		{
			PlaySoundMem(BGM, DX_PLAYTYPE_LOOP);
			flag = false;
		}
	}
	int PlaySE(int type)
	{
		switch (type)
		{
		case carrot:      PlaySoundMem(SE[carrot],		DX_PLAYTYPE_BACK);		break;
		case onion:       PlaySoundMem(SE[onion],		DX_PLAYTYPE_BACK);		break;
		case broccoli:    PlaySoundMem(SE[broccoli],	DX_PLAYTYPE_BACK);		break;
		case cabbage:     PlaySoundMem(SE[cabbage],		DX_PLAYTYPE_BACK);		break;
		case tomato:      PlaySoundMem(SE[tomato],		DX_PLAYTYPE_BACK);		break;
		case potato:	  PlaySoundMem(SE[potato],		DX_PLAYTYPE_BACK);		break;
		case mouse:       PlaySoundMem(SE[mouse],		DX_PLAYTYPE_BACK);		break;
		case meat:        PlaySoundMem(SE[meat],		DX_PLAYTYPE_BACK);		break;
		case cuttingboard:PlaySoundMem(SE[cuttingboard],DX_PLAYTYPE_BACK);		break;
		case simmer:      PlaySoundMem(SE[simmer],		DX_PLAYTYPE_BACK);		break;
		case grill:		  PlaySoundMem(SE[grill],		DX_PLAYTYPE_BACK);		break;
		case jump:		  PlaySoundMem(SE[jump],		DX_PLAYTYPE_BACK);		break;
		case slash:		  PlaySoundMem(SE[slash],		DX_PLAYTYPE_BACK);		break;
		case bell:		  PlaySoundMem(SE[bell],		DX_PLAYTYPE_BACK);		break;
		case apper:		  PlaySoundMem(SE[apper],		DX_PLAYTYPE_BACK);		break;
		}
		return 0;
	}
	void Fin()
	{
		DeleteSoundMem(BGM);
	}
}
