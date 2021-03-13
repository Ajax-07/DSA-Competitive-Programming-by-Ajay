using namespace std;

template <typename T>
class node{

    public:

    T data;
    node<T> *next;

       node(T data){
           next = NULL;
           this->data = data;
       }

};