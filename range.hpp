#ifndef RANGE_HPP
#define RANGE_HPP

namespace itertools{
    class range{
        int _begin, _end;

    public:
        range(int b, int e): _begin(b), _end(e){}

        class iterator{
            int _value;
        public:
            explicit iterator(int v): _value(v) {};
            iterator(const iterator& other) = default;
            iterator& operator=(const iterator& other){
                if(this != &other)
                    this->_value = other._value;
                return *this;
            };
            iterator& operator ++(){
                ++_value;
                return *this;
            }
            iterator operator ++(int){
                iterator tmp = *this;
                ++_value;
                return tmp;
            }
            bool operator ==(const iterator& other) {
                return (_value == other._value);
            }
            bool operator !=(const iterator& other) {
                return (_value != other._value);
            }
            int operator *(){
                return _value;
            }
        };

        iterator begin(){
            return iterator(_begin);
        }
        iterator end(){
            return iterator(_end);
        }


        typedef int	value_type;
    };
}
#endif
