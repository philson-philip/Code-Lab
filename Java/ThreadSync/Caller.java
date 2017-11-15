class Callee
{
	void call(String msg)
	{
		try{
		System.out.println("["+msg);
		Thread.sleep(1000);
		}
		catch(InterruptedException e)
		{
		System.out.println("]");
		}
	}
}
class Caller implements Runnable
{
	Callee target;
	Thread t;
	String message;
	Caller(Callee c,String msg)
	{
		t = new Thread(this);
		target = c;
		message=msg;
		t.start();
	}
	public void run()
	{
		target.call(message);
	}
}
class Demo
{
	public static void main(String args[])
	{
		Callee t = new Callee();
		Caller C1 = new Caller(t,"Hello");
		Caller C3 = new Caller(t,"Synchronised");
		Caller C2 = new Caller(t,"World");
		try{
			C1.t.join();
			C2.t.join();
		}
		catch(InterruptedException e)
		{
			System.out.println(e);
		}
	}
}
