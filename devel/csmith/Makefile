# $FreeBSD: ports/devel/csmith/Makefile,v 1.6 2012/11/17 05:55:38 svnexp Exp $

PORTNAME=	csmith
PORTVERSION=	2.1.0
CATEGORIES=	devel
MASTER_SITES=	http://embed.cs.utah.edu/csmith/

MAINTAINER=	eadler@FreeBSD.org
COMMENT=	Generates random C programs that conform to the C99 standard

LICENSE=	BSD

GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_AUTOTOOLS=	autoconf
CONFIGURE_ARGS=	--docdir=${DOCSDIR}
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

MAKE_JOBS_SAFE=	yes

.include <bsd.port.pre.mk>

ONLY_FOR_ARCHS=	i386 amd64

.include <bsd.port.post.mk>
