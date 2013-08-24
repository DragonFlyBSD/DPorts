# Ports collection makefile for:	mod_chroot
# Date created:				May 18, 2004
# Whom:					Alexey A.Ukhov <auk@startext.de>
#
# $FreeBSD: www/mod_chroot/Makefile 324744 2013-08-14 22:35:50Z ak $
#

PORTNAME=	mod_chroot
PORTVERSION=	0.5
PORTREVISION=	1
CATEGORIES=	www
MASTER_SITES=	http://core.segfault.pl/~hobbit/mod_chroot/dist/

MAINTAINER=	apache@FreeBSD.org
COMMENT=	The mod_chroot makes running Apache in a chroot easy


USE_APACHE=	22+
AP_FAST_BUILD=	yes
AP_GENPLIST=	yes

PORTDOCS=	INSTALL CAVEATS README.Apache20 README

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	@cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${DOCSDIR}
.endif
.include <bsd.port.mk>
