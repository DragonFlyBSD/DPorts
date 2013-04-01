# Created by: Fabian Keil <fk@fabiankeil.de>
# $FreeBSD: net-mgmt/vidalia/Makefile 314960 2013-03-22 20:06:14Z makc $

PORTNAME=	vidalia
PORTVERSION=	0.2.21
CATEGORIES=	net-mgmt security
MASTER_SITES=	https://archive.torproject.org/tor-package-archive/vidalia/ \
		https://www.torproject.org/dist/vidalia/ \
		http://tor.ccc.de/dist/vidalia/ \
		http://tor.cyberarmy.at/dist/vidalia/ \
		http://www.torservers.net/mirrors/torproject.org/dist/vidalia/

MAINTAINER=	fk@fabiankeil.de
COMMENT=	Graphical Tor controller based on Qt 4.x

USES=		cmake
INSTALLS_ICONS=	yes
USE_QT4=	gui moc_build qmake_build rcc_build uic_build network xml linguist_build
MAKE_JOBS_SAFE=	yes

.include <bsd.port.mk>
