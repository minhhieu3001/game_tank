﻿#pragma once
#ifndef SDL_UTILS_H
#define SDL_UTILS_H
#pragma once
#include<Windows.h>
#include<string>
#include<SDL.h>
#include<SDL_image.h>
#include<SDL_mixer.h>
#include<SDL_ttf.h>
#include<vector>
#include<time.h>
static SDL_Window* gWindow = NULL;
static SDL_Renderer* gScreen = NULL;
static SDL_Event gEvent;

//SCREEN
const int FRAME_PER_SECOND = 25; //fps
const int SCREEN_WIDTH = 1280;
const int SCREEN_HEIGHT = 640;
const int SCREEN_BPP = 32;


#define TILE_SIZE 64
#define MAX_MAP_X 20
#define MAX_MAP_Y 10


typedef struct Input
{
	int left_;
	int right_;
	int up_;
	int down_;
}; 

typedef struct Map
{
	int start_x_;
	int start_y_;

	int tile[MAX_MAP_Y][MAX_MAP_X] = 
	{
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 1, 2, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 2, 1, 0 },
		{ 0, 2, 2, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 2, 2, 0 },
		{ 0, 2, 2, 2, 2, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 0 },
		{ 0, 2, 2, 2, 2, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 2, 2, 2, 2, 0 },
		{ 0, 2, 2, 2, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 2, 2, 2, 0 },
		{ 0, 1, 2, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 2, 1, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
	};

};

void InitSDL(SDL_Window *gWindow, SDL_Renderer* &gScreen);

#endif
