# Created by: Alexander Hausner <alex@hugo.bmg.gv.at>
# $FreeBSD: net/ifdepd/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	ifdepd
PORTVERSION=	20110412
CATEGORIES=	net
MASTER_SITES=	http://alex.bmg.gv.at/programs/

MAINTAINER=	alex@hugo.bmg.gv.at
COMMENT=	Interface Dependency daemon

MAN8=		ifdepd.8

PLIST_FILES=	bin/ifdepd

USE_RC_SUBR=	${PORTNAME}

NO_STAGE=	yes
post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
