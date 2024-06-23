# LRU

<ins>_**Experiment name:**_</ins> Implementation of the LRU page replacement Algorithm.

<ins>_**Description:**_</ins>
The given C++ code implements the Least Recently Used (LRU) page replacement algorithm, which simulates memory management by counting page faults. It includes headers for input/output, a doubly linked list, and an unordered map. The LRU Page Replacement function takes the number of frames, an array of pages, and the number of pages as input, using a list to track page order and a map for quick access. The function iterates through page references, updating the list and counting faults when pages are not found. The main function collects user input for frames and pages, calls the LRU function, and outputs the total page faults, demonstrating the algorithm's efficiency.

<ins>_**Input**_</ins>
The input required for the provided  LRU page replacement code is as follows:
-	The number of frames available for memory allocation.
-	The total number of pages to be processed.
-	A sequence of page references, which are the actual page numbers that the algorithm will simulate managing within the specified number of frames.


<ins>_**Output**_</ins>
The output of the provided LRU page replacement code and the final result:
![image](https://github.com/simoon06/LRU/assets/139492391/bd00527d-a0e7-48a2-9cc4-bbfb1e076981)
