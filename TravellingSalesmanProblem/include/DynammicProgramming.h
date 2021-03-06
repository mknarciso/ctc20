#include <vector>
#include <queue>
#include <unordered_set>
#ifndef DYNAMMICPROGRAMMING_H
#define DYNAMMICPROGRAMMING_H


using namespace std;

class DynammicProgramming
{
    public:
        DynammicProgramming(vector<int> verts, vector<vector<double> > matrix);
        virtual ~DynammicProgramming();
        vector<int> Solve (double &cost);
        bool CheckHamiltonian(vector<int> &route);


    protected:

    private:
        class Node {
            public:
                int Value;
                vector<Node> ChildNodes;
                bool Selected;
        };
         vector<vector<double> > adjacencyMatrix;
         vector<int> vertices;
         double GetMinimumCostRoute (int startVertex, unordered_set<int> &hashSet, Node &root);
         vector<int> TraverseTree (Node &root, int startInt);
         void TraverseTreeUtil (Node &root, queue<int> &vertices);

};

#endif // DYNAMMICPROGRAMMING_H
