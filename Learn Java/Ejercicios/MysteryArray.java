/**
 * MysteryArray
 */
public class MysteryArray {

    public static void main(String[] args) {
        int arr[] = new int[] { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
        int n = 6;
        n = arr[arr[n]];
        System.out.println(n);
    }
}