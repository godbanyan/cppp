/*
 * Exercise 7.33:What would happen if we gave Screen a size 
 * member defined as follows? Fix any problems you identify.
 * pos Screen::size() const
 * {
 *      return height * width;
 * }
 */

#include <string>
#include <iostream>
#include <vector>

class Screen;

class Window_mgr {
public:
    using ScreenIndex = std::vector<Screen>::size_type;
    void clear(ScreenIndex index);
private:
    std::vector<Screen> screens; //{Screen(24, 80, ' ')};
};

class Screen {
public:
    friend void Window_mgr::clear(ScreenIndex index);
    typedef std::string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd): 
        height(ht), width(wd), contents(ht * wd, ' '){}
    Screen(pos ht, pos wd, char c): 
        height(ht), width(wd), contents(ht * wd, c) {}
    char get() const { return contents[cursor]; }
    inline char get(pos ht, pos wd) const;
    inline Screen &set(pos r, pos c, char ch);
    inline Screen &set(char ch);
    Screen &move(pos r, pos c);
    Screen &display(std::ostream &os) { do_display(os); return *this; }
    const Screen &display(std::ostream &os) const { do_display(os); return *this; }
    pos size(void) const;

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
    void do_display(std::ostream &os) const { os << contents; }
};

inline Screen &Screen::move(pos r, pos c)
{
    pos row = r * width;
    cursor = row + c;
    return *this;
}

char Screen::get(pos r, pos c) const
{
    pos row = r * width;
    return contents[row + c];
}

inline Screen &Screen::set(char ch)
{
    contents[cursor] = ch;
    return *this;
}

inline Screen &Screen::set(pos r, pos c, char ch)
{
    contents[r * width + c] = ch;
    return *this;
}
Screen::pos Screen::size(void) const
{
    return width * height;
}


void Window_mgr::clear(ScreenIndex index)
{
   Screen s = screens[index];
   s.contents = std::string(s.height * s.width, ' ');
}

int main(void)
{
    Screen myScreen(5, 5, 'X');
    myScreen.move(4,0).set('#').display(std::cout);
    std::cout << "\n";
    myScreen.display(std::cout);
    std::cout << "\n";
}