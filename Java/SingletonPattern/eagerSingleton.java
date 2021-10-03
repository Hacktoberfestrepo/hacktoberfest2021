public class SingletonTest {
   private static SingletonTest ob1 = new SingletonTest();

   private SingletonTest(){}

   public static SingletonTest getInstance(){
      return ob1;
   }
}