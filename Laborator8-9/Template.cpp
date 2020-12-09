#include "Template.hpp"

template <class X>
Vector<X> :: Vector() : dim(0), buf(NULL) {}

template <class X>
Vector<X> :: Vector(int dim, X* buf)
{
    this->dim = dim;

    this->buf = new X[dim];
    for(int i = 0; i < dim; i++)
        this->buf[i] = buf[i];
}

template <class X>
Vector<X> :: Vector(const Vector& obj) : dim(obj.dim)
{
     buf = NULL;
    *this = obj;
}

template <class X>
Vector<X> :: ~Vector()
{
   if(buf != NULL)
      delete []buf;
}

template <class X>
Vector<X>& Vector<X> :: operator =(const Vector& obj)
{
   dim = obj.dim;
   if(buf != NULL)  delete []buf;
   buf = new X[dim];
   for(int i = 0; i < dim; i++)
      buf[i] = obj.buf[i];

   return *this;
}

//Specializare clasa pentru int, double, nr_complex/fractie
template <>
void Vector<int> :: afisare()
{
    cout << "\nAcesta este un vector cu elemente de tip int.\n";
    for(int i = 0; i < dim; i++)
        cout << buf[i] << " ";
    cout << endl;
}

template <>
void Vector<double> :: afisare()
{
    cout << "\nAcesta este un vector cu elemente de tip double.\n";
    for(int i = 0; i < dim; i++)
        cout << buf[i] << " ";
    cout << endl;
}

template <>
void Vector<Fractie> :: afisare()
{
    cout << "\nAcesta este un vector cu elemente de tip Fractie.\n";
    for(int i = 0; i < dim; i++)
        cout << buf[i];
    cout << endl;
}

template <>
void Vector<Nr_complex> :: afisare()
{
    cout << "Acesta este un vector cu elemente de tip Nr_complex.\n";
    for(int i = 0; i < dim; i++)
        cout << buf[i];
    cout << endl;
}

template <class X>
void Vector<X> :: addElem(int poz, X& elem)
{
   X *v;
   int k = 0;
   v = new X[dim + 1];
   for(int i = 0; i < dim + 1; i++)
      if(i != poz)
      {
         v[i] = buf[k];
         k++;
      }
   v[poz] = elem;

   if(buf != NULL)
      delete []buf;
      dim++;
   buf = v;
}


template <class X>
void Vector<X> :: sortare()
{
    X aux;
    for (int i = 0; i < dim - 1; i++)
    for (int j = i + 1; j < dim; j++)
        if (buf[j] < buf[i])
        {
            aux = buf[i];
            buf[i] = buf[j];
            buf[j] = aux;
        }
}

template class Vector <int>;
template class Vector <double>;
template class Vector <Fractie>;
template class Vector <Nr_complex>;
