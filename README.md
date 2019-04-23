# **_Disk Scheduling Algrithms._**

1. [FCFS](https://github.com/Teja-09/Disk-Scheduling-Algorithms/blob/master/1.fcfs.cpp)
    * First Come First Serve.        
    * It is the simplest Disk Scheduling algorithm. It services the IO requests in the order in which they arrive. There is no starvation in this algorithm, every request is serviced.

2. [SSTF](https://github.com/Teja-09/Disk-Scheduling-Algorithms/blob/master/2.sstf.cpp)
    * Shortest seek time first (SSTF) algorithm selects the disk I/O request which requires the least disk arm movement from its current position regardless of the direction. It reduces the total seek time as compared to FCFS.
    * It allows the head to move to the closest track in the service queue.

3. [SCAN](https://github.com/Teja-09/Disk-Scheduling-Algorithms/blob/master/3.scan.cpp)
    * It is also called as Elevator Algorithm. In this algorithm, the disk arm moves into a particular direction till the end, satisfying all the requests coming in its path,and then it turns backand moves in the reverse direction satisfying requests coming in its path.
    * It works in the way an elevator works, elevator moves in a direction completely till the last floor of that direction and then turns back

4. [CSCAN](https://github.com/Teja-09/Disk-Scheduling-Algorithms/blob/master/4.cscan.cpp)
    * In C-SCAN algorithm, the arm of the disk moves in a particular direction servicing requests until it reaches the last cylinder, then it jumps to the last cylinder of the opposite direction without servicing any request then it turns back and start moving in that direction servicing the remaining requests.

5. [LOOK](https://github.com/Teja-09/Disk-Scheduling-Algorithms/blob/master/5.look.cpp)
    * It is like SCAN scheduling Algorithm to some extant except the difference that, in this scheduling algorithm, the arm of the disk stops moving inwards (or outwards) when no more request in that direction exists. This algorithm tries to overcome the overhead of SCAN algorithm which forces disk arm to move in one direction till the end regardless of knowing if any request exists in the direction or not

6. [CLOOK](https://github.com/Teja-09/Disk-Scheduling-Algorithms/blob/master/6.clook.cpp)
    * C Look Algorithm is similar to C-SCAN algorithm to some extent. In this algorithm, the arm of the disk moves outwards servicing requests until it reaches the highest request cylinder, then it jumps to the lowest request cylinder without servicing any request then it again start moving outwards servicing the remaining requests.
    * It is different from C SCAN algorithm in the sense that, C SCAN force the disk arm to move till the last cylinder regardless of knowing whether any request is to be serviced on that cylinder or not

## For further explanations refer [javaTpoint](https://www.javatpoint.com/os-fcfs-scheduling-algorithm)