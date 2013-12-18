# Created by: Matthew West <mwest@uct.ac.za>
# $FreeBSD: irc/gruftistats/Makefile 335950 2013-12-09 02:43:37Z adamw $

PORTNAME=	gruftistats
PORTVERSION=	0.2.4
PORTREVISION=	1
CATEGORIES=	irc
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Produces a web page of statistics and quotes from IRC channel logs

GNU_CONFIGURE=	YES
USES=	gmake

post-patch:
	@${REINPLACE_CMD} -e \
		's,strcasestr,strcasestr_x,g' ${WRKSRC}/ircstats.h \
		${WRKSRC}/lib.c

.include <bsd.port.mk>
