# New ports collection makefile for:	keep
# Date created:				26 March 2007
# Whom:					Daniel W. Steinbrook
#
# $FreeBSD: ports/sysutils/keep/Makefile,v 1.12 2013/02/04 08:25:30 svnexp Exp $
#

PORTNAME=	keep
PORTVERSION=	0.4.0
PORTREVISION=	7
CATEGORIES=	sysutils kde
MASTER_SITES=	http://fossies.org/unix/privat/old/

MAINTAINER=	dsteinbrook@gmail.com
COMMENT=	A backup system for KDE

RUN_DEPENDS=	rdiff-backup:${PORTSDIR}/sysutils/rdiff-backup

GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_KDELIBS_VER=3
USE_AUTOTOOLS=	libtool
INSTALLS_ICONS=	yes
USE_GETTEXT=	yes

.include <bsd.port.mk>
