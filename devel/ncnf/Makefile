# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: devel/ncnf/Makefile 328226 2013-09-25 00:54:08Z bdrewery $

PORTNAME=	ncnf
PORTVERSION=	3.0.1
PORTREVISION=	3
CATEGORIES=	devel
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Generic configuration management library

LIB_DEPENDS=	strfunc.9:${PORTSDIR}/devel/libstrfunc

USE_AUTOTOOLS=	libtool
USE_LDCONFIG=	YES
GNU_CONFIGURE=	yes

.if defined(.PARSEDIR)
USE_GMAKE=	yes
.endif

.include <bsd.port.options.mk>

post-patch:
.if ! ${PORT_OPTIONS:MDOCS}
	@${REINPLACE_CMD} -e '/^SUBDIRS =/s/doc//' ${WRKSRC}/Makefile.in
.endif

.include <bsd.port.mk>
