class BrowserHistory {
    deque<string> d;
    int index;
public:
    BrowserHistory(string homepage) {
        d = { homepage };
        index = 0;
    }

    void visit(string url) {
        d.resize(index + 1);
        d.push_back(url);
        index = d.size() - 1;
    }

    string back(int steps) {
        index -= steps;
        if (index < 0) index = 0;
        return d[index];
    }

    string forward(int steps) {
        index += steps;
        if (index >= d.size()) {
            index = d.size() - 1;
        }
        return d[index];
    }
};


// url1 url2 url3 url4
//        1

// url1 url2 url5
//             2

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */