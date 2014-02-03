# Created by: Manuel Creach <manuel.creach@icloud.com>
# $FreeBSD: net/libnfs/Makefile 341917 2014-01-31 07:04:20Z miwi $

PORTNAME=	libnfs
PORTVERSION=	1.3.0
CATEGORIES=	net
MASTER_SITES=	http://cloud.github.com/downloads/sahlberg/${PORTNAME}/

MAINTAINER=	manuel.creach@icloud.com
COMMENT=	Client library for accessing NFS shares over a network

LICENSE=	LGPL21 GPLv3
LICENSE_COMB=	multi
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		pkgconfig gmake
USE_AUTORECONF=	yes
USE_AUTOTOOLS=	aclocal autoheader automake autoconf libtoolize
ACLOCAL_ARGS=	-I.
AUTOMAKE_ARGS=	--add-missing
USE_LDCONFIG=	yes

post-patch:
	${REINPLACE_CMD} 's|$$(libdir)/\(pkgconfig\)|$$(prefix)/libdata/\1|' \
		${WRKSRC}/Makefile.am

.include <bsd.port.mk>
