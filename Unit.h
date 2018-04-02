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
			cout<<"� ������ �� ��������"<<endl;
		}
		void defend(){
			this->hp=hp-10;
			cout<<"� ��������� � �������� � �� �������� "<<hp<<endl;
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
			cout<<"� ���� �� ������ "<<hh<<" � ��������� "<<sp<<" � � ���� "<<hp<<" ��������"<<endl;
		}
		void attack(){
			this->move();
			cout<<"� ������ � �������"<<endl;
		}
		void defend(){
			this->hp=hp-10;
			cout<<"� ��������� � ������� � �� �������� "<<hp<<endl;
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
			cout<<"� ��� �� ��������� "<<hh<<" � ��������� "<<sp<<" � � ���� "<<hp<<" ��������"<<endl;
		}
		void attack(){
			this->move();
			cout<<"� ������ � �����"<<endl;
		}
		void defend(){
			this->hp=hp-10;
			cout<<"� ��������� �� ����� � �� �������� "<<hp<<endl;
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
			cout<<"� ����� �� ������� "<<hh<<" � ��������� "<<sp<<" � � ���� "<<hp<<" ��������"<<endl;
		}
		void attack(){
			this->move();
			cout<<"� ������ �� ����"<<endl;
		}
		void defend(){
			this->hp=hp-10;
			cout<<"� ��������� ��� ����� � �� �������� "<<hp<<endl;
		}
};
