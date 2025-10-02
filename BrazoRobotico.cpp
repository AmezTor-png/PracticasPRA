using namespace std;

class BrazoRobotico
{
	private:
		double x, y, z;
		bool sujetando;
	public:
		BrazoRobotico(double x, double y, double z)
		{
			this->x = x;
			this->y = y;
			this->z = z;
		}
		coger()
		{
			sujetando = true;
		}
		soltar()
		{
			sujetando = false;
		}
		mover(double xm, double ym, double zm)
		{
			x = xm;
			y = ym;
			z = zm;
		}
}
