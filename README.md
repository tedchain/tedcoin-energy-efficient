Copyright (c) 2014-2018 TedLab Sciences Ltd

TEDCOIN
=========

Copyright (c) 2014-2018 TedLab Sciences Ltd
Copyright (c) 2011-2012 Bitcoin Developers

Intro
-----
Tedcoin is a energy efficient project, with the goal of providing a long-term energy-efficient Proof of Stake crypto-currency. Built on the foundation of Bitcoin, innovations such as proof-of-stake help further advance the field of cryptocurrency.

Setup
-----
Unpack the files into a directory and run:
	
	bin/32/tedcoind (headless, 32-bit)
	bin/64/tedcoind (headless, 64-bit)

The software automatically finds other nodes to connect to.  You can enable Universal Plug and Play (UPnP) with your router/firewall or forward port 18775 (TCP) to your computer so you can receive incoming connections.

	P2P port: 18775
	RPC port: 18776

Upgrade
-------
All you existing coins/transactions should be intact with the upgrade. To upgrade first backup wallet
	tedcoind backupwallet `<destination_backup_file>`

Then shutdown tedcoind by
	tedcoind stop

Start up the new tedcoind.

See the Tedcoin site: http://tedchain.network for help and more information.