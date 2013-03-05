# New ports collection makefile for:	pure-stlvec
# Date created:		2011-10-19
# Whom:			Zhihao Yuan <lichray@gmail.com>
#
# $FreeBSD: ports/devel/pure-stlvec/Makefile,v 1.2 2012/11/17 05:56:43 svnexp Exp $
#

PORTNAME=	pure-stlvec
PORTVERSION=	0.2
CATEGORIES=	devel

MAINTAINER=	lichray@gmail.com
COMMENT=	Pure interface to C++ STL vector

USE_PURE=	yes

.include <bsd.port.pre.mk>

post-patch:
	@${REINPLACE_CMD} -e \
		's|^PROD_FLAGS =.*|PROD_FLAGS = $$(CPPFLAGS) $$(CFLAGS) $$(LDFLAGS)|' \
		${WRKSRC}/Makefile

.include "${PORTSDIR}/lang/pure/bsd.pure.mk"
.include <bsd.port.post.mk>
