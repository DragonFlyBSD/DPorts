# Created by: Heiner <h.eichmann@gmx.de>
# $FreeBSD: ports-mgmt/portdowngrade/Makefile 313338 2013-03-03 10:30:46Z crees $

PORTNAME=	portdowngrade
PORTVERSION=	1.0
CATEGORIES=	ports-mgmt
MASTER_SITES=	# empty
DISTFILES=	# none

MAINTAINER=	crees@FreeBSD.org
COMMENT=	Sets a port back to a previous version

RUN_DEPENDS=	svn:${PORTSDIR}/devel/subversion

NO_BUILD=	yes
PLIST_FILES=	sbin/portdowngrade

do-install:
	${INSTALL_SCRIPT} ${FILESDIR}/${PORTNAME} ${PREFIX}/sbin/

.include <bsd.port.mk>
