public class SingletonTest{
    private static SingletonTest ob3;

    private SingletonTest() {}

    public static synchronized SingletonTest getInstance() {
        if (ob3 == null){
            ob3 = new SingletonTest();
        }
        return ob3;
    }
}