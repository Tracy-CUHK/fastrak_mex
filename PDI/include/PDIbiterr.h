/////////////////////////////////////////////////////////////////////
// Polhemus  www.polhemus.com
// ?2003-14 Polhemus, All Rights Reserved
/////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////
//
//  Filename:           $Workfile: PDIbiterr.h $
//
//  Project Name:       Polhemus Developer Interface  
//
//  Description:        BIT Error class
//
//  VSS $Header: /PiDevTools11/Inc/PDIbiterr.h 4     1/09/14 1:05p Suzanne $  
//
/////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////
#ifndef _PDIBITERR_H_
#define _PDIBITERR_H_

/////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////

class CPiBITErr;

/////////////////////////////////////////////////////////////////////
// CLASS CPDIbiterr
/////////////////////////////////////////////////////////////////////
class PDI_API CPDIbiterr
{
public:
	CPDIbiterr( VOID );
	virtual ~CPDIbiterr( VOID );

    VOID    Parse    ( LPTSTR szBuf, DWORD dwSize ) const;	// Parses BIT results into provide string buffer
	BOOL	IsClear	 ( VOID );

private:
	CPDIbiterr( const CPDIbiterr & );

	CPiBITErr * m_pBE;

	friend class CPDIdev;
};



/////////////////////////////////////////////////////////////////////
// END $Workfile: PDIbiterr.h $
/////////////////////////////////////////////////////////////////////
#endif // _PDIBITERR_H_