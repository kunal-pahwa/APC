class TrieNode{
	char value;
	boolean isTerminating;
	TrieNode arr[];
	public TrieNode(char value){
		this.value=value;
		isTerminating=false;
		arr=new TrieNode[26]
	}
}
public class Trie{
	private TrieNode root;
	public Trie(){
		root=new TrieNode('\0');
	}
	private void add(TrieNode root,String word){
		if(word.length()==0){
			root.isTerminating=true;
			return;
		}
		int index=word.charAt(0)-'a';
		TrieNode child=root.arr[index];
		if(child==null){
			child=new TrieNode(word.charAt(0));
			root.arr[index]=child;
		}
		else{
			add(child,word.substring(1));
		}

	}
	public void Add(String word){
		add(root,word);

	}
	public static void main(String args[]){
		add(root,"note");
	}
	public boolean search(TrieNode root,String word){
		for(int i=0;i<word.length();i++){
			int index=word.charAt(i);
			TreeNode child=root.arr[index];
			if(child==null){
				return false;
			}	
			root=child;

		}
		if(root.isTerminating==true)
		return true;
		return false;
	}
}