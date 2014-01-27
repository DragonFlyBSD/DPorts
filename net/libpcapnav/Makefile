# Created by: Yann Berthier <yb@sainte-barbe.org>
# $FreeBSD: net/libpcapnav/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	libpcapnav
PORTVERSION=	0.8
CATEGORIES=	net
MASTER_SITES=	SF/netdude/${PORTNAME}/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A libpcap wrapper library

USE_AUTOTOOLS=	libtool
CONFIGURE_ARGS=	--disable-gtk-doc --with-html-dir=${DOCSDIR}
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
post-patch:
	@${REINPLACE_CMD} -e 's|DOC_MODULE = pcapnav|DOC_MODULE =|' \
	${WRKSRC}/docs/Makefile.in
.if defined(NOPORTDOCS)
	@${REINPLACE_CMD} -e 's|docs||' ${WRKSRC}/Makefile.in
.endif

.include <bsd.port.mk>
