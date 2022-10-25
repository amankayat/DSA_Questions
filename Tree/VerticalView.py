# https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/
def verticalTraversal(self, root: Optional[TreeNode]) -> List[List[int]]:
    if not root:
        return []
vertical = defaultdict(list)
queue = collections.deque([(root, 0, 0)])
while queue:
    size = len(queue)
    for _ in range(size):
        node, x, y = queue.popleft()
        vertical[x].append((y, node.val))
        if node.left:
            queue.append((node.left, x - 1, y + 1))
        if node.right:
            queue.append((node.right, x + 1, y + 1))
res = []
for x in sorted(vertical.keys()):
    res.append([tup[1] for tup in sorted(vertical[x])])
return res
