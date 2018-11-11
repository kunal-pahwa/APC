public class basicqueue implements QueueIntf{
	private int []a=new int[5];
	private int tail=0;
	private int head=-1;

	public void enqueue(int e){
		if(tail==5) throw RuntimeException("StackOverflowError");
		else{
			a[tail++]=e;
		}
	}
	public int dequeue(){
		
		return 0;
	}
	public boolean isEmpty(){
		return true;
	}
	public int size(){
		return 0;
	}
	public void printQueue(){
		
	}
}