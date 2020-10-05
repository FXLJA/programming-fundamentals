#include <iostream>
#include <fstream>
#include <string>

int main(){
	std::string filepath;
	std::string data;
	int line=1;
	
	std::cout << "Nama file : ";
	std::getline(std::cin,filepath);
	std::ifstream file(filepath + ".txt");
	std::ofstream out("output.txt");
	if(!file.is_open()){
		std::cout << "file not found";
		return -1;
	}
	system("CLS");
	
	// baca setiap barus untuk compile
	do{
		file >> data;
		out << data;
		out << " ";
	} while (!file.eof());
	
	file.close();
	out.close();
	return 0;
}
