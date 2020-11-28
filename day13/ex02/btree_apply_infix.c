#include "../ft_btree.h"

void            btree_apply_infix(t_btree *root, void (*applyf)(void *))//вроде ок
{
    if (root->left)
        btree_apply_prefix(root->left, applyf);

    applyf(root->item);

    if (root->right)
        btree_apply_prefix(root->right, applyf);
}