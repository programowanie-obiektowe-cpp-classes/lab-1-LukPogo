class Wektor2D
{
    // Tutaj napisz implementacje klasy Wektor2D
    public:
        Wektor2D()
        {
            x = 0;
            y = 0;
        }

        Wektor2D(double x_wej, double y_wej)
        {
            x = x_wej;
            y = y_wej;
        }

        Wektor2D operator+(Wektor2D& w) const
        {
            return Wektor2D(w.x + x, w.y + y);
        }

        double operator*(Wektor2D& w) const
        {
            return w.x*x + w.y*y;
        }

        void setX(double x_toset)
        {
            x = x_toset;
        }

        void setY(double y_toset)
        {
            y = y_toset;
        }

        double getX()
        {
            return x;
        }

        double getY()
        {
            return y;
        }

    private:
        double x;
        double y;
};
