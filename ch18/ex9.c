
typedef char Fcn(void);
typedef Fcn *Fcn_ptr;
typedef Fcn_ptr Fcn_ptr_array[10];
Fcn_ptr_array x;

int (*x(void))[5];
typedef int Arr[5];
typedef Arr *Arr_ptr;
typedef Arr_ptr Arr_ptr_fcn(int) ;

float *(*x(void))(int);
typedef float *Fcn(int);
typedef Fcn *Fcn_ptr;
typedef Fcn_ptr Fcn_ptr_fcn(void);
Fcn_ptr_fcn x;

void (*x(int, void (*y)(int)))(int);
typedef void Fcn(int);
typedef Fcn *Fcn_ptr;
typedef Fcn_ptr Fcn_ptr_fcn(int, Fcn_ptr);
Fcn_ptr_fcn x;
