# Created by: trasz <trasz@pin.if.uz.zgora.pl>
# $FreeBSD: devel/rlog/Makefile 327726 2013-09-20 17:17:44Z bapt $

PORTNAME=	rlog
PORTVERSION=	1.4
CATEGORIES=	devel
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A flexible message logging facility for C++

LICENSE=	LGPL21 LGPL3
LICENSE_COMB=	dual

USES=	pathfix
USE_GMAKE=	yes
USE_AUTOTOOLS=	libtool
USE_LDCONFIG=	yes

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e \
		'/^SUBDIRS/s|docs||' ${WRKSRC}/Makefile.in

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}/html
	@(cd ${WRKSRC}/docs/html && ${COPYTREE_SHARE} . ${DOCSDIR}/html)
.endif

.include <bsd.port.mk>
