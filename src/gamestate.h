#pragma once
#include "image.h"
#include "levels.h"

struct GameData
{
  Image* fallback;
  Image* wall;
  Image* ground;
  Image* player;
  Image* box;
  Memory::Arena* arena_levels;
  Memory::Arena* arena_entities;
  Memory::Arena* arena_images;
  LevelData* levels;
  int levelCount;
  int currentLevelIndex;
  bool* keys_previous;

  LevelData* GetCurrentLevel()
  {
    return &levels[currentLevelIndex];
  }
};
