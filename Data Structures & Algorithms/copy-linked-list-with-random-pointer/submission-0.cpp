/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        static unordered_map<Node*, Node*> nodeMap;
        if (head == nullptr) return nullptr;
        if (nodeMap.contains(head)) {
            return nodeMap[head];
        }
        Node* copy = new Node(head->val);
        nodeMap[head] = copy;
        copy->next = copyRandomList(head->next);
        copy->random = nodeMap[head->random];
        return copy;
    }
};
