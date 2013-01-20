# Created by: Nikos Ntarmos <ntarmos@cs.uoi.gr>
# $FreeBSD: ports/x11/libxdg-basedir/Makefile,v 1.7 2012/12/31 07:32:09 svnexp Exp $

PORTNAME=	libxdg-basedir
PORTVERSION=	1.2.0
CATEGORIES=	x11
MASTER_SITES=	http://n.ethz.ch/student/nevillm/download/libxdg-basedir/

MAINTAINER=	ntarmos@ceid.upatras.gr
COMMENT=	Implementation of the XDG Base Directory specification

USE_GMAKE=	yes
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
