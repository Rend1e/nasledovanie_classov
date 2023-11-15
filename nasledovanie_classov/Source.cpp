#include <iostream>
#include <string>

using namespace std;

void ld(string& n, string& sn, int& b) {

	//string name;
	cout << "vvedide name" << endl;
	cin >> n;

	//string sername;
	cout << "vvedite sername" << endl;
	cin >> sn;

	//int birthsday;
	cout << "vvedite god rozdeniya" << endl;;
	cin >> b;
}

class doc {
protected:
	string name;
	string sername;
	int birthsday;
public:
	void print() {
		cout << endl;

	}
};

class ege : public doc{
private:
	string pvibor;
	int math;
	int russ;
	int vibor;
public:
	void funege(string n, string sn, int b, int m, int r, string pv, int v) {
		int math = m;
		int russ = r;
		int vibor = v;
		string pvibor = pv;

		name = n;
		sername = sn;
		birthsday = b;

		
	}
	void funsumm(int m, int r, int v) {
		int summ = m + r + v;
		cout << "summa ballov ege po 3 predmetam = " << summ << endl << endl;

	}
	void edit(string n, string sn, int m, int r, int v, int b) {
		int k = 1;
		while (k != 0) {
			cout << "chto vi zhelaete?" << endl;
			cout << "1) poschitat summu ballov po 3 predmetam" << endl;
			cout << "2) izmenit dannie (nepravilno vvel dannie)" << endl;
			cout << "esli ne khotite izmenit vvedite 0" << endl;
			cin >> k;

			switch (k)
			{
			case(1):
				funsumm(m, r, v);
				break;
			case(2):
				int c;
				cout << "chto vi vveli nepravilno?" << endl;
				cout << "1) nepravilno vvel lichniye dannie" << endl;
				cout << "2) nepravilno vvel balli po ege" << endl;
				cin >> c;

				switch (c)
				{
				case(1):
					ld(n, sn, b);
					break;
				case(2):
					break;
				default:
					break;
				}

				break;
			default:
				break;
			}
		}
	}
	void print() {
		cout << "vashe imya " << name << endl;
		cout << "vasha familiya " << sername << endl;
		cout << "vash god rozdeniya " << birthsday << endl;
		cout << "vash ball po math " << math << endl;
		cout << "vash ball po rus " << russ << endl;
		cout << "vash ball po " << pvibor << " " << vibor << endl << endl;
	}
};
class zachet_knizhka : public doc{
private:
	string group;
public:
	void funzk(string n, string sn, int b, string gr) {
		string group = gr;

		cout << "vashe imya " << n << endl;
		cout << "vasha familiya " << sn << endl;
		cout << "vash god rozdeniya " << b << endl;
		cout << "vasha gruppa " << gr << endl;
	}
	void edit(string n, string sn, int b, string &gr) {
		int k = 1;
		while (k != 0) {
			cout << "chto vi zhelaete?" << endl;
			cout << "1) izmenit dannie (nepravilno vvel dannie)" << endl;
			cout << "2) vivesti dannie na ekran" << endl;
			cout << "esli ne khotite izmenit vvedite 0" << endl;
			cin >> k;
			cout << endl;

			switch (k)
			{
			case(1):
				int c;
				cout << "chto vi vveli nepravilno?" << endl;
				cout << "1) nepravilno vvel lichniye dannie" << endl;
				cout << "2) nepravilno vvel gruppu" << endl;
				cin >> c;

				switch (c)
				{
				case(1):
					ld(n, sn, b);
					break;
				case(2):
					cout << "vasha grupppa: " << gr << endl;
					cout << "vvedite gruppu: ";
					cin >> gr;
					break;
				default:
					cout << "ne verniy format vvoda" << endl;
					break;
				}
				break;
			case(2):
				print();
				break;
			default:
				break;
			}
		}
	}
	void print() {
		cout << "vashe imya " << name << endl;
		cout << "vasha familiya " << sername << endl;
		cout << "vash god rozdeniya " << birthsday << endl;
		cout << "vasha grupppa: " << group << endl;
	}
};
int main() {
	bool work = 1;
	int d;

	string n;
	string sn;
	int b;
	doc dman;
	
	
	

	while (work) {
		cout << "kto vi?" << endl;
		cout << "1) abiturient" << endl;
		cout << "2) sudent" << endl;
		cout << "dlya vykhoda vvedite 0" << endl;
		cin >> d;
		cout << endl;

		ege abiturient;


		ld(n, sn, b);
		int m;
		int r;
		string pv;
		int v;
		
		zachet_knizhka student;
		string gr;

		switch (d)
		{
		case(0):
			work = 0;
			break;
		case(1):
			cout << "vvedite kol-vo ballov po math" << endl;
			cin >> m;

			cout << "vvedite kol-vo ballov po rus" << endl;
			cin >> r;

			cout << "vvedite nazvanie vibrannogo predmeta" << endl;
			cin >> pv;

			cout << "vvedite kol-vo ballov po vybranomy predmetu" << endl;
			cin >> v;

			abiturient.print();
			abiturient.funege(n, sn, b, m, r, pv, v);
			abiturient.edit(n, sn, m, r, v, b);
			break;

		case(2):
			cout << "vvedite vashu gruppu" << endl;
			cin >> gr;

			student.funzk(n, sn, b, gr);
			student.edit(n,sn,b,gr);
			break;

		default:
			break;
		}
	}	
}