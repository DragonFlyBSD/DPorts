# Created by: eivind
# $FreeBSD: sysutils/etcmerge/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	etcmerge
PORTVERSION=	0.4
PORTREVISION=	0
CATEGORIES=	sysutils
MASTER_SITES=	# none
DISTFILES=	# none

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Automatic 3-way merge of /etc updates

NO_BUILD=	yes
NO_WRKSUBDIR=	yes

SRC=		${.CURDIR}/src

PLIST_FILES=	man/man8/${PORTNAME}.8.gz sbin/etcmerge

do-install:
	${INSTALL_SCRIPT} ${SRC}/${PORTNAME}.sh ${STAGEDIR}${PREFIX}/sbin/${PORTNAME}
	${INSTALL_MAN} ${SRC}/${PORTNAME}.8 ${STAGEDIR}${PREFIX}/man/man8

.include <bsd.port.mk>
