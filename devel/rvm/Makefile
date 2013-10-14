# Created by: jaharkes
# $FreeBSD: devel/rvm/Makefile 329178 2013-10-03 13:08:43Z bsam $

PORTNAME=	rvm
PORTVERSION=	1.17
CATEGORIES=	devel
MASTER_SITES=	ftp://ftp.coda.cs.cmu.edu/pub/rvm/src/ \
		ftp://ftp.wu-wien.ac.at/pub/systems/coda/src/ \
		ftp://ftp.planetmirror.com/pub/coda/src/ \
		ftp://ftp.nctu.edu.tw/mirror/Coda/src/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Persistent VM library

LIB_DEPENDS=	liblwp.so:${PORTSDIR}/devel/lwp

USES=		gmake pathfix pkgconfig
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

.include <bsd.port.mk>
