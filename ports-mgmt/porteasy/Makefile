# $FreeBSD: ports-mgmt/porteasy/Makefile 327762 2013-09-20 22:36:49Z bapt $

PORTNAME=	porteasy
PORTVERSION=	2.8.5
CATEGORIES=	ports-mgmt
MASTER_SITES=	# none
DISTFILES=	# none

MAINTAINER=	des@FreeBSD.org
COMMENT=	A tool for fetching and building ports

NO_BUILD=	yes
NO_WRKSUBDIR=	yes
USES=		perl5

SRC=		${.CURDIR}/src

MAN8=		porteasy.8

NO_STAGE=	yes
do-fetch:
	@${DO_NADA}

do-configure:
	@${SED} "s,%%PREFIX%%,${PREFIX}," ${SRC}/porteasy.pl >${WRKDIR}/porteasy
do-install:
	@${INSTALL_SCRIPT} ${WRKDIR}/porteasy ${PREFIX}/bin/porteasy
	@${INSTALL_MAN} ${SRC}/porteasy.8 ${PREFIX}/man/man8

.include <bsd.port.mk>
