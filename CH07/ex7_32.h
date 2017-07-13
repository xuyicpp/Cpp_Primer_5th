#ifndef EX7_32_H_
#define EX7_32_H_

class Window_mgr
{
public:
	void clear();
};

class Screen
{
friend void Window_mgr::clear();
private:
	unsigned height = 0, width = 0;
	unsigned cursor = 0;
	std::string contents;
public:
	Screen() = default;		//默认的构造函数
	Screen(unsigned ht, unsigned wd, char c)
		: height(ht), width(wd), contents(ht * wd, c) { }
};

void Window_mgr::clear()
{
	Screen myScreen(10, 20, 'X');
	std::cout<<"清理之前myScreen的内容是： "<<std::endl;
	std::cout<< myScreen.contents <<std::endl;
	myScreen.contents = "";
	std::cout<<"清理之后myScreen的内容是： "<<std::endl;
	std::cout<< myScreen.contents <<std::endl;
}

#endif