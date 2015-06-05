struct A;

struct scopedptr 
{
  A *m_pA;
  scopedptr(A *pA): m_pA(pA) 
  {
  }
  
  ~scopedptr() 
  { 
	  delete m_pA; 
  }

};