#ifndef MUTANTSTACK_CLASS_HPP
# define MUTANTSTACK_CLASS_HPP
# include <stack>
# include <iostream>
# include <iterator>
# include <deque>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
	public:
		// iterators
		typedef typename Container::iterator iterator;
		typedef typename Container::const_iterator const_iterator;
		// reverse iterators
		typedef typename Container::reverse_iterator reverse_iterator;
		typedef typename Container::const_reverse_iterator const_reverse_iterator;

		MutantStack() {}
		~MutantStack() {}

		// iterators
		iterator begin() {
			return this->c.begin();
		}
		iterator end() {
			return this->c.end();
		}

		const_iterator begin() const {
			return this->c.begin();
		}
		const_iterator end() const {
			return this->c.end();
		}

		// reverse iterators
		reverse_iterator rbegin() {
			return this->c.rbegin();
		}
		reverse_iterator rend() {
			return this->c.rend();
		}

		const_reverse_iterator rbegin() const {
			return this->c.rbegin();
		}
		const_reverse_iterator rend() const {
			return this->c.rend();
		}
};

#endif
