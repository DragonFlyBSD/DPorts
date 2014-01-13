# Created by: Matthew Fuller <fullermd@futuresouth.com>
# $FreeBSD: x11/bgrot/Makefile 339247 2014-01-09 14:56:09Z bapt $

PORTNAME=	bgrot
PORTVERSION=	1.31
CATEGORIES=	x11
MASTER_SITES=	http://www.over-yonder.net/~fullermd/projects/bgrot/ \
		http://distfiles.over-yonder.net/bgrot/

MAINTAINER=	fullermd@over-yonder.net
COMMENT=	Program to handle your X background to prevent boredom

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	xv:${PORTSDIR}/graphics/xv

USES=		shebangfix perl5
SHEBANG_FILES=	*.pl

MAKE_ARGS=	IPREFIX=${STAGEDIR}${PREFIX}

.include <bsd.port.mk>
