# Created by: Yen-Ming Lee <leeym@FreeBSD.org>
# $FreeBSD: devel/gflags/Makefile 327723 2013-09-20 17:04:43Z bapt $

PORTNAME=	gflags
PORTVERSION=	2.0
CATEGORIES=	devel
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Commandline flags module for C++

LICENSE=	BSD

OPTIONS_DEFINE=	DOCS

GNU_CONFIGURE=	yes
USE_AUTOTOOLS=	libtool
USE_LDCONFIG=	yes
USES=		pathfix

PORTDOCS=	AUTHORS COPYING ChangeLog INSTALL NEWS README README_windows.txt \
		designstyle.css gflags.html

NO_STAGE=	yes
.include <bsd.port.options.mk>

post-patch:
	@${REINPLACE_CMD} \
		-e 's|^\(docdir = \).*|\1${DOCSDIR}|' \
		-e 's|^\(pkgconfigdir = \).*|\1$$(DESTDIR)$$(prefix)/libdata/pkgconfig|' \
			${WRKSRC}/Makefile.in
.if !${PORT_OPTIONS:MDOCS}
	@${REINPLACE_CMD} -e '/^install-data-am: / s| install-dist_docDATA||' ${WRKSRC}/Makefile.in
.endif

.include <bsd.port.mk>
