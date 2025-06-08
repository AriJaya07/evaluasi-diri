package threads;

/**
 * Contoh kelas thread sederhana.
 */
public class HelloThread extends Thread {
    private String threadName;

    public HelloThread(String name) {
        this.threadName = name;
    }

    @Override
    public void run() {
        for(int i=0; i<5; i++) {
            System.out.println(threadName + " says Hello " + i);
            try {
                Thread.sleep(500);  // delay setengah detik
            } catch (InterruptedException e) {
                System.out.println(threadName + " interrupted.");
            }
        }
    }
}
