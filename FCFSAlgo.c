#include <stdio.h>

struct Process {
    int pid;
    int burstTime;
    int arrivalTime;
    int waitingTime;
    int turnAroundTime;
};

void calculateWaitingTime(struct Process proc[], int n) {
    int serviceTime[n];
    serviceTime[0] = 0;
    proc[0].waitingTime = 0;
    for (int i = 1; i < n; i++) {
        serviceTime[i] = serviceTime[i - 1] + proc[i - 1].burstTime;
        proc[i].waitingTime = serviceTime[i] - proc[i].arrivalTime;
        if (proc[i].waitingTime < 0) {
            proc[i].waitingTime = 0;
        }
    }
}

void calculateTurnAroundTime(struct Process proc[], int n) {
    for (int i = 0; i < n; i++) {
        proc[i].turnAroundTime = proc[i].burstTime + proc[i].waitingTime;
    }
}

void printAvgTime(struct Process proc[], int n) {
    int totalWaitingTime = 0, totalTurnAroundTime = 0;
    for (int i = 0; i < n; i++) {
        totalWaitingTime += proc[i].waitingTime;
        totalTurnAroundTime += proc[i].turnAroundTime;
    }
    printf("\nAverage waiting time = %f", (float)totalWaitingTime / (float)n);
    printf("\nAverage turn around time = %f", (float)totalTurnAroundTime / (float)n);
}

void printProcesses(struct Process proc[], int n) {
    printf("\nProcesses   Burst Time   Arrival Time   Waiting Time   Turnaround Time");
    for (int i = 0; i < n; i++) {
        printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d", proc[i].pid, proc[i].burstTime, proc[i].arrivalTime, proc[i].waitingTime, proc[i].turnAroundTime);
    }
}

int main() {
    struct Process proc[] = {{1, 6, 1}, {2, 8, 1}, {3, 7, 2}, {4, 3, 3}};
    int n = sizeof proc / sizeof proc[0];
    calculateWaitingTime(proc, n);
    calculateTurnAroundTime(proc, n);
    printProcesses(proc, n);
    printAvgTime(proc, n);
    return 0;
}
