 vector<int> result;
        if (!root) return result;  // Edge case: if root is null
        
        stack<Node*> stk;
        stk.push(root);
        
        while (!stk.empty()) {
            Node* node = stk.top();
            stk.pop();
            result.push_back(node->val);
            for (Node* child : node->children) {
                stk.push(child);
            }
        }
        
        // Reverse the result to get postorder
        reverse(result.begin(), result.end());
        
        return result;
    }