#ifndef UNION_FIND
#define UNION_FIND
template<typename T>
class UnionFind{
public:
    void Union(T t1, T t2){}
    bool Connected(T t1, T t2){return false;}
    T Find(T t){return t;}
    int count(){retrun 0;}
};

#endif