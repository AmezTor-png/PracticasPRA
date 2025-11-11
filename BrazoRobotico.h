class BrazoRobotico {
private:
    double x, y, z;
    bool agarrando;
public:
    BrazoRobotico(double x=0, double y=0, double z=0);

    double getX() const;
    double getY() const;
    double getZ() const;
    bool estaAgarrando() const;
    
    void mover(double nuevoX, double nuevoY, double nuevoZ);
    void coger();
    void soltar();

};
