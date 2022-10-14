import java.util.ArrayList;
import java.util.*;
 
class Codechef{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t= scanner.nextInt();
    while(t-->0){
        int x =  scanner.nextInt();
        int wei[] = new int[x];
        for(int i = 0;i<x;i++){
            wei[i] = scanner.nextInt();
        }
        int j = 1;
        int s = 0;
        HashMap<Integer,ArrayList<Integer>>hs= new HashMap<>();
        int count=  0;
        hs.put(s,new ArrayList<>());
        for(int i = 0;i<x-1;i++){
            if(j-i==wei[j]-wei[i]){
                hs.get(s).add(wei[i]);
                s++;
                hs.put(s,new ArrayList<>());
                hs.get(s).add(wei[j]);
            }else{
                hs.get(s).add(wei[j]);
            }
            j++;
        }
        System.out.println(hs.size());
    }
    }
}
