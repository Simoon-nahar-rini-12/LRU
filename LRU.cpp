#include <iostream>
#include <list>
#include <unordered_map>

using namespace std;

void LRUPageReplacement(int frames, int pages[], int n) {
    list<int> lruList;
    unordered_map<int, list<int>::iterator> pageMap;
    int pageFaults = 0;

    for (int i = 0; i < n; i++) {
        int page = pages[i];

        // If the page is not in the list
        if (pageMap.find(page) == pageMap.end()) {
            // If the list is full
            if (lruList.size() == frames) {
                int last = lruList.back();
                lruList.pop_back();
                pageMap.erase(last);
            }
            pageFaults++;
        } else {
            // If the page is in the list, remove it
            lruList.erase(pageMap[page]);
        }

        // Insert the page at the front of the list
        lruList.push_front(page);
        pageMap[page] = lruList.begin();
    }

    cout << "Total Page Faults: " << pageFaults << endl;
}

int main() {
    int frames, n;
    cout << "Enter number of frames: ";
    cin >> frames;
    cout << "Enter number of pages: ";
    cin >> n;

    int pages[n];
    cout << "Enter the reference string: ";
    for (int i = 0; i < n; i++) {
        cin >> pages[i];
    }

    LRUPageReplacement(frames, pages, n);

    return 0;
}
