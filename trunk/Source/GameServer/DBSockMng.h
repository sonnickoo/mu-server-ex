//---------------------------------------------------------------------------
// # Project:		HaRiBO MU GameServer - Supported Season 6
// # Company:		RealCoderZ MU Development � 2011
// # Description:	DB Socket Manager Class
// # Developed By:	WolF & M.E.S
//---------------------------------------------------------------------------

// -----------------------------------------------------------------------------------------------------------------------------------------------------
#ifndef DB_SOCK_MNG_H
#define DB_SOCK_MNG_H
// -----------------------------------------------------------------------------------------------------------------------------------------------------

#include "StdAfx.H"
#include "wsJoinServerCli.H"

// -----------------------------------------------------------------------------------------------------------------------------------------------------
#define DS_UNINITIALIZED	-1
#define DataServer01		 0
#define DataServer02		 1
// -----------------------------------------------------------------------------------------------------------------------------------------------------
class DBSockMng
{
public:
	DBSockMng();
	virtual ~DBSockMng();
	// -----
	void Connect();
	void ActiveChange();
	bool Send(char* Buff, int aLen);
	bool Send(int Server, char* Buff, int aLen);
	bool MsgProc(int line, WPARAM wParam, LPARAM lParam);
	// -----
public:
	wsJoinServerCli wsCDBS[2];
	int m_ActiveServer;
};
// -----------------------------------------------------------------------------------------------------------------------------------------------------
extern DBSockMng cDBSMng;
// -----------------------------------------------------------------------------------------------------------------------------------------------------
#endif
// -----------------------------------------------------------------------------------------------------------------------------------------------------