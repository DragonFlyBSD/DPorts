# Created by: rhwang@bigpanda.com
# $FreeBSD: sysutils/most/Makefile 331353 2013-10-23 07:14:05Z ehaupt $

PORTNAME=	most
PORTVERSION=	5.0.0
PORTREVISION=	2
CATEGORIES=	sysutils
MASTER_SITES=	ftp://space.mit.edu/pub/davis/most/ \
		CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Pager (like less) which has support for windows and binary files

LICENSE=	GPLv2

LIB_DEPENDS=	slang.2:${PORTSDIR}/devel/libslang2

USE_BZIP2=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=--enable-mmap
MAKE_JOBS_UNSAFE=	yes

PLIST_FILES=	bin/most man/man1/most.1.gz
PORTDOCS=	README changes.txt lesskeys.rc most-fun.txt most.doc most.rc

PORTSCOUT=	skipv:5.0.0a

post-patch:
	@${REINPLACE_CMD} -e 's|<malloc\.h>|<stdlib.h>|' \
		${WRKSRC}/src/jdmacros.h

.include <bsd.port.mk>
