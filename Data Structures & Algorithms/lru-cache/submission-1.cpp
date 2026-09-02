class LRUCache {
private:
    int capacity;
    vector<pair<int, int>> cacheList;
public:
    LRUCache(int capacity) {
        this->capacity = capacity;
    }
    
    int get(int key) {
        int i = 0;
        for (auto cache: this->cacheList) {
            if (cache.first == key) {
                pair<int, int> tmp = cache;
                this->cacheList.erase(this->cacheList.begin() + i);
                this->cacheList.push_back(tmp);
                return cache.second;
            }
            i++;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if (this->get(key) != -1) {
            this->cacheList.erase(this->cacheList.end() - 1);
            return this->cacheList.push_back({key, value});
        }
        if (this->cacheList.size() < capacity)
            return this->cacheList.push_back({key, value});
        this->cacheList.erase(this->cacheList.begin());
        this->cacheList.push_back({key, value});
    }
};
