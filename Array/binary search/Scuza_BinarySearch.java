import java.util.*;
import java.io.*;
import static java.lang.Math.max;
import static java.lang.Math.min;
import static java.lang.Math.*;
import static java.lang.System.out;

/*
Question Link : https://codeforces.com/contest/1742/problem/E
 */

public class Scuza_BinarySearch {

    public static void main(String args[]) throws Exception {
        FastReader sc = new FastReader();
        int test;

        try {
            test = sc.nextInt();
        } catch (Exception E) {
            return;
        }

        while (test-- > 0) {
            int n;
            n = sc.nextInt();
            int m = sc.nextInt();

            ArrayList<Integer> ar = new ArrayList<>();
            ArrayList<Long> sar = new ArrayList<>();
            ArrayList<Integer> nar = new ArrayList<>();

            ar.add(sc.nextInt());
            nar.add(ar.get(0));
            sar.add(ar.get(0) + 0l);
            for (int i = 1; i < n; i++) {
                ar.add(sc.nextInt());
                nar.add(max(nar.get(i - 1), ar.get(i)));
                sar.add(sar.get(i - 1) + ar.get(i));
            }

            int tep;
            int ans = 0;
            for (int i = 0; i < m; i++) {
                tep = sc.nextInt();
                ans = binarySearch(nar, tep);
                if (ans == -1) {
                    out.print(0 + " ");
                } else {
                    out.print(sar.get(ans) + " ");
                }
            }

            out.println();
        }
    }

    static int binarySearch(ArrayList<Integer> ar, int value) {
        int st = 0, end = ar.size() - 1;
        int mid = (end - st) / 2 + st;
        int ans = -1;
        while (st <= end) {
            mid = (end - st) / 2 + st;
            if (ar.get(mid) > value) {
                end = mid - 1;
            } else {
                ans = mid;
                st = mid + 1;
            }
        }
        return ans;
    }

    static class FastReader {
        BufferedReader br;
        StringTokenizer st;

        public FastReader() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }

        String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        long nextLong() {
            return Long.parseLong(next());
        }

        double nextDouble() {
            return Double.parseDouble(next());
        }

        String nextLine() {
            String str = "";
            try {
                str = br.readLine();
            } catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
    }

}
