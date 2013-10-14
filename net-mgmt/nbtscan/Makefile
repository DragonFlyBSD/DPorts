# Created by: Kris Kennaway <kris@FreeBSD.org>
# $FreeBSD: net-mgmt/nbtscan/Makefile 327757 2013-09-20 22:24:43Z bapt $

PORTNAME=	nbtscan
PORTVERSION=	1.5.1
PORTREVISION=	1
CATEGORIES=	net-mgmt
MASTER_SITES=	http://www.inetcat.net/software/ \
		${MASTER_SITE_GENTOO}
MASTER_SITE_SUBDIR=	distfiles

MAINTAINER=	ports@FreeBSD.org
COMMENT=	NetBIOS name network scanner


GNU_CONFIGURE=	yes
CONFIGURE_ENV=	LIBS="-L${LOCALBASE}/lib"
CPPFLAGS+=	-I${LOCALBASE}/include

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}a
ALL_TARGET=	nbtscan

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/nbtscan ${PREFIX}/bin
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
