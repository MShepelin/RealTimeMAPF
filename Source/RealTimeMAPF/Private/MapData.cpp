// Fill out your copyright notice in the Description page of Project Settings.

#include "MapData.h"

int32 IMapData::GetWidth_Implementation() const
{
  return 0;
}

int32 IMapData::GetHeight_Implementation() const
{
  return 0;
}

bool IMapData::IsCellTraversable_Implementation(int32 Y, int32 X) const
{
  return false;
}

bool IMapData::IsCellOnGrid_Implementation(int32 Y, int32 X) const
{
  return false;
}

float IMapData::GetGap_Implementation() const
{
  return 0;
}

float IMapData::GetTimeGap_Implementation() const
{
  return 0;
}

FVector IMapData::GetLocation_Implementation() const
{
  return FVector();
}

