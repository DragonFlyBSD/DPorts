# Created by: johans
# $FreeBSD: deskutils/ljclive/Makefile 331468 2013-10-24 08:45:30Z johans $

PORTNAME=	ljclive
PORTVERSION=	0.4.10
PORTREVISION=	1
CATEGORIES=	deskutils
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${DISTNAME}
DISTNAME=	clive-${PORTVERSION}

MAINTAINER=	johans@FreeBSD.org
COMMENT=	A command line client for posting LiveJournal entries

USES=		iconv
GNU_CONFIGURE=	yes

CONFLICTS=	*clive-[1-9]*

.include <bsd.port.pre.mk>

post-patch:
	@${REINPLACE_CMD} 's/iconv "iconv/"iconv/' ${WRKSRC}/configure

.include <bsd.port.post.mk>
