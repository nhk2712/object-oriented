package OOP;

import java.util.Locale;
import java.util.concurrent.TimeUnit;
import java.text.SimpleDateFormat;
import java.util.Date;

class Time {
    static String currentTime;

    static void getTime() throws InterruptedException {
        System.out.print("\033[H\033[2J");
        System.out.flush();

        currentTime = new SimpleDateFormat("HH:mm:ss MMM d, yyyy", Locale.getDefault()).format(new Date());
        System.out.println(currentTime);

        TimeUnit.SECONDS.sleep(1);

        getTime();
    }

    public static void main(String[] args) throws InterruptedException {
        getTime();
    }
}