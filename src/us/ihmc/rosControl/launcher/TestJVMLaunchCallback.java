package us.ihmc.rosControl.launcher;

public class TestJVMLaunchCallback
{
   public TestJVMLaunchCallback(int val)
   {
      System.out.println("CTOR: " + val);
   }
   
   public native void callVoidFunctionWithString(String string);
   public native int callIntFunctionWithBoolean(boolean a, boolean b);
   
   public void execute(int value)
   {
      System.out.println("VALUE IS " + value);
      
      try
      {
         callVoidFunctionWithString("Hello from java");
         System.out.println("Integer return: " + callIntFunctionWithBoolean(true, false));
      }
      catch(Throwable e)
      {
         e.printStackTrace();
      }
      
      
   }
}
