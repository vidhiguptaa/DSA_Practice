class StockPrice {
public:
    unordered_map<int,int>mp;
    int CurrentTime=0;
    multiset<int>s;
    StockPrice() {
        
    }
    
    void update(int timestamp, int price) {
     if(mp.find(timestamp) != mp.end()){
            auto it = s.find(mp[timestamp]);
	        s.erase(it);
        }
        mp[timestamp]=price;
        s.insert(price);
        CurrentTime = max(timestamp, CurrentTime);
    }
    int current() {
        return mp[CurrentTime];
    }
    
    int maximum() {
        auto it=s.end();
        return *(--it);
    }
    
    int minimum() {
        return *s.begin();
    }
};
