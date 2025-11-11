class BrazoRobotico {
private:
    double x, y, z;
    bool agarrando;
public:
    BrazoRobotico(double x = 0, double y = 0, double z = 0);

    double getX() const;
    double getY() const;
    double getZ() const;
    bool getAgarrando() const;
    
    void mover(double xm, double ym, double zm);
    void coger();
    void soltar();
};
