#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyForm", GRADE_TO_SIGN_SHRUB, GRADE_TO_EXECUTE_SHRUB) {

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyForm", GRADE_TO_SIGN_SHRUB, GRADE_TO_EXECUTE_SHRUB) {
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cp) {
	*this = cp;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

void ShrubberyCreationForm::action() const {
	if (target.empty()) {
		return;
	}
	std::ofstream shrubFile(this->target + "_shrubbery");
	if (!shrubFile) {
		return;
	}

	shrubFile << "                                                         ." << std::endl;
	shrubFile << "                                              .         ;  " << std::endl;
	shrubFile << "                 .              .              ;%     ;;   " << std::endl;
	shrubFile << "                   ,           ,                :;%  %;   " << std::endl;
	shrubFile << "                    :         ;                   :;%;'     .,   " << std::endl;
	shrubFile << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
	shrubFile << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
	shrubFile << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
	shrubFile << "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
	shrubFile << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
	shrubFile << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
	shrubFile << "                    `:%;.  :;bd%;          %;@%;'" << std::endl;
	shrubFile << "                      `@%:.  :;%.         ;@@%;'   " << std::endl;
	shrubFile << "                        `@%.  `;@%.      ;@@%;         " << std::endl;
	shrubFile << "                          `@%%. `@%%    ;@@%;        " << std::endl;
	shrubFile << "                            ;@%. :@%%  %@@%;       " << std::endl;
	shrubFile << "                              %@bd%%%bd%%:;     " << std::endl;
	shrubFile << "                                #@%%%%%:;;" << std::endl;
	shrubFile << "                                %@@%%%::;" << std::endl;
	shrubFile << "                                %@@@%(o);  . '         " << std::endl;
	shrubFile << "                                %@@@o%;:(.,'         " << std::endl;
	shrubFile << "                            `.. %@@@o%::;         " << std::endl;
	shrubFile << "                               `)@@@o%::;         " << std::endl;
	shrubFile << "                                %@@(o)::;        " << std::endl;
	shrubFile << "                               .%@@@@%::;         " << std::endl;
	shrubFile << "                               ;%@@@@%::;.          " << std::endl;
	shrubFile << "                              ;%@@@@%%:;;;. " << std::endl;
	shrubFile << "                          ...;%@@@@@%%:;;;;,..    " << std::endl;

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &cp) {
	(void)cp;
	this->target = cp.target;
	return *this;
}
