class MinStack {
public:
    long min;
    stack<long> st;
    
    void push(int val) {
        if(st.empty()){
            st.push(0);
            min = val;
        }
        else{
            st.push(val-min);
            if(val<min) min = val;
        }
    }
    
    void pop() {
        if(st.empty()) return;
        long pop = st.top();
        if(pop<0) min = min-pop;
        st.pop();
    }
    
    int top() {
        long top = st.top();
        return (top > 0) ? top + min : (int)min;
    }
    
    int getMin() {
        return (int)min;
    }
};
