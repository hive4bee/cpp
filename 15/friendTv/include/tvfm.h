//
// Created by seongjin on 21. 8. 1..
//

#ifndef TVFM_H_
#define TVFM_H_

class Tv;

class Remote{
public:
    enum State{Off, On};
    enum{MinVal, MaxVal = 10};
    enum{Antenna, Cable};
    enum{TV, VCR};
private:
    int mode;
public:
    Remote(int m = TV): mode(m){}
    bool volup(Tv &t);//원형만
    bool voldown(Tv &t);
    void onoff(Tv &t);
    void chanup(Tv &t);
    void chandown(Tv &t);
    void set_mode(Tv &t);
    void set_input(Tv &t);
    void set_chan(Tv &t, int c);
};
class Tv{
public:
    friend void Remote::set_chan(Tv &t, int c);//set_chan() 만이 Tv의 private 멤버들을 변경할 수 있다.
    enum State{Off, On};
    enum {MinVal, MaxVal = 20};
    enum {Antenna, Cable};
    enum {TV, DVD};

    Tv(int s = Off, int mc = 125): State(s), volume(5), maxchannel(mc), channel(2), mode(Cable), input(TV){}
    void onoff(){state = (state == On) ? Off : On;}
    bool ison() const {return state == On;}
    bool volup();
    bool voldown();
    void chanup();
    void chandown();
    void set_mode(){mode = (mode == Antenna) ? Cable : Antenna;}
    void set_input(){input = (input == TV) ? DVD : TV;}
    void settings() const;
private:
    int state;
    int volume;
    int maxchannel;
    int channel;
    int mode;
    int input;
};
inline bool Remote::volup(Tv &t) {return t.volup();}
inline bool Remote::voldown(Tv &t) {return t.voldown();}
inline void Remote::onoff(Tv &t) {t.onoff();}
inline void Remote::chanup(Tv &t) {t.chanup();}
inline void Remote::chandown(Tv &t) {t.chandown();}
inline void Remote::set_mode(Tv &t) {t.set_mode();}
inline void Remote::set_input(Tv &t) {t.set_input();}
inline void Remote::set_chan(Tv &t, int c) {t.channel = c;}
/*
 * tv.h 의 모든 Remote 메서드들이 Tv의 private멤버들을 변경할 수 있다.
 * 하지만, tvfm.h에서는 Remote 의 set_chan() 만이 Tv의 private 멤버들을 변경할 수 있다.
 *
 * 또한, 인라인 함수들은 내부 링크를 가진다. 이것은 함수 정의가 그 함수를 사용하는 파일 안에
 * 들어 있어야 한다는 것을 의미한다. 따라서 인라인 함수의 정의들을 헤더 파일에 두고, 그 정의를 사용하는
 * 파일에서 헤더 파일을 포함시켜 함수 정의가 그 함수를 사용하는 파일 안에 들어 있게 한다.
 */


#endif //TVFM_H_
