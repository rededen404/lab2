#include <iostream>
using namespace std;
class Unit{
	protected:
		int hp;
	public:
		Unit(int hp=100){
			this->hp=hp;
		}
		int gethp() const{
			return hp;
		}
		virtual void attack(){}
		virtual void defend(){}
};
class MUnit:public Unit{
	protected:
		int sp;
	public:
		MUnit(int hp,int sp=100):Unit(hp){
			this->sp=sp;
		}
		virtual void move(){}	
};
class SUnit:public Unit{
	public:
		SUnit(int hp):Unit(hp){}
		void attack(){
			cout<<"Я атакую из крепости"<<endl;
		}
		void defend(){
			this->hp=hp-10;
			cout<<"Я защищаюсь в крепости и моё здоровье "<<hp<<endl;
		}
};
class AirUnit:public MUnit{
	protected:
		int hh;
	public:
		AirUnit(int hp, int sp, int hh=100):MUnit(hp,sp){
			this->hh=hh;
		}
		void move(){
			cout<<"Я лечу на высоте "<<hh<<" с скоростью "<<sp<<" и у меня "<<hp<<" здоровья"<<endl;
		}
		void attack(){
			this->move();
			cout<<"Я атакую с воздуха"<<endl;
		}
		void defend(){
			this->hp=hp-10;
			cout<<"Я защищаюсь в воздухе и моё здоровье "<<hp<<endl;
		}
};
class LandUnit:public MUnit{
	protected:
		int hh;
	public:
		LandUnit(int hp, int sp, int hh=100):MUnit(hp,sp){
			this->hh=hh;
		}
		void move(){
			cout<<"Я еду на дистанции "<<hh<<" с скоростью "<<sp<<" и у меня "<<hp<<" здоровья"<<endl;
		}
		void attack(){
			this->move();
			cout<<"Я атакую с земли"<<endl;
		}
		void defend(){
			this->hp=hp-10;
			cout<<"Я защищаюсь на земле и моё здоровье "<<hp<<endl;
		}
};
class SeaUnit:public MUnit{
	protected:
		int hh;
	public:
		SeaUnit(int hp, int sp, int hh=100):MUnit(hp,sp){
			this->hh=hh;
		}
		void move(){
			cout<<"Я плыву на глубине "<<hh<<" с скоростью "<<sp<<" и у меня "<<hp<<" здоровья"<<endl;
		}
		void attack(){
			this->move();
			cout<<"Я атакую из воды"<<endl;
		}
		void defend(){
			this->hp=hp-10;
			cout<<"Я защищаюсь под водой и моё здоровье "<<hp<<endl;
		}
};
