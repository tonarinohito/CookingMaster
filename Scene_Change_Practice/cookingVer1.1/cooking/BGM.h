#pragma once
namespace BGM {
	struct Bgm {
		float BPM ;				//ÈBPM
		float second ;			//1b
		int singlfps ;		//1t[ªÌÔ[ms]

		int beat ;					//q
		float sibu ;		//4ª¹1ÂªÌI¹_
		int SE;
		int BGM;

	};

	bool Initialize();

	void Updata();

	void Draw();

	void Fin();
}
