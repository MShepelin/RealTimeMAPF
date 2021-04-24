#pragma once

#include "nodes.h"
#include "gl_const.h"
#include <vector>

template<typename CellType>
class NodesBinaryHeap
{
public:
    using NodeType = Node<CellType>;

protected:
    std::vector<NodeType*> nodes_;
    bool break_tie_gmax_;

    void MoveUp(size_t node_index);
    void MoveDown(size_t node_index);

public:
    NodesBinaryHeap();

    // Returns true if the first node has greater order than the second one
    bool Compare(const NodeType& first, const NodeType& second) const;

    NodeType* PopMin();

    void Insert(NodeType& new_node);

    void DecreaseGValue(NodeType& node_to_change, FTYPE new_gvalue);

    size_t Size() const;

    void SetBreakTie(bool break_tie_with_gmax);

    void Clear();
};


template<typename CellType>
NodesBinaryHeap<CellType>::NodesBinaryHeap()
{
    nodes_ = { nullptr };
    break_tie_gmax_ = true;
}

template<typename CellType>
void NodesBinaryHeap<CellType>::MoveUp(size_t node_index)
{
    for (size_t parentIndex = (node_index >> 1); parentIndex && Compare(*nodes_[parentIndex], *nodes_[node_index]); node_index >>= 1, parentIndex >>= 1)
    {
        std::swap(nodes_[parentIndex]->heap_index, nodes_[node_index]->heap_index);
        std::swap(nodes_[parentIndex], nodes_[node_index]);
    }
}

template<typename CellType>
void NodesBinaryHeap<CellType>::MoveDown(size_t node_index)
{
    for (size_t minChildIndex = node_index << 1; minChildIndex + 1 < nodes_.size(); minChildIndex = node_index << 1)
    {
        if (Compare(*nodes_[minChildIndex], *nodes_[minChildIndex + 1]))
            ++minChildIndex;

        NodeType& currentNode = *nodes_[node_index];
        NodeType& minChild = *nodes_[minChildIndex];
        if (!Compare(currentNode, minChild))
            break;

        std::swap(currentNode.heap_index, minChild.heap_index);
        std::swap(nodes_[node_index], nodes_[minChildIndex]);
        node_index = minChildIndex;
    }

    if ((node_index << 1) < nodes_.size())
    {
        NodeType& currentNode = *nodes_[node_index];
        NodeType& minChild = *nodes_[node_index << 1];

        if (Compare(currentNode, minChild))
        {
            std::swap(currentNode.heap_index, minChild.heap_index);
            std::swap(nodes_[node_index], nodes_[node_index << 1]);
        }
    }
}

template<typename CellType>
void NodesBinaryHeap<CellType>::Insert(NodeType& new_node)
{
    new_node.heap_index = nodes_.size();
    nodes_.emplace_back(&new_node);
    MoveUp(new_node.heap_index);
}

template<typename CellType>
void NodesBinaryHeap<CellType>::DecreaseGValue(NodeType& node_to_change, FTYPE new_gvalue)
{
    node_to_change.g = new_gvalue;
    MoveUp(node_to_change.heap_index);
}

template<typename CellType>
Node<CellType>* NodesBinaryHeap<CellType>::PopMin()
{
    if (nodes_.size() <= 1)
    {
        return nullptr;
    }

    NodeType* result = nodes_[1];
    std::swap(nodes_[1], nodes_.back());
    nodes_.pop_back();
    if (nodes_.size() >= 2)
    {
        nodes_[1]->heap_index = 1;
    }
    MoveDown(1);

    return result;
}

template<typename CellType>
size_t NodesBinaryHeap<CellType>::Size() const
{
    return nodes_.size() ? nodes_.size() - 1 : 0;
}

template<typename CellType>
void NodesBinaryHeap<CellType>::SetBreakTie(bool break_tie_with_gmax)
{
    break_tie_gmax_ = break_tie_with_gmax;
}

template<typename CellType>
bool NodesBinaryHeap<CellType>::Compare(const NodeType& first, const NodeType& second) const
{
    FTYPE f_first = first.g + first.h;
    FTYPE f_second = second.g + second.h;

    if (f_first == f_second)
    {
        return break_tie_gmax_ == (first.g < second.g);
    }

    return f_first > f_second;
}

template<typename CellType>
void NodesBinaryHeap<CellType>::Clear()
{
    nodes_ = { nullptr };
}
