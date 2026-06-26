class Codec {
public:
    void encode(TreeNode* root, string &s) {
        if (!root) {
            s += "#,";
            return;
        }
        s += to_string(root->val) + ",";
        encode(root->left, s);
        encode(root->right, s);
    }

    TreeNode* decode(string &data, int &i) {
        if (data[i] == '#') {
            i += 2;
            return NULL;
        }

        int sign = 1;
        if (data[i] == '-') {
            sign = -1;
            i++;
        }

        int num = 0;
        while (data[i] != ',') {
            num = num * 10 + (data[i] - '0');
            i++;
        }
        i++;

        TreeNode* root = new TreeNode(sign * num);
        root->left = decode(data, i);
        root->right = decode(data, i);

        return root;
    }

    string serialize(TreeNode* root) {
        string s;
        encode(root, s);
        return s;
    }

    TreeNode* deserialize(string data) {
        int i = 0;
        return decode(data, i);
    }
};
