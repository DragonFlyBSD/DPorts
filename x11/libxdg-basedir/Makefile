# New ports collection makefile for:   libxdg-basedir
# Date created:                April 18, 2009
# Whom:                        Nikos Ntarmos <ntarmos@cs.uoi.gr>
#
# $FreeBSD: ports/x11/libxdg-basedir/Makefile,v 1.6 2012/11/17 06:03:18 svnexp Exp $
#

PORTNAME=	libxdg-basedir
PORTVERSION=	1.1.1
CATEGORIES=	x11
MASTER_SITES=	http://n.ethz.ch/student/nevillm/download/libxdg-basedir/

MAINTAINER=	ntarmos@cs.uoi.gr
COMMENT=	An implementation of the XDG Base Directory specification

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
