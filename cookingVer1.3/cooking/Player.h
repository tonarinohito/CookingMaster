#pragma once
namespace Player
{
	
	enum State {
		up,
		down,
		cut,
	};

	enum Dir {
		LEFT,
		RIGHT,
		TOP,
		BOTTOM,
	};

	struct Cock
	{
		int		        x,
				        y,
				        w,
			            h,
		 	      animCnt,
				Gstand[3],
				 GcutR[3],
		         GcutL[3];
		int e_pic;
		bool          flag;
		State	    state;
		Dir			   dir;
	};

	struct Effect
	{
		bool flag;
		int Cnt;
	};

	bool Initialize();

	void Update();

	void Draw();

	void Fin();

	void Effect_On();
	void  CutL_On();
	void  CutR_On();
	void  Set_Cut();

}
