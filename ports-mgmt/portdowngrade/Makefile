# Created by: Heiner <h.eichmann@gmx.de>
# $FreeBSD: ports-mgmt/portdowngrade/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	portdowngrade
PORTVERSION=	1.5
CATEGORIES=	ports-mgmt
MASTER_SITES=	# empty
DISTFILES=	# none

MAINTAINER=	crees@FreeBSD.org
COMMENT=	Sets a port back to a previous version

RUN_DEPENDS=	svn:${PORTSDIR}/devel/subversion

NO_BUILD=	yes
PLIST_FILES=	sbin/portdowngrade

do-install:
	${INSTALL_SCRIPT} ${FILESDIR}/${PORTNAME} ${STAGEDIR}${PREFIX}/sbin/

.include <bsd.port.mk>
