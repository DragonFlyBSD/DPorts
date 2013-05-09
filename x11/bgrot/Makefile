# Created by: Matthew Fuller <fullermd@futuresouth.com>
# $FreeBSD: x11/bgrot/Makefile 317605 2013-05-07 13:12:31Z bapt $

PORTNAME=	bgrot
PORTVERSION=	1.30
PORTREVISION=	5
CATEGORIES=	x11
MASTER_SITES=	http://www.over-yonder.net/~fullermd/projects/bgrot/ \
		http://distfiles.over-yonder.net/bgrot/

MAINTAINER=	fullermd@over-yonder.net
COMMENT=	A program to handle your X background to prevent boredom

RUN_DEPENDS=	xv:${PORTSDIR}/graphics/xv

USES=		shebangfix
USE_PERL5=	yes
SHEBANG_FILES=	*.pl

MAN1=		bgrot.1
MANCOMPRESSED=	yes

post-install:
	@${CAT} pkg-message

.include <bsd.port.mk>
