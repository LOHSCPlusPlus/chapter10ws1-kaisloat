class Point{
    public:
        Point();
        Point(double xVal, double yVal);
        //double getX();
        //double getY();
        // void setX(double xVal);
        // void setY(double yVal);
        void print();
        double calcDistance(Point other);
    private:
        double x;
        double y;
};


