#ifndef BITCOIN_INIT_H
#define BITCOIN_INIT_H

#include "wallet.h"

extern CWallet* pwalletMain;

extern std::string strWalletFileName;
void StartShutdown();
void Shutdown(void* parg);
bool AppInit2();
std::string HelpMessage();

#endif
