# New ports collection makefile for: mixer
# Date created:		17 February 2002
# Whom:			Mike Meyer <mwm@mired.org>
#
# $FreeBSD: ports/sysutils/mixer/Makefile,v 1.4 2012/11/17 06:01:38 svnexp Exp $
#

PORTNAME=	mixer
PORTVERSION=	1.0
CATEGORIES=	sysutils
MASTER_SITES=	# empty
DISTFILES=	# empty
EXTRACT_ONLY=	# empty

MAINTAINER=	mwm@mired.org
COMMENT=	A startup/shutdown script to preserve mixer settings across reboots

NO_BUILD=	yes
PLIST_FILES=	etc/rc.d/mixer.sh

do-install:
	${INSTALL_SCRIPT} ${FILESDIR}/mixer.sh ${PREFIX}/etc/rc.d

.include <bsd.port.mk>
