class ProductOfNumbers {
public:
    vector<int> prod{1};

    ProductOfNumbers() {}
    
    void add(int num) {
        if(num != 0){
            prod.push_back(num*prod.back());
        } else {
            prod.clear();
            prod.push_back(1);
        }
    }
    
    int getProduct(int k) {
        return k<prod.size() ? prod.back() / prod[prod.size()-k-1] : 0;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */