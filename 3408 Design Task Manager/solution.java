/*
By Rushabh Gala
rushabhvg
GitHub:
https://github.com/rushabhvg
StackOverflow:
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/

class TM {
    int userId, taskId, priority;
    TM(int u, int t, int p) {
        this.userId = u;
        this.taskId = t;
        this.priority = p;
    }
}

class TaskManager {
    private PriorityQueue<TM> pq;
    private Map<Integer, TM> record;

    public TaskManager(List<List<Integer>> tasks) {
        record = new HashMap<>();
        pq = new PriorityQueue<>((a, b) -> {
            if (a.priority == b.priority) return b.taskId - a.taskId;
            return b.priority - a.priority;
        });

        for (List<Integer> task : tasks) {
            TM m = new TM(task.get(0), task.get(1), task.get(2));
            pq.add(m);
            record.put(m.taskId, m);
        }
    }
    
    public void add(int userId, int taskId, int priority) {
        TM m = new TM(userId, taskId, priority);
        pq.add(m);
        record.put(taskId, m);
    }
    
    public void edit(int taskId, int newPriority) {
        TM old = record.get(taskId);
        TM updated = new TM(old.userId, taskId, newPriority);
        pq.add(updated);
        record.put(taskId, updated);
    }
    
    public void rmv(int taskId) {
        record.remove(taskId);
    }
    
    public int execTop() {
        while (!pq.isEmpty()) {
            TM top = pq.poll();
            TM latest = record.get(top.taskId);
            if (latest == null) continue;
            if (latest != top) continue;
            record.remove(top.taskId);
            return top.userId;
        }
        return -1;
    }
}

/**
 * Your TaskManager object will be instantiated and called as such:
 * TaskManager obj = new TaskManager(tasks);
 * obj.add(userId,taskId,priority);
 * obj.edit(taskId,newPriority);
 * obj.rmv(taskId);
 * int param_4 = obj.execTop();
 */

/*
By Rushabh Gala
rushabhvg
GitHub:
https://github.com/rushabhvg
StackOverflow:
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/
