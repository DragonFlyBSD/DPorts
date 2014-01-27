# Created by: Nikos Ntarmos <ntarmos@cs.uoi.gr>
# $FreeBSD: x11/libxdg-basedir/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	libxdg-basedir
PORTVERSION=	1.2.0
CATEGORIES=	x11
MASTER_SITES=	http://nevill.ch/libxdg-basedir/downloads/

MAINTAINER=	ntarmos@ceid.upatras.gr
COMMENT=	Implementation of the XDG Base Directory specification

USES=		gmake
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

pre-configure:
	@${REINPLACE_CMD} -e \
		's|$$(libdir)/pkgconfig|$${prefix}/libdata/pkgconfig|' \
		${WRKSRC}/Makefile.in
	@${REINPLACE_CMD} -e 's|"etc"|"${PREFIX}/etc"|' \
		-e '/DefaultConfigDirectories\[\]/,/DefaultRelativeCacheHome\[\]/ s|"/\([^"]\)|"\1|' \
		-e '/DefaultConfigDirectories\[\]/,/DefaultRelativeCacheHome\[\]/ s|/|" DIR_SEPARATOR_STR "|g' \
		${WRKSRC}/src/basedir.c

.include <bsd.port.mk>
