# Created by: Alexey A.Ukhov <auk@startext.de>
# $FreeBSD: www/mod_chroot/Makefile 336534 2013-12-15 13:54:30Z ohauer $

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
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
