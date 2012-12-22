# New ports collection makefile for:	quake-reaper
# Date created:				15 Sep 2005
# Whom:					Alejandro Pulver <alejandro@varnet.biz>
#
# $FreeBSD: ports/games/quake-reaper/Makefile,v 1.7 2012/11/17 05:57:50 svnexp Exp $
#

PORTNAME=	reaper
PORTVERSION=	0.81
CATEGORIES=	games
MASTER_SITES=	http://www.mindspring.com/~win32ch/
PKGNAMEPREFIX=	${Q1PKGNAMEPREFIX}
DISTNAME=	reaprb81

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	Quake 1 bots

USE_ZIP=	yes
NO_BUILD=	yes
NO_WRKSUBDIR=	yes

DATADIR=	${Q1DIR}/${PORTNAME}

do-install:
	@${MKDIR} ${DATADIR}
.for f in Autoexec.cfg PROGS.DAT
	@${INSTALL_DATA} ${WRKSRC}/${f} ${DATADIR}/${f:tl}
.endfor
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.   for f in B08chg.txt Dedserv.txt Reaprb80.txt Skinspec.txt
	@${REINPLACE_CMD} -e "s|`${ECHO_CMD} -e '\r'`$$||" ${WRKSRC}/${f}
	@${INSTALL_DATA} ${WRKSRC}/${f} ${DOCSDIR}/${f:tl}
.   endfor
.endif

.include "${.CURDIR}/../quake-data/Makefile.include"

.include <bsd.port.mk>
