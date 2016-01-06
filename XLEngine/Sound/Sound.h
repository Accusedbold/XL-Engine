//  ---------------------------------------------------------------------------
//
//  @file       Sound.h
//  @brief      Used to interface with speakers
//  @author     John Salguero www.JohnSalguero.com
//  @license    This file is part of the --------
//
//
//  ---------------------------------------------------------------------------


#ifndef SOUND_H_
#define SOUND_H_

namespace Sound
{
	int PlayVoc_OneShot(unsigned char*, unsigned int);
	int playVoc_Looping(unsigned char*, unsigned int);
	int soundIsPlaying(int);
	void setPan(int, unsigned int, unsigned int, unsigned int);
	void stopSound(int);
	void UnloadSounds();
	void Free();
	void Init();
}



#endif
