 public ArrayList <Integer> bottomView(Node root)
   {
       // Code here
       class QueObj{
           
           Node node;
           int hd;
           
           public QueObj(Node node, int hd){
               this.node=node;
               this.hd=hd;
           }
       }
       
       TreeMap<Integer,Integer> tm= new TreeMap<>();
       
       Queue<QueObj> que= new LinkedList<QueObj>();
       ArrayList<Integer> ans= new ArrayList<>();
       
       que.add(new QueObj(root,0));
       
       while(!que.isEmpty()){
           QueObj curr= que.poll();
           if(curr.node.left!=null){
               que.add(new QueObj(curr.node.left,curr.hd-1));
           }
           if(curr.node.right!=null){
               que.add(new QueObj(curr.node.right,curr.hd+1));
           }
           tm.put(curr.hd,curr.node.data);
       }
       
       for(int i: tm.keySet()){
           ans.add(tm.get(i));
       }
       return ans;
       
   }
