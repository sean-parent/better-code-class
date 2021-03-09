
class my_type {
    struct implementation;     // forward declaration
    /* <some_type> _remote; */ // remote part
public:
    my_type(int x, int y);
    ~my_type();
    my_type(const my_type&);
    my_type& operator=(const my_type&);
};
