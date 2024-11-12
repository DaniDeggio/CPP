#include <string>

class Bureaucrat {
	private:
		const std::string name;
		int grade;

	public:
		Bureaucrat(void);
		Bureaucrat(int grade);
		void getName();
		void getGrade();
};
