# Created by: netch@netch.kiev.ua
# $FreeBSD: net/freeradius-client/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	freeradius-client
PORTVERSION=	1.1.6
CATEGORIES=	net
MASTER_SITES=	ftp://ftp.freeradius.org/pub/freeradius/ \
		ftp://ftp.suntel.com.tr/pub/freeradius/

MAINTAINER=	netch@portaone.com
COMMENT=	Client library and basic utilities for RADIUS AAA

USE_BZIP2=	yes
USE_GMAKE=	yes
GNU_CONFIGURE=	yes
USE_AUTOTOOLS=	libtool
USE_LDCONFIG=	yes

CONFLICTS=	radiusclient-ng-[0-9]*

NO_STAGE=	yes
.include <bsd.port.mk>
