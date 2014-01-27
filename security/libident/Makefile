# Created by: torstenb@FreeBSD.org
# $FreeBSD: security/libident/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	libident
PORTVERSION=	0.32
PORTREVISION=	1
CATEGORIES=	security
MASTER_SITES=	http://www.remlab.net/files/libident/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Small library to interface the ident protocol server (rfc1413)

USE_AUTOTOOLS=	libtool
USE_GNOME=	lthack
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

MAN3=		ident.3

NO_STAGE=	yes
post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.for i in README
	${INSTALL_DATA} ${WRKSRC}/${i} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
