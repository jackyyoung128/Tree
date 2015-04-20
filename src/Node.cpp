#include "Node.h"

Node::Node ( int val )
{
    data = val;
    num = 0;
}

Node::~Node ( )
{
    //dtor
}

void Node::append ( Node* child )
{
    next[++num] = child;
    child->parent = this;
}

Node* Node::getparent ( )
{
    return parent;
}

int Node::getvalue ( )
{
    return data;
}

int Node::count ( )
{
    ans = 1;

    for ( int i=1; i<=num; ++i)
    {
        ans += next[i]->count ();
    }

    return ans;
}
