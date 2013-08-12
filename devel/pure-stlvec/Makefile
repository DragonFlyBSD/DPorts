# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: devel/pure-stlvec/Makefile 322734 2013-07-10 21:28:56Z bapt $

PORTNAME=	pure-stlvec
PORTVERSION=	0.2
CATEGORIES=	devel

MAINTAINER=	lichray@gmail.com
COMMENT=	Pure interface to C++ STL vector

USE_PURE=	yes

post-patch:
	@${REINPLACE_CMD} -e \
		's|^PROD_FLAGS =.*|PROD_FLAGS = $$(CPPFLAGS) $$(CFLAGS) $$(LDFLAGS)|' \
		${WRKSRC}/Makefile

.include "${.CURDIR}/../../lang/pure/bsd.pure.mk"
.include <bsd.port.mk>
