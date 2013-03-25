# Created by: Alejandro Pulver <alejandro@varnet.biz>
# $FreeBSD: games/quake-reaper/Makefile 314415 2013-03-17 09:43:27Z danfe $

PORTNAME=	reaper
PORTVERSION=	0.81
CATEGORIES=	games
MASTER_SITES=	http://www.mindspring.com/~win32ch/
PKGNAMEPREFIX=	${Q1PKGNAMEPREFIX}
DISTNAME=	reaprb81

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Quake 1 bots

USE_ZIP=	yes
NO_BUILD=	yes
NO_WRKSUBDIR=	yes

DATADIR=	${Q1DIR}/${PORTNAME}

OPTIONS_DEFINE=	DOCS

.include <bsd.port.options.mk>

do-install:
	@${MKDIR} ${DATADIR}
.for f in Autoexec.cfg PROGS.DAT
	${INSTALL_DATA} ${WRKSRC}/${f} ${DATADIR}/${f:tl}
.endfor
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
.  for f in B08chg.txt Dedserv.txt Reaprb80.txt Skinspec.txt
	@${REINPLACE_CMD} -e "s|`${ECHO_CMD} -e '\r'`$$||" ${WRKSRC}/${f}
	${INSTALL_DATA} ${WRKSRC}/${f} ${DOCSDIR}/${f:tl}
.  endfor
.endif

.include "${.CURDIR}/../quake-data/Makefile.include"
.include <bsd.port.mk>
