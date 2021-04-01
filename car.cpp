
int main()

{
	Car car1("포르쉐 타이칸");
	car1.set_power();
	car1.set_speed(false);
	cout << car1.get_speed() << endl;

  
  
  
	Car car2("포르쉐 파나메라GTS");
	car2.set_power();
	car2.set_speed(true);
	cout << car2.get_speed() << endl;

  
  
  
	Car car3("포르쉐 카이엔");
	car3.set_power();
	car3.set_speed(true);
	cout << car3.get_speed() << endl;

  
  
  
	Car car4("포르쉐 마칸");
	car4.set_power();
	car4.set_speed(false);
	cout << car4.get_speed() << endl;

	return 0;
}
