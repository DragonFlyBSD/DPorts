# New ports collection makefile for:	cgiparse
# Date created:				30 March 1997
# Whom:					jmg
#
# $FreeBSD: ports/www/cgiparse/Makefile,v 1.26 2012/11/17 06:02:29 svnexp Exp $
#

PORTNAME=	cgiparse
PORTVERSION=	0.9b
CATEGORIES=	www devel
MASTER_SITES=	http://resnet.uoregon.edu/~gurney_j/jmpc/dist/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	C library to parse CGI Forms

LIB_DEPENDS=	mime.1:${PORTSDIR}/devel/mime:install

GNU_CONFIGURE=	yes
MAN3=		cgiclose.3 cgigetvalue.3 cginewquerystr.3
USE_LDCONFIG=	yes
CFLAGS+=	"-fPIC"

.include <bsd.port.pre.mk>

post-install:
	${LN} -sf libcgiparse.so.1 ${PREFIX}/lib/libcgiparse.so

.include <bsd.port.post.mk>
