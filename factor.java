class Main {
    static int HCF(int x, int y)
    {
        if (x == 0)
            return y;
        if (y == 0)
            return x;

        if (x == y)
            return x;

        if (x > y)
            return HCF(x - y, y);
        return HCF(x, y - x);
    }

    public static void main(String[] args)
    {
        int x = 100, y = 88;
        System.out.println("HCF of " + x + " and " + y
                           + " is " + HCF(x, y));
    }
}
