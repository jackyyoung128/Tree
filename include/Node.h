#ifndef NODE_H
#define NODE_H


class Node
{
    public:
        Node ( int );
        virtual ~Node();
        void append ( Node* );
        int count ();
        Node* getparent ();
        int getvalue ();

    protected:

    private:
        Node* next[1001];
        int data;
        int num;
        int ans;
        Node* parent;
};

#endif // NODE_H
