#include "Sound.h"
//  ---------------------------------------------------------------------------
//
//  @file       Sound.cpp
//  @brief      Used to interface with speakers
//  @author     John Salguero www.JohnSalguero.com
//  @license    This file is part of the --------
//
//
//  ---------------------------------------------------------------------------

int Sound::PlayVoc_OneShot(unsigned char *, unsigned int)
{
	return 0;
}

int Sound::playVoc_Looping(unsigned char *, unsigned int)
{
	return 0;
}

int Sound::soundIsPlaying(int)
{
	return 0;
}

void Sound::setPan(int, unsigned int, unsigned int, unsigned int)
{
}

void Sound::stopSound(int)
{
}

void Sound::UnloadSounds()
{
}

void Sound::Free()
{
}

void Sound::Init()
{
}
