class MyQueue {
public:
	/** Initialize your data structure here. */
	MyQueue() {

	}
	stack<int> s1, s2;

	/** Push element x to the back of queue. */
	void push(int x) {
		while (!s1.empty())
		{
			s2.push(s1.top());
			s1.pop();
		}
		s2.push(x);
		while (!s2.empty())
		{
			s1.push(s2.top());
			s2.pop();
		}
	}

	/** Removes the element from in front of queue and returns that element. */
	int pop() {
		//if(s1.empty()) return NULL;
		int r = s1.top();
		s1.pop();
		return r;
	}

	/** Get the front element. */
	int peek() {
		//if(s1.empty()) return NULL;        
		int r = s1.top();
		return r;


	}

	/** Returns whether the queue is empty. */
	bool empty() {
		if (s1.empty()) return true;
		return false;
	}
};