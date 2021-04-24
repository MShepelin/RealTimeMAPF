#pragma once

#include <vector>
#include "agents.h"
#include "searchresult.h"

template<typename CellType>
class AgentsArray
{
public:
    using TaskType = AgentTask<CellType>;

private:
    std::vector<bool> storage_validation_;
    std::vector<int> popped_IDs_;

public:
    int ReserveNewID();

    void RemoveID(int agent_ID);

    std::vector<int> GetIDs() const;

    bool IsStored(int agent_ID) const;

    void Clear();
};


template<typename CellType>
int AgentsArray<CellType>::ReserveNewID()
{
    if (popped_IDs_.size())
    {
        int available_ID = popped_IDs_.back();
        storage_validation_[available_ID] = true;
        popped_IDs_.pop_back();
        return available_ID;
    }

    storage_validation_.push_back(true);

    int result = storage_validation_.size() - 1;
    assert(result == storage_validation_.size() - 1);
    return result;
}

template<typename CellType>
void AgentsArray<CellType>::RemoveID(int agent_ID)
{
    if (agent_ID < 0 || agent_ID >= storage_validation_.size())
        throw std::out_of_range("Agent ID is out of range");

    if (agent_ID + 1 == storage_validation_.size())
    {
        storage_validation_.pop_back();
        return;
    }

    if (storage_validation_[agent_ID])
    {
        popped_IDs_.push_back(agent_ID);
        storage_validation_[agent_ID] = false;
    }
}

template<typename CellType>
std::vector<int> AgentsArray<CellType>::GetIDs() const
{
    std::vector<int> IDs;
    for (int i = 0; i < storage_validation_.size(); ++i)
        if (storage_validation_[i]) IDs.push_back(i);

    return IDs;
}

template<typename CellType>
bool AgentsArray<CellType>::IsStored(int agent_ID) const
{
    if (agent_ID < 0 || 
        agent_ID >= storage_validation_.size() || 
        !storage_validation_[agent_ID])
        return false;

    return true;
}

template<typename CellType>
void AgentsArray<CellType>::Clear()
{
    storage_validation_.clear();
    popped_IDs_.clear();
}
