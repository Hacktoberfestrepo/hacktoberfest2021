public class SingletonTest {

    private static SingletonTest ob2;

    private SingletonTest(){}

    public static SingletonTest getInstance() {
        if (ob2 == null){
            ob2 = new SingletonTest();
        }
        return ob2;
    }
}