Copyright (c) 2016-2018 Tedcoin Developers

Tedcoin 0.5.0 BETA

Copyright (c) 2016-2018 Tedcoin Developers

Copyright (c) 2011-2012 Bitcoin Developers

Distributed under the MIT/X11 software license, see the accompanying file license.txt or http://www.opensource.org/licenses/mit-license.php.

This product includes software developed by the OpenSSL Project for use in the OpenSSL Toolkit (http://www.openssl.org/).  This product includes cryptographic software written by Eric Young (eay@cryptsoft.com).

Intro
-----
Tedcoin is a crypto project, with the goal of providing a long-term energy-efficient X11-based crypto-currency. Built on the foundation of Bitcoin, innovations such as proof-of-stake help further advance the field of cryptocurrency.

Setup
-----
Unpack the files into a directory and run:
 bin/32/tedcoind (headless, 32-bit)
 bin/64/tedcoind (headless, 64-bit)

The software automatically finds other nodes to connect to. You can enable Universal Plug and Play (UPnP) with your router/firewall or forward port 

18775 (TCP) to your computer so you can receive incoming connections. Tedcoin works without incoming connections, but allowing incoming connections helps the Tedcoin network.


Upgrade
-------
All you existing coins/transactions should be intact with the upgrade.
To upgrade first backup wallet
tedcoind backupwallet <destination_backup_file>
Then shutdown tedcoind by
tedcoind stop
Start up the new tedcoind.

See the Tedcoin site: http://tedchain.network for help and more information.