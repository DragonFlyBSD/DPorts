# Created by: Yen-Ming Lee <leeym@leeym.com>
# $FreeBSD: devel/upnp/Makefile 322729 2013-07-10 19:41:30Z pawel $

PORTNAME=	upnp
PORTVERSION=	1.6.18
PORTEPOCH=	1
CATEGORIES=	devel
MASTER_SITES=	SF/p${PORTNAME}/p${PORTNAME}/libUPnP%20${PORTVERSION}
DISTNAME=	lib${PORTNAME}-${PORTVERSION}

MAINTAINER=	pawel@FreeBSD.org
COMMENT=	Universal Plug and Play Software Development Kit

LICENSE=	BSD
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
MAKE_JOBS_SAFE=	yes

PORTDOCS=	*

OPTIONS_DEFINE=	DEBUG DOCS

DEBUG_CONFIGURE_ON=	--enable-debug
DOCS_CONFIGURE_ON=	--with-documentation=${DOCSDIR}
DOCS_CONFIGURE_OFF=	--without-documentation

post-patch:	.SILENT
	${REINPLACE_CMD} '/^pkgconfigexecdir/s|$$(libdir)|$$(prefix)/libdata|' \
		${WRKSRC}/Makefile.in

.include <bsd.port.mk>
