class Datarace implements Runnable {
    public static int i = 0;
    public void run() {
        i++;
        i++;
    }
    public static void main(String[] args) throws InterruptedException {
        Datarace m = new Datarace();
        Thread t = new Thread(m);
        t.start();
        m.run();
        t.join();
        System.out.println("i = " + i);
    }
}
