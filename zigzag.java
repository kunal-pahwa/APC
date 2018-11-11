void zigZagTraversal(Node root)
{
//Add your code here.
	if (root == null) {
		return;
	}
	Queue<Node> q = new LinkedList<Node>();
	q.add(root);
// add null after every level
	q.add(null);
	Stack<Integer> stk = new Stack<Integer>();
boolean righttoleft = false; //printing right to left
//level order traversal 
while (!q.isEmpty()) { 
	root = q.remove();

	if (root != null) {
// pushing elements into stack if righttoleft is true
		if(righttoleft == false)
			System.out.print(root.data + " ");
		else{

			stk.push(root.data);
		}
		if (root.left != null) {
			q.add(root.left);
		}
		if (root.right != null) {
			q.add(root.right);
		}
	} 
	else {
		if (!q.isEmpty()) {
// System.out.println();
			if(righttoleft == true){
				righttoleft = false;
			}
			else{
				righttoleft = true;
			}
// printing stack elemets i.e righttoleft elements in tree
			while(!stk.isEmpty()){
				System.out.print(stk.peek()+" ");
				stk.pop();
			}
			q.add(null);
		}
	}
}
// printing the remaining elements of last level of tree if left in stack
	while(!stk.isEmpty()){
		System.out.print(stk.peek()+" ");
		stk.pop();
	}
}