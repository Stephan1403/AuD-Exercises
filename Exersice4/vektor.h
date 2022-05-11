class Vektor{
    public:
        Vektor(int dim);
        virtual ~Vektor();
        void set(int i, int val);   //set value val at index i of vector
        int get(int i);
        int bin_suche(int sw);  //get index of value suchwert (sw)
    private:
        int dimension;
        int *daten;
};
