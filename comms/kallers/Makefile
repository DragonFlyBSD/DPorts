# New ports collection makefile for:	kallers
# Date created:			15 March 2003
# Whom:				Scott A. Moberly <smoberly@karamazov.org>
#
# $FreeBSD: ports/comms/kallers/Makefile,v 1.20 2012/11/17 05:55:00 svnexp Exp $

PORTNAME=	kallers
PORTVERSION=	0.3.0
PORTREVISION=	13
CATEGORIES=	comms kde
MASTER_SITES=	http://www.nadmm.com/kallers/src/

MAINTAINER=	smoberly@karamazov.org
COMMENT=	KDE Applet that displays Caller IDs

USE_BZIP2=		yes
USE_KDELIBS_VER=	3
USE_GMAKE=		yes
INSTALLS_ICONS=		yes
USE_AUTOTOOLS=		libtool

post-patch:
	@${REINPLACE_CMD} -e 's|@CXXFLAGS@|@CXXFLAGS@ -fPIC|' \
		${WRKSRC}/${PORTNAME}/Makefile.in

.include <bsd.port.mk>
